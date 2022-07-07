#ifndef LODGE_H
#define LODGE_H

#include <QDialog>
#include <QMessageBox>
#include <QString>
#include <QTableWidget>
#include "database.h"

namespace Ui {
class lodge;
}

class lodge : public QDialog
{
    Q_OBJECT

public:
    explicit lodge(Database db,QWidget *parent = nullptr);
    ~lodge();

private slots:
    void on_user_btn_clicked();

    void on_guide_btn_clicked();

    void on_beach_btn_clicked();

    void on_lodge_btn_clicked();

    void on_add_btn_clicked();

    void on_refresh_btn_clicked();

    void on_remove_btn_clicked();

    void on_lodgetable_itemClicked();



private:
    Ui::lodge *ui;
    Database db;
    bool check;
    QSqlQuery sql_query;
    char query[1024];
};

#endif // LODGE_H
