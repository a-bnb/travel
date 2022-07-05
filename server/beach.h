#ifndef BEACH_H
#define BEACH_H

#include <QDialog>
#include "database.h"

namespace Ui {
class beach;
}

class beach : public QDialog
{
    Q_OBJECT

public:
    explicit beach(Database db,QWidget *parent = nullptr);
    ~beach();

private slots:
    void on_user_btn_clicked();

    void on_guide_btn_clicked();

    void on_beach_btn_clicked();

    void on_lodge_btn_clicked();

private:
    Ui::beach *ui;
    Database db;
};

#endif // BEACH_H
