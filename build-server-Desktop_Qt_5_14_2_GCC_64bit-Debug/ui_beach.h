/********************************************************************************
** Form generated from reading UI file 'beach.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BEACH_H
#define UI_BEACH_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_beach
{
public:
    QPushButton *beach_btn;
    QPushButton *guide_btn;
    QPushButton *user_btn;
    QLabel *label_2;
    QPushButton *lodge_btn;
    QLabel *label;
    QPushButton *remove_btn;
    QTableWidget *beachtable;
    QPushButton *add_btn;
    QPushButton *refresh_btn;
    QPushButton *edit_btn;
    QPushButton *reserv_btn;

    void setupUi(QDialog *beach)
    {
        if (beach->objectName().isEmpty())
            beach->setObjectName(QString::fromUtf8("beach"));
        beach->resize(720, 420);
        beach_btn = new QPushButton(beach);
        beach_btn->setObjectName(QString::fromUtf8("beach_btn"));
        beach_btn->setGeometry(QRect(636, 252, 84, 84));
        beach_btn->setAcceptDrops(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/img/beach.png"), QSize(), QIcon::Normal, QIcon::Off);
        beach_btn->setIcon(icon);
        beach_btn->setIconSize(QSize(50, 50));
#if QT_CONFIG(shortcut)
        beach_btn->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        beach_btn->setAutoRepeat(false);
        beach_btn->setAutoExclusive(true);
        beach_btn->setAutoDefault(false);
        guide_btn = new QPushButton(beach);
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
        user_btn = new QPushButton(beach);
        user_btn->setObjectName(QString::fromUtf8("user_btn"));
        user_btn->setGeometry(QRect(636, 168, 84, 84));
        user_btn->setAcceptDrops(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/img/guide.png"), QSize(), QIcon::Normal, QIcon::Off);
        user_btn->setIcon(icon2);
        user_btn->setIconSize(QSize(50, 50));
        user_btn->setAutoRepeat(false);
        user_btn->setAutoExclusive(true);
        user_btn->setAutoDefault(false);
        label_2 = new QLabel(beach);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 15, 91, 31));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 87, 83);\n"
"font: 12pt \"Ubuntu\";\n"
"color: rgb(255, 255, 255);"));
        lodge_btn = new QPushButton(beach);
        lodge_btn->setObjectName(QString::fromUtf8("lodge_btn"));
        lodge_btn->setGeometry(QRect(636, 336, 84, 84));
        lodge_btn->setAcceptDrops(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/img/lodge.png"), QSize(), QIcon::Normal, QIcon::Off);
        lodge_btn->setIcon(icon3);
        lodge_btn->setIconSize(QSize(50, 50));
#if QT_CONFIG(shortcut)
        lodge_btn->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        lodge_btn->setAutoRepeat(false);
        lodge_btn->setAutoExclusive(true);
        lodge_btn->setAutoDefault(false);
        label = new QLabel(beach);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 636, 60));
        label->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(85, 87, 83);"));
        remove_btn = new QPushButton(beach);
        remove_btn->setObjectName(QString::fromUtf8("remove_btn"));
        remove_btn->setGeometry(QRect(290, 350, 61, 51));
        remove_btn->setAcceptDrops(false);
        remove_btn->setStyleSheet(QString::fromUtf8(""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/img/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        remove_btn->setIcon(icon4);
        remove_btn->setIconSize(QSize(50, 50));
#if QT_CONFIG(shortcut)
        remove_btn->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        remove_btn->setAutoRepeat(false);
        remove_btn->setAutoExclusive(true);
        remove_btn->setAutoDefault(false);
        beachtable = new QTableWidget(beach);
        if (beachtable->columnCount() < 5)
            beachtable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        beachtable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        beachtable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        beachtable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        beachtable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        beachtable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        beachtable->setObjectName(QString::fromUtf8("beachtable"));
        beachtable->setGeometry(QRect(10, 70, 611, 261));
        beachtable->setMaximumSize(QSize(611, 261));
        beachtable->setRowCount(0);
        beachtable->horizontalHeader()->setCascadingSectionResizes(false);
        beachtable->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        beachtable->horizontalHeader()->setStretchLastSection(true);
        beachtable->verticalHeader()->setVisible(false);
        beachtable->verticalHeader()->setCascadingSectionResizes(false);
        beachtable->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        beachtable->verticalHeader()->setStretchLastSection(false);
        add_btn = new QPushButton(beach);
        add_btn->setObjectName(QString::fromUtf8("add_btn"));
        add_btn->setGeometry(QRect(160, 350, 61, 51));
        add_btn->setAcceptDrops(false);
        add_btn->setStyleSheet(QString::fromUtf8(""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1/img/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        add_btn->setIcon(icon5);
        add_btn->setIconSize(QSize(50, 50));
#if QT_CONFIG(shortcut)
        add_btn->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        add_btn->setAutoRepeat(false);
        add_btn->setAutoExclusive(true);
        add_btn->setAutoDefault(false);
        refresh_btn = new QPushButton(beach);
        refresh_btn->setObjectName(QString::fromUtf8("refresh_btn"));
        refresh_btn->setGeometry(QRect(20, 330, 31, 25));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/prefix1/img/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        refresh_btn->setIcon(icon6);
        edit_btn = new QPushButton(beach);
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
        reserv_btn = new QPushButton(beach);
        reserv_btn->setObjectName(QString::fromUtf8("reserv_btn"));
        reserv_btn->setGeometry(QRect(636, 0, 84, 84));
        reserv_btn->setAcceptDrops(false);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/new/prefix1/img/checked_calendar.png"), QSize(), QIcon::Normal, QIcon::Off);
        reserv_btn->setIcon(icon8);
        reserv_btn->setIconSize(QSize(50, 50));
#if QT_CONFIG(shortcut)
        reserv_btn->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        reserv_btn->setAutoRepeat(false);
        reserv_btn->setAutoExclusive(true);
        reserv_btn->setAutoDefault(false);
        beach_btn->raise();
        guide_btn->raise();
        user_btn->raise();
        lodge_btn->raise();
        label->raise();
        label_2->raise();
        remove_btn->raise();
        beachtable->raise();
        add_btn->raise();
        refresh_btn->raise();
        edit_btn->raise();
        reserv_btn->raise();

        retranslateUi(beach);

        QMetaObject::connectSlotsByName(beach);
    } // setupUi

    void retranslateUi(QDialog *beach)
    {
        beach->setWindowTitle(QCoreApplication::translate("beach", "Dialog", nullptr));
        beach_btn->setText(QString());
        guide_btn->setText(QString());
        user_btn->setText(QString());
#if QT_CONFIG(shortcut)
        user_btn->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        label_2->setText(QCoreApplication::translate("beach", "\354\227\254\355\226\211\354\247\200 \352\264\200\353\246\254", nullptr));
        lodge_btn->setText(QString());
        label->setText(QString());
        remove_btn->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = beachtable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("beach", "\355\225\264\354\210\230\354\232\225\354\236\245\353\252\205", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = beachtable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("beach", "\355\203\210\354\235\230\354\213\244", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = beachtable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("beach", "\354\203\244\354\233\214\354\236\245", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = beachtable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("beach", "\355\231\224\354\236\245\354\213\244", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = beachtable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("beach", "\354\235\264\354\232\251\352\260\235\354\210\230", nullptr));
        add_btn->setText(QString());
        refresh_btn->setText(QString());
        edit_btn->setText(QString());
        reserv_btn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class beach: public Ui_beach {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BEACH_H
