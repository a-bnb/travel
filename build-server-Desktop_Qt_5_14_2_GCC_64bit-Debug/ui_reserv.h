/********************************************************************************
** Form generated from reading UI file 'reserv.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESERV_H
#define UI_RESERV_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_reserv
{
public:
    QLabel *label;
    QPushButton *user_btn;
    QPushButton *guide_btn;
    QPushButton *beach_btn;
    QPushButton *reserv_btn;
    QPushButton *lodge_btn;
    QLabel *label_2;
    QTableWidget *reservtable;
    QPushButton *remove_btn;
    QPushButton *add_btn;
    QPushButton *edit_btn;
    QPushButton *refresh_btn;

    void setupUi(QDialog *reserv)
    {
        if (reserv->objectName().isEmpty())
            reserv->setObjectName(QString::fromUtf8("reserv"));
        reserv->resize(720, 420);
        label = new QLabel(reserv);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 636, 60));
        label->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(85, 87, 83);"));
        user_btn = new QPushButton(reserv);
        user_btn->setObjectName(QString::fromUtf8("user_btn"));
        user_btn->setGeometry(QRect(636, 168, 84, 84));
        user_btn->setAcceptDrops(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/img/guide.png"), QSize(), QIcon::Normal, QIcon::Off);
        user_btn->setIcon(icon);
        user_btn->setIconSize(QSize(50, 50));
        user_btn->setAutoRepeat(false);
        user_btn->setAutoExclusive(true);
        user_btn->setAutoDefault(false);
        guide_btn = new QPushButton(reserv);
        guide_btn->setObjectName(QString::fromUtf8("guide_btn"));
        guide_btn->setGeometry(QRect(636, 84, 84, 84));
        guide_btn->setAcceptDrops(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/img/user.png"), QSize(), QIcon::Normal, QIcon::Off);
        guide_btn->setIcon(icon1);
        guide_btn->setIconSize(QSize(50, 50));
#if QT_CONFIG(shortcut)
        guide_btn->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        guide_btn->setAutoRepeat(false);
        guide_btn->setAutoExclusive(true);
        guide_btn->setAutoDefault(false);
        beach_btn = new QPushButton(reserv);
        beach_btn->setObjectName(QString::fromUtf8("beach_btn"));
        beach_btn->setGeometry(QRect(636, 252, 84, 84));
        beach_btn->setAcceptDrops(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/img/beach.png"), QSize(), QIcon::Normal, QIcon::Off);
        beach_btn->setIcon(icon2);
        beach_btn->setIconSize(QSize(50, 50));
#if QT_CONFIG(shortcut)
        beach_btn->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        beach_btn->setAutoRepeat(false);
        beach_btn->setAutoExclusive(true);
        beach_btn->setAutoDefault(false);
        reserv_btn = new QPushButton(reserv);
        reserv_btn->setObjectName(QString::fromUtf8("reserv_btn"));
        reserv_btn->setGeometry(QRect(636, 0, 84, 84));
        reserv_btn->setAcceptDrops(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/img/checked_calendar.png"), QSize(), QIcon::Normal, QIcon::Off);
        reserv_btn->setIcon(icon3);
        reserv_btn->setIconSize(QSize(50, 50));
#if QT_CONFIG(shortcut)
        reserv_btn->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        reserv_btn->setAutoRepeat(false);
        reserv_btn->setAutoExclusive(true);
        reserv_btn->setAutoDefault(false);
        lodge_btn = new QPushButton(reserv);
        lodge_btn->setObjectName(QString::fromUtf8("lodge_btn"));
        lodge_btn->setGeometry(QRect(636, 336, 84, 84));
        lodge_btn->setAcceptDrops(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/img/lodge.png"), QSize(), QIcon::Normal, QIcon::Off);
        lodge_btn->setIcon(icon4);
        lodge_btn->setIconSize(QSize(50, 50));
#if QT_CONFIG(shortcut)
        lodge_btn->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        lodge_btn->setAutoRepeat(false);
        lodge_btn->setAutoExclusive(true);
        lodge_btn->setAutoDefault(false);
        label_2 = new QLabel(reserv);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 10, 91, 31));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 87, 83);\n"
"font: 12pt \"Ubuntu\";\n"
"color: rgb(255, 255, 255);"));
        reservtable = new QTableWidget(reserv);
        if (reservtable->columnCount() < 6)
            reservtable->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        reservtable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        reservtable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        reservtable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        reservtable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        reservtable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        reservtable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        reservtable->setObjectName(QString::fromUtf8("reservtable"));
        reservtable->setGeometry(QRect(10, 70, 611, 261));
        reservtable->setMaximumSize(QSize(611, 261));
        reservtable->setRowCount(0);
        reservtable->horizontalHeader()->setCascadingSectionResizes(false);
        reservtable->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        reservtable->horizontalHeader()->setStretchLastSection(true);
        reservtable->verticalHeader()->setVisible(false);
        reservtable->verticalHeader()->setCascadingSectionResizes(false);
        reservtable->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        reservtable->verticalHeader()->setStretchLastSection(false);
        remove_btn = new QPushButton(reserv);
        remove_btn->setObjectName(QString::fromUtf8("remove_btn"));
        remove_btn->setGeometry(QRect(290, 350, 61, 51));
        remove_btn->setAcceptDrops(false);
        remove_btn->setStyleSheet(QString::fromUtf8(""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1/img/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        remove_btn->setIcon(icon5);
        remove_btn->setIconSize(QSize(50, 50));
#if QT_CONFIG(shortcut)
        remove_btn->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        remove_btn->setAutoRepeat(false);
        remove_btn->setAutoExclusive(true);
        remove_btn->setAutoDefault(false);
        add_btn = new QPushButton(reserv);
        add_btn->setObjectName(QString::fromUtf8("add_btn"));
        add_btn->setGeometry(QRect(160, 350, 61, 51));
        add_btn->setAcceptDrops(false);
        add_btn->setStyleSheet(QString::fromUtf8(""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/prefix1/img/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        add_btn->setIcon(icon6);
        add_btn->setIconSize(QSize(50, 50));
#if QT_CONFIG(shortcut)
        add_btn->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        add_btn->setAutoRepeat(false);
        add_btn->setAutoExclusive(true);
        add_btn->setAutoDefault(false);
        edit_btn = new QPushButton(reserv);
        edit_btn->setObjectName(QString::fromUtf8("edit_btn"));
        edit_btn->setGeometry(QRect(420, 350, 61, 51));
        edit_btn->setAcceptDrops(false);
        edit_btn->setStyleSheet(QString::fromUtf8(""));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/prefix1/img/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        edit_btn->setIcon(icon7);
        edit_btn->setIconSize(QSize(50, 50));
#if QT_CONFIG(shortcut)
        edit_btn->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        edit_btn->setAutoRepeat(false);
        edit_btn->setAutoExclusive(true);
        edit_btn->setAutoDefault(false);
        refresh_btn = new QPushButton(reserv);
        refresh_btn->setObjectName(QString::fromUtf8("refresh_btn"));
        refresh_btn->setGeometry(QRect(20, 330, 31, 25));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/new/prefix1/img/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        refresh_btn->setIcon(icon8);

        retranslateUi(reserv);

        QMetaObject::connectSlotsByName(reserv);
    } // setupUi

    void retranslateUi(QDialog *reserv)
    {
        reserv->setWindowTitle(QCoreApplication::translate("reserv", "Dialog", nullptr));
        label->setText(QString());
        user_btn->setText(QString());
#if QT_CONFIG(shortcut)
        user_btn->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        guide_btn->setText(QString());
        beach_btn->setText(QString());
        reserv_btn->setText(QString());
        lodge_btn->setText(QString());
        label_2->setText(QCoreApplication::translate("reserv", "\354\230\210\354\225\275 \352\264\200\353\246\254", nullptr));
        QTableWidgetItem *___qtablewidgetitem = reservtable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("reserv", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = reservtable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("reserv", "\354\230\210\354\225\275\354\235\274\354\236\220", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = reservtable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("reserv", "\352\263\240\352\260\235 ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = reservtable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("reserv", "\352\260\200\354\235\264\353\223\234", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = reservtable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("reserv", "\354\210\231\354\206\214\353\252\205", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = reservtable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("reserv", "\354\227\254\355\226\211\354\247\200\353\252\205", nullptr));
        remove_btn->setText(QString());
        add_btn->setText(QString());
        edit_btn->setText(QString());
        refresh_btn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class reserv: public Ui_reserv {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESERV_H
