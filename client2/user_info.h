#ifndef USER_INFO_H
#define USER_INFO_H

#include <QDialog>
#include <QMessageBox>
#include <QString>
#include <QTableWidget>
#include <QList>
#include <QSqlError>
#include "database.h"

namespace Ui {
class user_info;
}

class user_info : public QDialog
{
    Q_OBJECT

public:
    explicit user_info(QString id,Database dbs, QWidget *parent = nullptr);
    ~user_info();
    bool check_id(QString id);

private slots:
    void on_refresh_btn_clicked();

    void on_remove_btn_clicked();

    void on_edit_btn_clicked();

    void on_undo_btn_clicked();

    void on_usertable_itemClicked(QTableWidgetItem *item);

private:
    Ui::user_info *ui;
    Database db;
    bool check;
    QString id;
    QSqlQuery sql_query;
    char query[1024];
};

#endif // USER_INFO_H
