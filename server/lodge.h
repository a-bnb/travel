#ifndef LODGE_H
#define LODGE_H

#include <QDialog>
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

private:
    Ui::lodge *ui;
    Database db;
};

#endif // LODGE_H
