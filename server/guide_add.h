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
    explicit guide_add(QString id, Database dbs,QWidget *parent = nullptr);
    ~guide_add();
    void edit_set();


private slots:
    void on_signup_btn_clicked();

    void on_exit_btn_clicked();

    void on_check_btn_clicked();

private:
    Ui::guide_add *ui;
    Database db;
    bool check;
    QString g_id;
    QString f_name;
    QSqlQuery sql_query;
    char query[1024];

};

#endif // GUIDE_ADD_H
