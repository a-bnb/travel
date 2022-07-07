#ifndef USER_DEL_H
#define USER_DEL_H

#include <QDialog>
#include <QMessageBox>
#include <QString>
#include <QTableWidget>
#include "database.h"

namespace Ui {
class user_del;
}

class user_del : public QDialog
{
    Q_OBJECT

public:
    explicit user_del(Database dbs, QWidget *parent = nullptr);
    ~user_del();

private slots:
    void on_search_btn_clicked();

    void on_del_btn_clicked();

private:
    Ui::user_del *ui;
    Database db;
    QSqlQuery sql_query;
    char query[1024];

};

#endif // USER_DEL_H
