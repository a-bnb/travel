#ifndef BEACH_H
#define BEACH_H

#include <QDialog>
#include <QMessageBox>
#include <QString>
#include <QTableWidget>
#include "database.h"


namespace Ui {
class beach;
}

class beach : public QDialog
{
    Q_OBJECT

public:
    explicit beach(Database db, QWidget *parent = nullptr);
    ~beach();


private slots:
    void on_reserv_btn_clicked();

    void on_user_btn_clicked();

    void on_guide_btn_clicked();

    void on_beach_btn_clicked();

    void on_lodge_btn_clicked();

    void on_add_btn_clicked();

    void on_refresh_btn_clicked();

    void on_remove_btn_clicked();

    void on_beachtable_itemClicked();

    void on_edit_btn_clicked();

private:
    Ui::beach *ui;
    Database db;
    QSqlQuery sql_query;
    char query[1024];
    bool check;
};

#endif // BEACH_H
