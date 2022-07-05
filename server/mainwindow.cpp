#include "mainwindow.h"
#include "ui_mainwindow.h"

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

