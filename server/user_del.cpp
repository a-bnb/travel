#include "user_del.h"
#include "ui_user_del.h"

user_del::user_del(Database dbs, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::user_del),
    db(dbs)
{
    ui->setupUi(this);
}

user_del::~user_del()
{
    delete ui;
}



void user_del::on_search_btn_clicked()
{
    QString id = ui->ID_text->text();
    sprintf(query, "SELECT * FROM user WHERE userid = '%s'", id.toLocal8Bit().data());
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

void user_del::on_del_btn_clicked()
{

}
