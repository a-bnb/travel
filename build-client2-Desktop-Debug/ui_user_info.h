/********************************************************************************
** Form generated from reading UI file 'user_info.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_INFO_H
#define UI_USER_INFO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_user_info
{
public:
    QTableWidget *usertable;
    QPushButton *undo_btn;
    QPushButton *remove_btn;
    QPushButton *edit_btn;
    QPushButton *refresh_btn;
    QLineEdit *edit_text;

    void setupUi(QDialog *user_info)
    {
        if (user_info->objectName().isEmpty())
            user_info->setObjectName(QString::fromUtf8("user_info"));
        user_info->resize(720, 420);
        usertable = new QTableWidget(user_info);
        if (usertable->columnCount() < 4)
            usertable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        usertable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        usertable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        usertable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        usertable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        usertable->setObjectName(QString::fromUtf8("usertable"));
        usertable->setGeometry(QRect(40, 30, 611, 261));
        usertable->setMaximumSize(QSize(611, 261));
        usertable->setRowCount(0);
        usertable->horizontalHeader()->setCascadingSectionResizes(false);
        usertable->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        usertable->horizontalHeader()->setStretchLastSection(true);
        usertable->verticalHeader()->setVisible(false);
        usertable->verticalHeader()->setCascadingSectionResizes(false);
        usertable->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        usertable->verticalHeader()->setStretchLastSection(false);
        undo_btn = new QPushButton(user_info);
        undo_btn->setObjectName(QString::fromUtf8("undo_btn"));
        undo_btn->setGeometry(QRect(590, 320, 61, 51));
        undo_btn->setAcceptDrops(false);
        undo_btn->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/img/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        undo_btn->setIcon(icon);
        undo_btn->setIconSize(QSize(50, 50));
#ifndef QT_NO_SHORTCUT
        undo_btn->setShortcut(QString::fromUtf8(""));
#endif // QT_NO_SHORTCUT
        undo_btn->setAutoRepeat(false);
        undo_btn->setAutoExclusive(true);
        undo_btn->setAutoDefault(false);
        remove_btn = new QPushButton(user_info);
        remove_btn->setObjectName(QString::fromUtf8("remove_btn"));
        remove_btn->setGeometry(QRect(480, 320, 61, 51));
        remove_btn->setAcceptDrops(false);
        remove_btn->setStyleSheet(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/img/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        remove_btn->setIcon(icon1);
        remove_btn->setIconSize(QSize(50, 50));
#ifndef QT_NO_SHORTCUT
        remove_btn->setShortcut(QString::fromUtf8(""));
#endif // QT_NO_SHORTCUT
        remove_btn->setAutoRepeat(false);
        remove_btn->setAutoExclusive(true);
        remove_btn->setAutoDefault(false);
        edit_btn = new QPushButton(user_info);
        edit_btn->setObjectName(QString::fromUtf8("edit_btn"));
        edit_btn->setGeometry(QRect(370, 320, 61, 51));
        edit_btn->setAcceptDrops(false);
        edit_btn->setStyleSheet(QString::fromUtf8(""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/img/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        edit_btn->setIcon(icon2);
        edit_btn->setIconSize(QSize(50, 50));
#ifndef QT_NO_SHORTCUT
        edit_btn->setShortcut(QString::fromUtf8(""));
#endif // QT_NO_SHORTCUT
        edit_btn->setAutoRepeat(false);
        edit_btn->setAutoExclusive(true);
        edit_btn->setAutoDefault(false);
        refresh_btn = new QPushButton(user_info);
        refresh_btn->setObjectName(QString::fromUtf8("refresh_btn"));
        refresh_btn->setGeometry(QRect(50, 290, 31, 25));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/img/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        refresh_btn->setIcon(icon3);
        edit_text = new QLineEdit(user_info);
        edit_text->setObjectName(QString::fromUtf8("edit_text"));
        edit_text->setGeometry(QRect(100, 320, 271, 51));

        retranslateUi(user_info);

        QMetaObject::connectSlotsByName(user_info);
    } // setupUi

    void retranslateUi(QDialog *user_info)
    {
        user_info->setWindowTitle(QApplication::translate("user_info", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = usertable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("user_info", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = usertable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("user_info", "PW", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = usertable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("user_info", "\354\235\264\353\246\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = usertable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("user_info", "\354\234\240\354\240\200\353\223\261\352\270\211", nullptr));
        undo_btn->setText(QString());
        remove_btn->setText(QString());
        edit_btn->setText(QString());
        refresh_btn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class user_info: public Ui_user_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_INFO_H
