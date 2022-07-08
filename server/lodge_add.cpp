#include "lodge_add.h"
#include "ui_lodge_add.h"

lodge_add::lodge_add(Database dbs, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::lodge_add),
    db(dbs)
{
    ui->setupUi(this);
    l_name = "";
}

lodge_add::lodge_add(QString l_name, Database dbs, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::lodge_add),
    db(dbs),
    l_name(l_name)
{
    ui->setupUi(this);
    edit_set();
}


lodge_add::~lodge_add()
{
    delete ui;
}

void lodge_add::edit_set()
{
    ui->name_text->setText(l_name);
    sprintf(query, "SELECT * FROM hotel WHERE hotel_name = '%s'", l_name.toLocal8Bit().data());
    sql_query.exec(QString::fromLocal8Bit(query));
    if(sql_query.size() != 0)
    {
        sql_query.next();
        ui->sortation_text->setText(sql_query.value(1).toString());
        ui->add_text->setText(sql_query.value(2).toString());
        ui->report_text->setText(sql_query.value(3).toString());
        ui->room_text->setText(sql_query.value(4).toString());
        ui->num_text->setText(sql_query.value(5).toString());
    }
    else
    {
        this->close();
    }
}

void lodge_add::on_check_btn_clicked()
{
    QString name = ui->name_text->text();
    if(name == "")
    {
        QMessageBox::information(this, "error", "공백");
        return;
    }
    sprintf(query, "SELECT * FROM hotel WHERE hotel_name= '%s'", name.toLocal8Bit().data());
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

void lodge_add::on_signup_btn_clicked()
{

    QList<QString> lodge_list;
    lodge_list.append(ui->name_text->text());
    lodge_list.append(ui->sortation_text->text());
    lodge_list.append(ui->add_text->text());
    lodge_list.append(ui->report_text->text());
    lodge_list.append(ui->room_text->text());
    lodge_list.append(ui->num_text->text());

    if(l_name == lodge_list.value(0))
        check=true;
    if(!check)
    {
        QMessageBox::information(this, "error", "중복확인");
        return;
    }

    if(lodge_list.value(0) != "")
    {
        if(l_name=="")
        {
            sprintf(query, "INSERT INTO hotel VALUES('%s','%s','%s','%s','%s','%s')",
                    lodge_list.value(0).toLocal8Bit().data(),lodge_list.value(1).toLocal8Bit().data(),
                    lodge_list.value(2).toLocal8Bit().data(),lodge_list.value(3).toLocal8Bit().data(),
                    lodge_list.value(4).toLocal8Bit().data(),lodge_list.value(5).toLocal8Bit().data());
        }
        else
        {
            sprintf(query, "UPDATE hotel SET hotel_name='%s', hotel_sortation='%s',hotel_address='%s',hotel_report='%s',hotel_room='%s',hotel_number='%s' WHERE hotel_name ='%s'",
                    lodge_list.value(0).toLocal8Bit().data(),lodge_list.value(1).toLocal8Bit().data(),
                    lodge_list.value(2).toLocal8Bit().data(),lodge_list.value(3).toLocal8Bit().data(),
                    lodge_list.value(4).toLocal8Bit().data(),lodge_list.value(5).toLocal8Bit().data(),
                    l_name.toLocal8Bit().data());

        }
        sql_query.exec(QString::fromLocal8Bit(query));
        if(sql_query.lastError().type() != QSqlError::NoError)
        {
            QMessageBox::information(this, "error", "데이터베이스 접근 오류");
            std::cout<<sql_query.lastError().text().toStdString()<<std::endl;

        }
        else
        {
            QMessageBox::information(this, "", "숙박업소 추가 성공");
            this->close();
        }
    }
}

void lodge_add::on_exit_btn_clicked()
{
    this->close();
}
