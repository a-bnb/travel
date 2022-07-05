#ifndef USER_H
#define USER_H

#include <QDialog>
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

private:
    Ui::user *ui;
    Database db;
};

#endif // USER_H
