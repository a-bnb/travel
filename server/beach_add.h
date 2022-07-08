#ifndef BEACH_ADD_H
#define BEACH_ADD_H

#include <QDialog>
#include <QMessageBox>
#include <iostream>
#include <cstring>
#include <QList>
#include "database.h"

namespace Ui {
class beach_add;
}

class beach_add : public QDialog
{
    Q_OBJECT

public:
    explicit beach_add(Database dbs, QWidget *parent = nullptr);
    explicit beach_add(QString b_name, Database dbs, QWidget *parent = nullptr);
    ~beach_add();
    void edit_set();

private slots:
    void on_update_btn_clicked();

    void on_exit_btn_clicked();

    void on_check_btn_clicked();

private:
    Ui::beach_add *ui;
    Database db;
    bool check;
    QSqlQuery sql_query;
    char query[1024];
    QString b_name;

};

#endif // BEACH_ADD_H
