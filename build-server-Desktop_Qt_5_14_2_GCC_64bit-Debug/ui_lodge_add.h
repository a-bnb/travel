/********************************************************************************
** Form generated from reading UI file 'lodge_add.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LODGE_ADD_H
#define UI_LODGE_ADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_lodge_add
{
public:
    QPushButton *check_btn;
    QLabel *label_2;
    QLineEdit *add_text;
    QLabel *label_3;
    QPushButton *exit_btn;
    QPushButton *signup_btn;
    QLineEdit *sortation_text;
    QLineEdit *name_text;
    QLineEdit *num_text;
    QLabel *label_4;
    QLabel *label;
    QLineEdit *report_text;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *room_text;

    void setupUi(QDialog *lodge_add)
    {
        if (lodge_add->objectName().isEmpty())
            lodge_add->setObjectName(QString::fromUtf8("lodge_add"));
        lodge_add->resize(720, 420);
        check_btn = new QPushButton(lodge_add);
        check_btn->setObjectName(QString::fromUtf8("check_btn"));
        check_btn->setGeometry(QRect(380, 60, 111, 31));
        label_2 = new QLabel(lodge_add);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 100, 67, 17));
        add_text = new QLineEdit(lodge_add);
        add_text->setObjectName(QString::fromUtf8("add_text"));
        add_text->setGeometry(QRect(120, 270, 211, 31));
        label_3 = new QLabel(lodge_add);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(380, 240, 67, 17));
        exit_btn = new QPushButton(lodge_add);
        exit_btn->setObjectName(QString::fromUtf8("exit_btn"));
        exit_btn->setGeometry(QRect(380, 340, 211, 31));
        signup_btn = new QPushButton(lodge_add);
        signup_btn->setObjectName(QString::fromUtf8("signup_btn"));
        signup_btn->setGeometry(QRect(120, 340, 211, 31));
        sortation_text = new QLineEdit(lodge_add);
        sortation_text->setObjectName(QString::fromUtf8("sortation_text"));
        sortation_text->setGeometry(QRect(120, 130, 211, 31));
        name_text = new QLineEdit(lodge_add);
        name_text->setObjectName(QString::fromUtf8("name_text"));
        name_text->setGeometry(QRect(120, 60, 211, 31));
        num_text = new QLineEdit(lodge_add);
        num_text->setObjectName(QString::fromUtf8("num_text"));
        num_text->setGeometry(QRect(380, 270, 211, 31));
        label_4 = new QLabel(lodge_add);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(120, 240, 67, 17));
        label = new QLabel(lodge_add);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 30, 111, 17));
        report_text = new QLineEdit(lodge_add);
        report_text->setObjectName(QString::fromUtf8("report_text"));
        report_text->setGeometry(QRect(120, 200, 211, 31));
        label_5 = new QLabel(lodge_add);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(120, 170, 67, 17));
        label_6 = new QLabel(lodge_add);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(380, 170, 67, 17));
        room_text = new QLineEdit(lodge_add);
        room_text->setObjectName(QString::fromUtf8("room_text"));
        room_text->setGeometry(QRect(380, 200, 211, 31));

        retranslateUi(lodge_add);

        QMetaObject::connectSlotsByName(lodge_add);
    } // setupUi

    void retranslateUi(QDialog *lodge_add)
    {
        lodge_add->setWindowTitle(QCoreApplication::translate("lodge_add", "Dialog", nullptr));
        check_btn->setText(QCoreApplication::translate("lodge_add", "\354\227\205\354\206\214\353\252\205 \354\244\221\353\263\265\355\231\225\354\235\270", nullptr));
        label_2->setText(QCoreApplication::translate("lodge_add", "\354\227\205\354\242\205", nullptr));
        label_3->setText(QCoreApplication::translate("lodge_add", "\354\227\260\353\235\275\354\262\230", nullptr));
        exit_btn->setText(QCoreApplication::translate("lodge_add", "\353\222\244\353\241\234\352\260\200\352\270\260", nullptr));
        signup_btn->setText(QCoreApplication::translate("lodge_add", "\354\227\205\354\206\214 \353\223\261\353\241\235", nullptr));
        label_4->setText(QCoreApplication::translate("lodge_add", "\354\243\274\354\206\214", nullptr));
        label->setText(QCoreApplication::translate("lodge_add", "\354\227\205\354\206\214\353\252\205", nullptr));
        label_5->setText(QCoreApplication::translate("lodge_add", "\354\204\244\353\246\275\354\235\274", nullptr));
        label_6->setText(QCoreApplication::translate("lodge_add", "\352\260\235\354\213\244 \354\210\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lodge_add: public Ui_lodge_add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LODGE_ADD_H
