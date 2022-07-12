/********************************************************************************
** Form generated from reading UI file 'guide.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIDE_H
#define UI_GUIDE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_guide
{
public:
    QLabel *label_2;
    QTableWidget *guidetable;
    QPushButton *add_btn;
    QPushButton *remove_btn;
    QPushButton *refresh_btn;
    QPushButton *edit_btn;
    QLabel *label;
    QPushButton *user_btn;
    QPushButton *guide_btn;
    QPushButton *beach_btn;
    QPushButton *reserv_btn;
    QPushButton *lodge_btn;

    void setupUi(QDialog *guide)
    {
        if (guide->objectName().isEmpty())
            guide->setObjectName(QString::fromUtf8("guide"));
        guide->resize(720, 420);
        label_2 = new QLabel(guide);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 15, 91, 31));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 87, 83);\n"
"font: 12pt \"Ubuntu\";\n"
"color: rgb(255, 255, 255);"));
        guidetable = new QTableWidget(guide);
        if (guidetable->columnCount() < 4)
            guidetable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        guidetable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        guidetable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        guidetable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        guidetable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        guidetable->setObjectName(QString::fromUtf8("guidetable"));
        guidetable->setGeometry(QRect(10, 70, 611, 261));
        guidetable->setMaximumSize(QSize(611, 261));
        guidetable->setRowCount(0);
        guidetable->horizontalHeader()->setCascadingSectionResizes(false);
        guidetable->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        guidetable->horizontalHeader()->setStretchLastSection(true);
        guidetable->verticalHeader()->setVisible(false);
        guidetable->verticalHeader()->setCascadingSectionResizes(false);
        guidetable->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        guidetable->verticalHeader()->setStretchLastSection(false);
        add_btn = new QPushButton(guide);
        add_btn->setObjectName(QString::fromUtf8("add_btn"));
        add_btn->setGeometry(QRect(160, 350, 61, 51));
        add_btn->setAcceptDrops(false);
        add_btn->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/img/user_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        add_btn->setIcon(icon);
        add_btn->setIconSize(QSize(50, 50));
#if QT_CONFIG(shortcut)
        add_btn->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        add_btn->setAutoRepeat(false);
        add_btn->setAutoExclusive(true);
        add_btn->setAutoDefault(false);
        remove_btn = new QPushButton(guide);
        remove_btn->setObjectName(QString::fromUtf8("remove_btn"));
        remove_btn->setGeometry(QRect(290, 350, 61, 51));
        remove_btn->setAcceptDrops(false);
        remove_btn->setStyleSheet(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/img/user_remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        remove_btn->setIcon(icon1);
        remove_btn->setIconSize(QSize(50, 50));
#if QT_CONFIG(shortcut)
        remove_btn->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        remove_btn->setAutoRepeat(false);
        remove_btn->setAutoExclusive(true);
        remove_btn->setAutoDefault(false);
        refresh_btn = new QPushButton(guide);
        refresh_btn->setObjectName(QString::fromUtf8("refresh_btn"));
        refresh_btn->setGeometry(QRect(20, 330, 31, 25));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/img/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        refresh_btn->setIcon(icon2);
        edit_btn = new QPushButton(guide);
        edit_btn->setObjectName(QString::fromUtf8("edit_btn"));
        edit_btn->setGeometry(QRect(420, 350, 61, 51));
        edit_btn->setAcceptDrops(false);
        edit_btn->setStyleSheet(QString::fromUtf8(""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/img/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        edit_btn->setIcon(icon3);
        edit_btn->setIconSize(QSize(50, 50));
#if QT_CONFIG(shortcut)
        edit_btn->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        edit_btn->setAutoRepeat(false);
        edit_btn->setAutoExclusive(true);
        edit_btn->setAutoDefault(false);
        label = new QLabel(guide);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 636, 60));
        label->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(85, 87, 83);"));
        user_btn = new QPushButton(guide);
        user_btn->setObjectName(QString::fromUtf8("user_btn"));
        user_btn->setGeometry(QRect(636, 168, 84, 84));
        user_btn->setAcceptDrops(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/img/guide.png"), QSize(), QIcon::Normal, QIcon::Off);
        user_btn->setIcon(icon4);
        user_btn->setIconSize(QSize(50, 50));
        user_btn->setAutoRepeat(false);
        user_btn->setAutoExclusive(true);
        user_btn->setAutoDefault(false);
        guide_btn = new QPushButton(guide);
        guide_btn->setObjectName(QString::fromUtf8("guide_btn"));
        guide_btn->setGeometry(QRect(636, 84, 84, 84));
        guide_btn->setAcceptDrops(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1/img/user.png"), QSize(), QIcon::Normal, QIcon::Off);
        guide_btn->setIcon(icon5);
        guide_btn->setIconSize(QSize(50, 50));
#if QT_CONFIG(shortcut)
        guide_btn->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        guide_btn->setAutoRepeat(false);
        guide_btn->setAutoExclusive(true);
        guide_btn->setAutoDefault(false);
        beach_btn = new QPushButton(guide);
        beach_btn->setObjectName(QString::fromUtf8("beach_btn"));
        beach_btn->setGeometry(QRect(636, 252, 84, 84));
        beach_btn->setAcceptDrops(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/prefix1/img/beach.png"), QSize(), QIcon::Normal, QIcon::Off);
        beach_btn->setIcon(icon6);
        beach_btn->setIconSize(QSize(50, 50));
#if QT_CONFIG(shortcut)
        beach_btn->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        beach_btn->setAutoRepeat(false);
        beach_btn->setAutoExclusive(true);
        beach_btn->setAutoDefault(false);
        reserv_btn = new QPushButton(guide);
        reserv_btn->setObjectName(QString::fromUtf8("reserv_btn"));
        reserv_btn->setGeometry(QRect(636, 0, 84, 84));
        reserv_btn->setAcceptDrops(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/prefix1/img/checked_calendar.png"), QSize(), QIcon::Normal, QIcon::Off);
        reserv_btn->setIcon(icon7);
        reserv_btn->setIconSize(QSize(50, 50));
#if QT_CONFIG(shortcut)
        reserv_btn->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        reserv_btn->setAutoRepeat(false);
        reserv_btn->setAutoExclusive(true);
        reserv_btn->setAutoDefault(false);
        lodge_btn = new QPushButton(guide);
        lodge_btn->setObjectName(QString::fromUtf8("lodge_btn"));
        lodge_btn->setGeometry(QRect(636, 336, 84, 84));
        lodge_btn->setAcceptDrops(false);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/new/prefix1/img/lodge.png"), QSize(), QIcon::Normal, QIcon::Off);
        lodge_btn->setIcon(icon8);
        lodge_btn->setIconSize(QSize(50, 50));
#if QT_CONFIG(shortcut)
        lodge_btn->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        lodge_btn->setAutoRepeat(false);
        lodge_btn->setAutoExclusive(true);
        lodge_btn->setAutoDefault(false);
        label->raise();
        label_2->raise();
        guidetable->raise();
        add_btn->raise();
        remove_btn->raise();
        refresh_btn->raise();
        edit_btn->raise();
        user_btn->raise();
        guide_btn->raise();
        beach_btn->raise();
        reserv_btn->raise();
        lodge_btn->raise();

        retranslateUi(guide);

        QMetaObject::connectSlotsByName(guide);
    } // setupUi

    void retranslateUi(QDialog *guide)
    {
        guide->setWindowTitle(QCoreApplication::translate("guide", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("guide", "\352\260\200\354\235\264\353\223\234 \352\264\200\353\246\254", nullptr));
        QTableWidgetItem *___qtablewidgetitem = guidetable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("guide", "\352\260\200\354\235\264\353\223\234\353\262\210\355\230\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = guidetable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("guide", "\354\235\264\353\246\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = guidetable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("guide", "\353\213\264\353\213\271\354\236\220", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = guidetable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("guide", "\352\267\274\353\254\264\354\203\201\355\203\234", nullptr));
        add_btn->setText(QString());
        remove_btn->setText(QString());
        refresh_btn->setText(QString());
        edit_btn->setText(QString());
        label->setText(QString());
        user_btn->setText(QString());
#if QT_CONFIG(shortcut)
        user_btn->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        guide_btn->setText(QString());
        beach_btn->setText(QString());
        reserv_btn->setText(QString());
        lodge_btn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class guide: public Ui_guide {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIDE_H
