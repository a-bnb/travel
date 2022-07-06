#include "beach.h"
#include "ui_beach.h"
#include "beach.h"
#include "user.h"
#include "lodge.h"
#include "guide.h"

beach::beach(Database db, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::beach)
{
    this->db = db;
    ui->setupUi(this);
}

beach::~beach()
{
    delete ui;
}

void beach::on_beach_btn_clicked()
{
    this->close();
    beach beach(db);
    beach.setModal(true);
    beach.exec();
    this->show();}

void beach::on_lodge_btn_clicked()
{
    this->close();
    lodge lodge(db);
    lodge.setModal(true);
    lodge.exec();
    this->show();
}

void beach::on_guide_btn_clicked()
{
    this->close();
    guide guide(db);
    guide.setModal(true);
    guide.exec();
    this->show();
}

void beach::on_user_btn_clicked()
{
    this->close();
    user user(db);
    user.setModal(true);
    user.exec();
    this->show();
}
