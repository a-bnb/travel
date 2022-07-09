#ifndef RESERV_ADD_H
#define RESERV_ADD_H

#include <QDialog>
#include <QMessageBox>
#include <iostream>
#include <cstring>
#include "database.h"

namespace Ui {
class reserv_add;
}

class reserv_add : public QDialog
{
    Q_OBJECT

public:
    explicit reserv_add(Database dbs, QWidget *parent = nullptr);
    explicit reserv_add(QString r_id, Database dbs, QWidget *parent = nullptr);
    ~reserv_add();
    void edit_set();
    bool check_list(QList<QString> reserv_list);
    bool check_included(QString table_name, QString check_col, QString check_str);

private slots:
    void on_signup_btn_clicked();

    void on_exit_btn_clicked();

private:
    Ui::reserv_add *ui;
    Database db;
    QString r_id;
    QSqlQuery sql_query;
    char query[1024];
};

#endif // RESERV_ADD_H
