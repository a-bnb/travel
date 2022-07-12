/********************************************************************************
** Form generated from reading UI file 'member.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBER_H
#define UI_MEMBER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_member
{
public:
    QPushButton *userinquiry;
    QPushButton *userescape;
    QPushButton *userrectified;
    QTableWidget *user_table;
    QLineEdit *edit_text;

    void setupUi(QDialog *member)
    {
        if (member->objectName().isEmpty())
            member->setObjectName(QString::fromUtf8("member"));
        member->resize(904, 517);
        userinquiry = new QPushButton(member);
        userinquiry->setObjectName(QString::fromUtf8("userinquiry"));
        userinquiry->setGeometry(QRect(710, 10, 171, 51));
        userescape = new QPushButton(member);
        userescape->setObjectName(QString::fromUtf8("userescape"));
        userescape->setGeometry(QRect(710, 200, 171, 51));
        userrectified = new QPushButton(member);
        userrectified->setObjectName(QString::fromUtf8("userrectified"));
        userrectified->setGeometry(QRect(710, 80, 171, 51));
        user_table = new QTableWidget(member);
        if (user_table->columnCount() < 4)
            user_table->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        user_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        user_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        user_table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        user_table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        user_table->setObjectName(QString::fromUtf8("user_table"));
        user_table->setGeometry(QRect(20, 20, 551, 201));
        user_table->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        user_table->horizontalHeader()->setStretchLastSection(true);
        edit_text = new QLineEdit(member);
        edit_text->setObjectName(QString::fromUtf8("edit_text"));
        edit_text->setGeometry(QRect(710, 130, 171, 41));

        retranslateUi(member);

        QMetaObject::connectSlotsByName(member);
    } // setupUi

    void retranslateUi(QDialog *member)
    {
        member->setWindowTitle(QApplication::translate("member", "Dialog", nullptr));
        userinquiry->setText(QApplication::translate("member", "\355\232\214\354\233\220 \354\241\260\355\232\214", nullptr));
        userescape->setText(QApplication::translate("member", "\355\232\214\354\233\220 \355\203\210\355\207\264", nullptr));
        userrectified->setText(QApplication::translate("member", "\355\232\214\354\233\220 \354\210\230\354\240\225", nullptr));
        QTableWidgetItem *___qtablewidgetitem = user_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("member", "userid", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = user_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("member", "userpw", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = user_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("member", "username", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = user_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("member", "usertype", nullptr));
    } // retranslateUi

};

namespace Ui {
    class member: public Ui_member {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBER_H
