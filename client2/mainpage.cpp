#include "mainpage.h"
#include "ui_mainpage.h"
#include "user_info.h"
#include "reserv.h"

mainpage::mainpage(QString id, Database dbs, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mainpage),
    db(dbs),
    id(id)
{
    ui->setupUi(this);
}

mainpage::~mainpage()
{
    delete ui;
}

void mainpage::check_removed()
{
    sprintf(query, "SELECT * FROM user WHERE userid = '%s'", id.toLocal8Bit().data());
    sql_query.exec(QString::fromLocal8Bit(query));
    if(sql_query.size() == 0)
    {
        this->close();
    }

}

void mainpage::on_reserv_btn_clicked()
{
    this->hide();
    reserv r(id, db);
    r.setModal(true);
    r.exec();
    this->show();
}

void mainpage::on_user_btn_clicked()
{
    this->hide();
    user_info u(id, db);
    u.setModal(true);
    u.exec();
    this->show();
}

void mainpage::on_exit_btn_clicked()
{
    this->close();

}
