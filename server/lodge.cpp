#include "lodge.h"
#include "ui_lodge.h"
#include "beach.h"
#include "user.h"
#include "lodge.h"
#include "guide.h"

lodge::lodge(Database db, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::lodge)
{
    this->db = db;
    ui->setupUi(this);
}

lodge::~lodge()
{
    delete ui;
}


void lodge::on_beach_btn_clicked()
{
    this->close();
    beach beach(db);
    beach.setModal(true);
    beach.exec();
    this->show();
}

void lodge::on_lodge_btn_clicked()
{
    this->close();
    lodge lodge(db);
    lodge.setModal(true);
    lodge.exec();
    this->show();
}

void lodge::on_guide_btn_clicked()
{
    this->close();
    guide guide(db);
    guide.setModal(true);
    guide.exec();
    this->show();
}

void lodge::on_user_btn_clicked()
{
    this->close();
    user user(db);
    user.setModal(true);
    user.exec();
    this->show();
}
