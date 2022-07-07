#ifndef GUIDE_ADD_H
#define GUIDE_ADD_H

#include <QDialog>
#include <QMessageBox>
#include <iostream>
#include <cstring>
#include "database.h"

namespace Ui {
class guide_add;
}

class guide_add : public QDialog
{
    Q_OBJECT

public:
    explicit guide_add(Database dbs,QWidget *parent = nullptr);
    ~guide_add();

private slots:
    void on_signup_btn_clicked();

    void on_exit_btn_clicked();

private:
    Ui::guide_add *ui;
    Database db;
    QSqlQuery sql_query;
    char query[1024];
};

#endif // GUIDE_ADD_H
