#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "database.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(Database db, QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_guide_btn_clicked();

    void on_beach_btn_clicked();

    void on_user_btn_clicked();

    void on_lodge_btn_clicked();

private:
    Ui::MainWindow *ui;
    Database db;
};
#endif // MAINWINDOW_H
