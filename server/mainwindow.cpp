#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "beach.h"
#include "user.h"
#include "lodge.h"
#include "guide.h"

MainWindow::MainWindow(Database db, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    this->db = db;
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_beach_btn_clicked()
{
    this->close();
    beach beach(db);
    beach.setModal(true);
    beach.exec();
    this->show();
}

void MainWindow::on_lodge_btn_clicked()
{
    this->close();
    lodge lodge(db);
    lodge.setModal(true);
    lodge.exec();
    this->show();
}

void MainWindow::on_guide_btn_clicked()
{
    this->close();
    guide guide(db);
    guide.setModal(true);
    guide.exec();
    this->show();
}

void MainWindow::on_user_btn_clicked()
{
    this->close();
    user user(db);
    user.setModal(true);
    user.exec();
    this->show();
}

