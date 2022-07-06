#include "guide.h"
#include "ui_guide.h"
#include "beach.h"
#include "user.h"
#include "lodge.h"
#include "guide.h"

guide::guide(Database db, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::guide)
{
    this->db = db;
    ui->setupUi(this);
}

guide::~guide()
{
    delete ui;
}

void guide::on_beach_btn_clicked()
{
    this->close();
    beach beach(db);
    beach.setModal(true);
    beach.exec();
    this->show();
}

void guide::on_lodge_btn_clicked()
{
    this->close();
    lodge lodge(db);
    lodge.setModal(true);
    lodge.exec();
    this->show();
}

void guide::on_guide_btn_clicked()
{
    this->close();
    guide guide(db);
    guide.setModal(true);
    guide.exec();
    this->show();
}

void guide::on_user_btn_clicked()
{
    this->close();
    user user(db);
    user.setModal(true);
    user.exec();
    this->show();
}
