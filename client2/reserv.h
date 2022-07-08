#ifndef RESERV_H
#define RESERV_H

#include <QDialog>
#include <QMessageBox>
#include <QString>
#include <QTableWidget>
#include <QList>
#include <QSqlError>
#include "database.h"

namespace Ui {
class reserv;
}

class reserv : public QDialog
{
    Q_OBJECT

public:
    explicit reserv(QString id, Database dbs, QWidget *parent = nullptr);
    ~reserv();

private slots:
    void on_refresh_btn_clicked();

    void on_add_btn_clicked();

    void on_remove_btn_clicked();

    void on_edit_btn_clicked();

    void on_reservtable_itemClicked();

private:
    Ui::reserv *ui;
    Database db;
    bool check;
    QString id;
    QSqlQuery sql_query;
    char query[1024];
};

#endif // RESERV_H
