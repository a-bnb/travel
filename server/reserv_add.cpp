#include "reserv_add.h"
#include "ui_reserv_add.h"

reserv_add::reserv_add(Database dbs, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reserv_add),
    db(dbs)
{
    ui->setupUi(this);
    r_id="";
}

reserv_add::reserv_add(QString r_id, Database dbs, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reserv_add),
    db(dbs),
    r_id(r_id)
{
    ui->setupUi(this);
    this->edit_set();
}

reserv_add::~reserv_add()
{
    delete ui;
}

void reserv_add::edit_set()
{
    sprintf(query, "SELECT * FROM reservation WHERE reserv_id = %s", r_id.toLocal8Bit().data());
    sql_query.exec(QString::fromLocal8Bit(query));
    if(sql_query.size() != 0)
    {
        sql_query.next();
        ui->date_text->setText(sql_query.value(1).toString());
        ui->ID_text->setText(sql_query.value(2).toString());
        ui->guide_text->setText(sql_query.value(3).toString());
        ui->lodge_text->setText(sql_query.value(4).toString());
        ui->beach_text->setText(sql_query.value(5).toString());
        ui->signup_btn->setText("예약정보 수정");
    }
    else
    {
        this->close();
    }
}

bool reserv_add::check_included(QString table_name, QString check_col, QString check_str)
{
    sprintf(query, "SELECT * FROM %s WHERE %s = '%s'",
            table_name.toLocal8Bit().data(), check_col.toLocal8Bit().data(), check_str.toLocal8Bit().data());
    sql_query.exec(QString::fromLocal8Bit(query));
    if(sql_query.size() == 0)
    {
        return false;
    }
    else
    {
        if(table_name=="guide" && r_id=="")
        {
            sql_query.next();
            if(sql_query.value(2).toString()!="break")
                return false;
        }
        return true;
    }
}

bool reserv_add::check_list(QList<QString> reserv_list)
{
    QList<QString> table_list = {"user", "guide", "hotel", "beach"};
    QList<QString> col_list = {"userid", "guidename", "hotel_name", "beach_name"};

    int i;
    for(i=1; i<reserv_list.length(); i++)
    {
        if(!check_included(table_list.value(i-1), col_list.value(i-1), reserv_list.value(i)))
        {
            QMessageBox::information(this, "error", table_list.value(i-1)+" error");
            return false;
        }

    }
    sprintf(query, "UPDATE guide SET guidestate='schduled', charger = (SELECT username FROM user WHERE userid='%s') WHERE guidename = '%s'",
            reserv_list.value(1).toLocal8Bit().data(), reserv_list.value(2).toLocal8Bit().data());
    sql_query.exec(QString::fromLocal8Bit(query));
    if(sql_query.lastError().type() != QSqlError::NoError)
    {
        QMessageBox::information(this, "error", "데이터베이스 접근 오류");
        std::cout<<sql_query.lastError().text().toStdString()<<std::endl;
        return false;
    }
    return true;
}

void reserv_add::on_signup_btn_clicked()
{
    QList<QString> reserv_list;
    reserv_list.append(ui->date_text->text());
    reserv_list.append(ui->ID_text->text());
    reserv_list.append(ui->guide_text->text());
    reserv_list.append(ui->lodge_text->text());
    reserv_list.append(ui->beach_text->text());

    if(!check_list(reserv_list))
        return;
    if(r_id=="")
    {
        sprintf(query, "INSERT INTO reservation(reserv_date, client_id, guide_name, hotel_name, beach_name) VALUES(%s, '%s', '%s', '%s', '%s')",
                reserv_list.value(0).toLocal8Bit().data(),reserv_list.value(1).toLocal8Bit().data(),
                reserv_list.value(2).toLocal8Bit().data(),reserv_list.value(3).toLocal8Bit().data(),
                reserv_list.value(4).toLocal8Bit().data());
    }
    else
    {
        sprintf(query, "UPDATE reservation SET  reserv_date='%s',client_id='%s', guide_name='%s', hotel_name='%s', beach_name='%s' WHERE reserv_id=%s",
                reserv_list.value(0).toLocal8Bit().data(),reserv_list.value(1).toLocal8Bit().data(),
                reserv_list.value(2).toLocal8Bit().data(),reserv_list.value(3).toLocal8Bit().data(),
                reserv_list.value(4).toLocal8Bit().data(),r_id.toLocal8Bit().data());
    }
    sql_query.exec(QString::fromLocal8Bit(query));
    if(sql_query.lastError().type() != QSqlError::NoError)
    {
        QMessageBox::information(this, "error", "데이터베이스 접근 오류");
        std::cout<<sql_query.lastError().text().toStdString()<<std::endl;
    }
    else
    {
        QMessageBox::information(this,"message", ui->signup_btn->text()+" 완료");
        this->close();
    }
}

void reserv_add::on_exit_btn_clicked()
{
    this->close();
}
