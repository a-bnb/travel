#ifndef RESERV_ADD_H
#define RESERV_ADD_H

#include <QDialog>
#include <QMessageBox>
#include <QString>
#include <QTableWidget>
#include <QList>
#include <QSqlError>
#include <QDataStream>
#include "database.h"

namespace Ui {
class reserv_add;
}

class reserv_add : public QDialog
{
    Q_OBJECT

public:
    explicit reserv_add(bool edit, QString id, Database dbs,QWidget *parent = nullptr);
    ~reserv_add();
    void edit_set();
    bool check_list(QList<QString> reserv_list);
    bool check_included(QString table_name, QString check_col, QString check_str);

private slots:
    void on_add_button_clicked();

    void on_calendar_selectionChanged();

    void on_refresh_btn_clicked();

    void on_guide_table_itemClicked(QTableWidgetItem *item);

    void on_lodge_table_itemClicked(QTableWidgetItem *item);

    void on_beach_table_itemClicked(QTableWidgetItem *item);

private:
    Ui::reserv_add *ui;
    Database db;
    bool check;
    QString id;
    QSqlQuery sql_query;
    char query[1024];
};

#endif // RESERV_ADD_H
