#include "lodge_add.h"
#include "ui_lodge_add.h"

lodge_add::lodge_add(Database dbs, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::lodge_add),
    db(dbs)
{
    ui->setupUi(this);
}

lodge_add::~lodge_add()
{
    delete ui;
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
    if(!check)
    {
        QMessageBox::information(this, "error", "중복확인");
        return;
    }
    QList<QString> beach_list;
    beach_list.append(ui->name_text->text());
    beach_list.append(ui->sortation_text->text());
    beach_list.append(ui->num_text->text());
    beach_list.append(ui->add_text->text());

    if(beach_list.value(0) != "")
    {
        sprintf(query, "INSERT INTO hotel(hotel_name, hotel_sortation, hotel_number, hotel_address) VALUES('%s','%s','%s','%s')",
                beach_list.value(0).toLocal8Bit().data(),beach_list.value(1).toLocal8Bit().data(),
                beach_list.value(2).toLocal8Bit().data(),beach_list.value(3).toLocal8Bit().data());
        sql_query.exec(QString::fromLocal8Bit(query));
        if(sql_query.lastError().type() != QSqlError::NoError)
        {
            QMessageBox::information(this, "error", "데이터베이스 접근 오류");
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
