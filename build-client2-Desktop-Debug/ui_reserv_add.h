/********************************************************************************
** Form generated from reading UI file 'reserv_add.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESERV_ADD_H
#define UI_RESERV_ADD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_reserv_add
{
public:
    QTableWidget *guide_table;
    QLineEdit *date_text;
    QLabel *label_4;
    QLabel *label_7;
    QLineEdit *guide_text;
    QLabel *label_6;
    QLineEdit *lodge_text;
    QPushButton *add_button;
    QLabel *label_3;
    QCalendarWidget *calendar;
    QLineEdit *beach_text;
    QPushButton *refresh_btn;
    QTableWidget *lodge_table;
    QTableWidget *beach_table;

    void setupUi(QDialog *reserv_add)
    {
        if (reserv_add->objectName().isEmpty())
            reserv_add->setObjectName(QString::fromUtf8("reserv_add"));
        reserv_add->resize(720, 420);
        guide_table = new QTableWidget(reserv_add);
        if (guide_table->columnCount() < 1)
            guide_table->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        guide_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        guide_table->setObjectName(QString::fromUtf8("guide_table"));
        guide_table->setGeometry(QRect(40, 190, 121, 231));
        guide_table->horizontalHeader()->setStretchLastSection(true);
        date_text = new QLineEdit(reserv_add);
        date_text->setObjectName(QString::fromUtf8("date_text"));
        date_text->setGeometry(QRect(490, 40, 211, 31));
        date_text->setReadOnly(true);
        label_4 = new QLabel(reserv_add);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(490, 150, 67, 17));
        label_7 = new QLabel(reserv_add);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(490, 10, 67, 17));
        guide_text = new QLineEdit(reserv_add);
        guide_text->setObjectName(QString::fromUtf8("guide_text"));
        guide_text->setGeometry(QRect(490, 110, 211, 31));
        guide_text->setReadOnly(true);
        label_6 = new QLabel(reserv_add);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(490, 80, 67, 17));
        lodge_text = new QLineEdit(reserv_add);
        lodge_text->setObjectName(QString::fromUtf8("lodge_text"));
        lodge_text->setGeometry(QRect(490, 180, 211, 31));
        lodge_text->setReadOnly(true);
        add_button = new QPushButton(reserv_add);
        add_button->setObjectName(QString::fromUtf8("add_button"));
        add_button->setGeometry(QRect(600, 350, 89, 25));
        label_3 = new QLabel(reserv_add);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(490, 220, 67, 17));
        calendar = new QCalendarWidget(reserv_add);
        calendar->setObjectName(QString::fromUtf8("calendar"));
        calendar->setGeometry(QRect(0, 0, 471, 181));
        beach_text = new QLineEdit(reserv_add);
        beach_text->setObjectName(QString::fromUtf8("beach_text"));
        beach_text->setGeometry(QRect(490, 250, 211, 31));
        beach_text->setReadOnly(true);
        refresh_btn = new QPushButton(reserv_add);
        refresh_btn->setObjectName(QString::fromUtf8("refresh_btn"));
        refresh_btn->setGeometry(QRect(410, 220, 31, 25));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/img/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        refresh_btn->setIcon(icon);
        lodge_table = new QTableWidget(reserv_add);
        if (lodge_table->columnCount() < 1)
            lodge_table->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        lodge_table->setHorizontalHeaderItem(0, __qtablewidgetitem1);
        lodge_table->setObjectName(QString::fromUtf8("lodge_table"));
        lodge_table->setGeometry(QRect(160, 190, 121, 231));
        lodge_table->horizontalHeader()->setStretchLastSection(true);
        beach_table = new QTableWidget(reserv_add);
        if (beach_table->columnCount() < 1)
            beach_table->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        beach_table->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        beach_table->setObjectName(QString::fromUtf8("beach_table"));
        beach_table->setGeometry(QRect(280, 190, 121, 231));
        beach_table->horizontalHeader()->setStretchLastSection(true);

        retranslateUi(reserv_add);

        QMetaObject::connectSlotsByName(reserv_add);
    } // setupUi

    void retranslateUi(QDialog *reserv_add)
    {
        reserv_add->setWindowTitle(QApplication::translate("reserv_add", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = guide_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("reserv_add", "\352\260\200\354\235\264\353\223\234", nullptr));
        label_4->setText(QApplication::translate("reserv_add", "\354\210\231\354\206\214 \353\252\205", nullptr));
        label_7->setText(QApplication::translate("reserv_add", "\354\230\210\354\225\275\354\235\274\354\236\220", nullptr));
        label_6->setText(QApplication::translate("reserv_add", "\352\260\200\354\235\264\353\223\234\353\252\205", nullptr));
        add_button->setText(QApplication::translate("reserv_add", "\354\230\210\354\225\275\354\266\224\352\260\200", nullptr));
        label_3->setText(QApplication::translate("reserv_add", "\354\227\254\355\226\211\354\247\200 \353\252\205", nullptr));
        refresh_btn->setText(QString());
        QTableWidgetItem *___qtablewidgetitem1 = lodge_table->horizontalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("reserv_add", "\354\210\231\354\206\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = beach_table->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("reserv_add", "\354\227\254\355\226\211\354\247\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class reserv_add: public Ui_reserv_add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESERV_ADD_H
