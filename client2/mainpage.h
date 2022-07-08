#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QDialog>
#include <database.h>

namespace Ui {
class mainpage;
}

class mainpage : public QDialog
{
    Q_OBJECT

public:
    explicit mainpage(QString id,Database dbs, QWidget *parent = nullptr);
    ~mainpage();
    void check_removed();

private slots:
    void on_reserv_btn_clicked();

    void on_user_btn_clicked();

    void on_exit_btn_clicked();

private:
    Ui::mainpage *ui;
    QString id;
    Database db;
    bool check;
    QSqlQuery sql_query;
    char query[1024];
};

#endif // MAINPAGE_H
