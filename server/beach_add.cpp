#include "beach_add.h"
#include "ui_beach_add.h"

beach_add::beach_add(Database dbs, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::beach_add),
    db(dbs)
{
    ui->setupUi(this);
}

beach_add::~beach_add()
{
    delete ui;
}

void beach_add::on_update_btn_clicked()
{

    if(!check)
    {
        QMessageBox::information(this, "error", "중복확인");
        return;
    }
    QList<QString> beach_list;
    beach_list.append(ui->name_text->text());
    beach_list.append(ui->area_text->text());
    beach_list.append(ui->len_text->text());
    beach_list.append(ui->dress_text->text());
    beach_list.append(ui->shower_text->text());
    beach_list.append(ui->toilet_text->text());
    beach_list.append(ui->visitor_text->text());
    if(beach_list.value(0) != "")
    {
        sprintf(query, "INSERT INTO beach VALUES('%s','%s','%s','%s','%s','%s','%s','%s','%s')",
                beach_list.value(0).toLocal8Bit().data(),beach_list.value(1).toLocal8Bit().data(),
                beach_list.value(2).toLocal8Bit().data(),beach_list.value(3).toLocal8Bit().data(),
                beach_list.value(4).toLocal8Bit().data(),beach_list.value(5).toLocal8Bit().data(),"0","0",
                beach_list.value(6).toLocal8Bit().data());
        sql_query.exec(QString::fromLocal8Bit(query));
        if(sql_query.lastError().type() != QSqlError::NoError)
        {
            QMessageBox::information(this, "error", "데이터베이스 접근 오류");
        }
        else
        {
            QMessageBox::information(this, "","해수욕장 추가 성공");
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


