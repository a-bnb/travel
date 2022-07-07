#ifndef LODGE_ADD_H
#define LODGE_ADD_H

#include <QDialog>
#include <QMessageBox>
#include <iostream>
#include <cstring>
#include <QList>
#include "database.h"

namespace Ui {
class lodge_add;
}

class lodge_add : public QDialog
{
    Q_OBJECT

public:
    explicit lodge_add(Database dbs, QWidget *parent = nullptr);
    ~lodge_add();

private slots:
    void on_check_btn_clicked();

    void on_signup_btn_clicked();

    void on_exit_btn_clicked();

private:
    Ui::lodge_add *ui;
    Database db;
    bool check;
    QSqlQuery sql_query;
    char query[1024];
};

#endif // LODGE_ADD_H
