#include "beach_add.h"
#include "ui_beach_add.h"

beach_add::beach_add(Database dbs, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::beach_add),
    db(dbs)
{
    ui->setupUi(this);
    this->b_name="";
}

beach_add::beach_add(QString b_name, Database dbs, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::beach_add),
    db(dbs),
    b_name(b_name)
{
    ui->setupUi(this);
    edit_set();
}


beach_add::~beach_add()
{
    delete ui;
}

void beach_add::edit_set()
{
    ui->name_text->setText(b_name);
    sprintf(query, "SELECT * FROM beach WHERE beach_name = '%s'", b_name.toLocal8Bit().data());
    sql_query.exec(QString::fromLocal8Bit(query));
    if(sql_query.size() != 0)
    {
        sql_query.next();
        ui->dress_text->setText(sql_query.value(1).toString());
        ui->shower_text->setText(sql_query.value(2).toString());
        ui->toilet_text->setText(sql_query.value(3).toString());
        ui->visitor_text->setText(sql_query.value(4).toString());
    }
    else
    {
        this->close();
    }
}

void beach_add::on_update_btn_clicked()
{
    QList<QString> beach_list;
    beach_list.append(ui->name_text->text());
    beach_list.append(ui->dress_text->text());
    beach_list.append(ui->shower_text->text());
    beach_list.append(ui->toilet_text->text());
    beach_list.append(ui->visitor_text->text());


    if(b_name == beach_list.value(0))
        check=true;

    if(!check)
    {
        QMessageBox::information(this, "error", "중복확인");
        return;
    }

    for(int i=1; i<beach_list.length(); i++)
    {
        if(beach_list.value(i) == "")
            beach_list.value(i) = "0";
    }

    if(beach_list.value(0) != "")
    {
        if(b_name =="")
        {
            sprintf(query, "INSERT INTO beach VALUES('%s','%s','%s','%s','%s')",
                    beach_list.value(0).toLocal8Bit().data(),beach_list.value(1).toLocal8Bit().data(),
                    beach_list.value(2).toLocal8Bit().data(),beach_list.value(3).toLocal8Bit().data(),
                    beach_list.value(4).toLocal8Bit().data());
        }
        else
        {
            sprintf(query, "UPDATE beach SET beach_name='%s', beach_room='%s', beach_shower='%s', beach_wash='%s', beach_guest='%s' WHERE beach_name='%s'",
                    beach_list.value(0).toLocal8Bit().data(),beach_list.value(1).toLocal8Bit().data(),
                    beach_list.value(2).toLocal8Bit().data(),beach_list.value(3).toLocal8Bit().data(),
                    beach_list.value(4).toLocal8Bit().data(), b_name.toLocal8Bit().data());
        }
        std::cout<<query<<std::endl;
        sql_query.exec(QString::fromLocal8Bit(query));
        if(sql_query.lastError().type() != QSqlError::NoError)
        {
            QMessageBox::information(this, "error", "데이터베이스 접근 오류");

        }
        else
        {
            QMessageBox::information(this, "", ui->update_btn->text()+" 성공");
            this->close();
        }
    }
}

void beach_add::on_check_btn_clicked()
{
    QString name = ui->name_text->text();
    if(name == "")
    {
        QMessageBox::information(this, "error", "공백");
        return;
    }
    sprintf(query, "SELECT * FROM beach WHERE beach_name= '%s'", name.toLocal8Bit().data());
    sql_query.exec(QString::fromLocal8Bit(query));
    if(sql_query.size() == 0)
    {
        check = true;
        QMessageBox::information(this, "OK", "통과");
    }
    else
    {
        QMessageBox::information(this, "error", "중복");
    }
}

void beach_add::on_exit_btn_clicked()
{
    this->close();
}


