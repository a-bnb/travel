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
    void on_user_btn_clicked();

    void on_guide_btn_clicked();

    void on_beach_btn_clicked();

    void on_lodge_btn_clicked();

private:
    Ui::beach *ui;
    Database db;
    QSqlQuery sql_query;
    char query[1024];
};

#endif // BEACH_H
