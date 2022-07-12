/********************************************************************************
** Form generated from reading UI file 'reserv.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_reserv
{
public:
    QPushButton *add_btn;
    QTableWidget *reservtable;
    QPushButton *refresh_btn;
    QPushButton *remove_btn;
    QPushButton *edit_btn;
    QPushButton *undo_btn;

    void setupUi(QDialog *reserv)
    {
        if (reserv->objectName().isEmpty())
            reserv->setObjectName(QString::fromUtf8("reserv"));
        reserv->resize(720, 420);
        add_btn = new QPushButton(reserv);
        add_btn->setObjectName(QString::fromUtf8("add_btn"));
        add_btn->setGeometry(QRect(150, 320, 61, 51));
        add_btn->setAcceptDrops(false);
        add_btn->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/img/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        add_btn->setIcon(icon);
        add_btn->setIconSize(QSize(50, 50));
#ifndef QT_NO_SHORTCUT
        add_btn->setShortcut(QString::fromUtf8(""));
#endif // QT_NO_SHORTCUT
        add_btn->setAutoRepeat(false);
        add_btn->setAutoExclusive(true);
        add_btn->setAutoDefault(false);
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
        reservtable->setGeometry(QRect(50, 40, 611, 261));
        reservtable->setMaximumSize(QSize(611, 261));
        reservtable->setRowCount(0);
        reservtable->horizontalHeader()->setCascadingSectionResizes(false);
        reservtable->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        reservtable->horizontalHeader()->setStretchLastSection(true);
        reservtable->verticalHeader()->setVisible(false);
        reservtable->verticalHeader()->setCascadingSectionResizes(false);
        reservtable->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        reservtable->verticalHeader()->setStretchLastSection(false);
        refresh_btn = new QPushButton(reserv);
        refresh_btn->setObjectName(QString::fromUtf8("refresh_btn"));
        refresh_btn->setGeometry(QRect(60, 300, 31, 25));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/img/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        refresh_btn->setIcon(icon1);
        remove_btn = new QPushButton(reserv);
        remove_btn->setObjectName(QString::fromUtf8("remove_btn"));
        remove_btn->setGeometry(QRect(280, 320, 61, 51));
        remove_btn->setAcceptDrops(false);
        remove_btn->setStyleSheet(QString::fromUtf8(""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/img/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        remove_btn->setIcon(icon2);
        remove_btn->setIconSize(QSize(50, 50));
#ifndef QT_NO_SHORTCUT
        remove_btn->setShortcut(QString::fromUtf8(""));
#endif // QT_NO_SHORTCUT
        remove_btn->setAutoRepeat(false);
        remove_btn->setAutoExclusive(true);
        remove_btn->setAutoDefault(false);
        edit_btn = new QPushButton(reserv);
        edit_btn->setObjectName(QString::fromUtf8("edit_btn"));
        edit_btn->setGeometry(QRect(410, 320, 61, 51));
        edit_btn->setAcceptDrops(false);
        edit_btn->setStyleSheet(QString::fromUtf8(""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/img/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        edit_btn->setIcon(icon3);
        edit_btn->setIconSize(QSize(50, 50));
#ifndef QT_NO_SHORTCUT
        edit_btn->setShortcut(QString::fromUtf8(""));
#endif // QT_NO_SHORTCUT
        edit_btn->setAutoRepeat(false);
        edit_btn->setAutoExclusive(true);
        edit_btn->setAutoDefault(false);
        undo_btn = new QPushButton(reserv);
        undo_btn->setObjectName(QString::fromUtf8("undo_btn"));
        undo_btn->setGeometry(QRect(530, 320, 61, 51));
        undo_btn->setAcceptDrops(false);
        undo_btn->setStyleSheet(QString::fromUtf8(""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/img/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        undo_btn->setIcon(icon4);
        undo_btn->setIconSize(QSize(50, 50));
#ifndef QT_NO_SHORTCUT
        undo_btn->setShortcut(QString::fromUtf8(""));
#endif // QT_NO_SHORTCUT
        undo_btn->setAutoRepeat(false);
        undo_btn->setAutoExclusive(true);
        undo_btn->setAutoDefault(false);

        retranslateUi(reserv);

        QMetaObject::connectSlotsByName(reserv);
    } // setupUi

    void retranslateUi(QDialog *reserv)
    {
        reserv->setWindowTitle(QApplication::translate("reserv", "Dialog", nullptr));
        add_btn->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = reservtable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("reserv", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = reservtable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("reserv", "\354\230\210\354\225\275\354\235\274\354\236\220", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = reservtable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("reserv", "\352\263\240\352\260\235 ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = reservtable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("reserv", "\352\260\200\354\235\264\353\223\234", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = reservtable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("reserv", "\354\240\204\355\231\224\353\262\210\355\230\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = reservtable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("reserv", "\354\227\254\355\226\211\354\247\200\353\252\205", nullptr));
        refresh_btn->setText(QString());
        remove_btn->setText(QString());
        edit_btn->setText(QString());
        undo_btn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class reserv: public Ui_reserv {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESERV_H
