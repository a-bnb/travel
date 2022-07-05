#include "user.h"
#include "ui_user.h"
#include "beach.h"
#include "user.h"
#include "lodge.h"
#include "guide.h"

user::user(Database db, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::user)
{
    this->db = db;
    ui->setupUi(this);
}

user::~user()
{
    delete ui;
}

void user::on_beach_btn_clicked()
{
    this->close();
    beach beach(db);
    beach.setModal(true);
    beach.exec();
    this->show();
}

void user::on_lodge_btn_clicked()
{
    this->close();
    lodge lodge(db);
    lodge.setModal(true);
    lodge.exec();
    this->show();
}

void user::on_guide_btn_clicked()
{
    this->close();
    guide guide(db);
    guide.setModal(true);
    guide.exec();
    this->show();
}

void user::on_user_btn_clicked()
{
    this->close();
    user user(db);
    user.setModal(true);
    user.exec();
    this->show();
}
