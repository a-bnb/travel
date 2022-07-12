/********************************************************************************
** Form generated from reading UI file 'user_del.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_DEL_H
#define UI_USER_DEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_user_del
{
public:
    QTableWidget *usertable;
    QPushButton *search_btn;
    QLabel *label;
    QPushButton *del_btn;
    QLineEdit *ID_text;

    void setupUi(QDialog *user_del)
    {
        if (user_del->objectName().isEmpty())
            user_del->setObjectName(QString::fromUtf8("user_del"));
        user_del->resize(720, 420);
        usertable = new QTableWidget(user_del);
        if (usertable->columnCount() < 3)
            usertable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        usertable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        usertable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        usertable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (usertable->rowCount() < 20)
            usertable->setRowCount(20);
        usertable->setObjectName(QString::fromUtf8("usertable"));
        usertable->setGeometry(QRect(50, 20, 611, 261));
        usertable->setMaximumSize(QSize(611, 261));
        usertable->setRowCount(20);
        usertable->horizontalHeader()->setCascadingSectionResizes(false);
        usertable->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        usertable->horizontalHeader()->setStretchLastSection(true);
        usertable->verticalHeader()->setVisible(false);
        usertable->verticalHeader()->setCascadingSectionResizes(false);
        usertable->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        usertable->verticalHeader()->setStretchLastSection(false);
        search_btn = new QPushButton(user_del);
        search_btn->setObjectName(QString::fromUtf8("search_btn"));
        search_btn->setGeometry(QRect(350, 353, 89, 25));
        label = new QLabel(user_del);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 320, 111, 17));
        del_btn = new QPushButton(user_del);
        del_btn->setObjectName(QString::fromUtf8("del_btn"));
        del_btn->setGeometry(QRect(450, 353, 89, 25));
        ID_text = new QLineEdit(user_del);
        ID_text->setObjectName(QString::fromUtf8("ID_text"));
        ID_text->setGeometry(QRect(140, 40, 211, 31));




        retranslateUi(user_del);

        QMetaObject::connectSlotsByName(user_del);
    } // setupUi

    void retranslateUi(QDialog *user_del)
    {
        user_del->setWindowTitle(QCoreApplication::translate("user_del", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = usertable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("user_del", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = usertable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("user_del", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = usertable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("user_del", "Type", nullptr));
        search_btn->setText(QCoreApplication::translate("user_del", "\352\262\200\354\203\211", nullptr));
        label->setText(QCoreApplication::translate("user_del", "Id\353\241\234 \354\234\240\354\240\200 \352\262\200\354\203\211", nullptr));
        del_btn->setText(QCoreApplication::translate("user_del", "\354\202\255\354\240\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user_del: public Ui_user_del {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_DEL_H
