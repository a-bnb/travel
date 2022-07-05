#ifndef GUIDE_H
#define GUIDE_H

#include <QDialog>
#include "database.h"

namespace Ui {
class guide;
}

class guide : public QDialog
{
    Q_OBJECT

public:
    explicit guide(Database db, QWidget *parent = nullptr);
    ~guide();

private slots:
    void on_user_btn_clicked();

    void on_guide_btn_clicked();

    void on_beach_btn_clicked();

    void on_lodge_btn_clicked();

private:
    Ui::guide *ui;
    Database db;
};

#endif // GUIDE_H
