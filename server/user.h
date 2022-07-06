#ifndef USER_H
#define USER_H

#include <QDialog>
#include <QMessageBox>
#include <QString>
#include <QTableWidget>
#include "database.h"

namespace Ui {
class user;
}

class user : public QDialog
{
    Q_OBJECT

public:
    explicit user(Database db,QWidget *parent = nullptr);
    ~user();

private slots:
    void on_user_btn_clicked();

    void on_guide_btn_clicked();

    void on_beach_btn_clicked();

    void on_lodge_btn_clicked();

    void on_refresh_btn_clicked();

private:
    Ui::user *ui;
    Database db;
    QSqlQuery sql_query;
    char query[1024];

};

#endif // USER_H
