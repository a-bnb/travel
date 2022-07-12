/********************************************************************************
** Form generated from reading UI file 'beach_add.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BEACH_ADD_H
#define UI_BEACH_ADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_beach_add
{
public:
    QLineEdit *shower_text;
    QLabel *label_5;
    QLineEdit *visitor_text;
    QLineEdit *name_text;
    QPushButton *update_btn;
    QPushButton *exit_btn;
    QPushButton *check_btn;
    QLabel *label_4;
    QLabel *label_6;
    QLineEdit *dress_text;
    QLineEdit *toilet_text;
    QLabel *label;
    QLabel *label_7;

    void setupUi(QDialog *beach_add)
    {
        if (beach_add->objectName().isEmpty())
            beach_add->setObjectName(QString::fromUtf8("beach_add"));
        beach_add->resize(720, 420);
        shower_text = new QLineEdit(beach_add);
        shower_text->setObjectName(QString::fromUtf8("shower_text"));
        shower_text->setGeometry(QRect(390, 160, 211, 31));
        label_5 = new QLabel(beach_add);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(390, 130, 101, 17));
        visitor_text = new QLineEdit(beach_add);
        visitor_text->setObjectName(QString::fromUtf8("visitor_text"));
        visitor_text->setGeometry(QRect(390, 250, 211, 31));
        name_text = new QLineEdit(beach_add);
        name_text->setObjectName(QString::fromUtf8("name_text"));
        name_text->setGeometry(QRect(130, 70, 211, 31));
        update_btn = new QPushButton(beach_add);
        update_btn->setObjectName(QString::fromUtf8("update_btn"));
        update_btn->setGeometry(QRect(130, 350, 211, 31));
        exit_btn = new QPushButton(beach_add);
        exit_btn->setObjectName(QString::fromUtf8("exit_btn"));
        exit_btn->setGeometry(QRect(390, 350, 211, 31));
        check_btn = new QPushButton(beach_add);
        check_btn->setObjectName(QString::fromUtf8("check_btn"));
        check_btn->setGeometry(QRect(390, 70, 101, 31));
        label_4 = new QLabel(beach_add);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(390, 220, 67, 17));
        label_6 = new QLabel(beach_add);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(130, 130, 81, 17));
        dress_text = new QLineEdit(beach_add);
        dress_text->setObjectName(QString::fromUtf8("dress_text"));
        dress_text->setGeometry(QRect(130, 160, 211, 31));
        toilet_text = new QLineEdit(beach_add);
        toilet_text->setObjectName(QString::fromUtf8("toilet_text"));
        toilet_text->setGeometry(QRect(130, 250, 211, 31));
        label = new QLabel(beach_add);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 40, 81, 17));
        label_7 = new QLabel(beach_add);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(130, 220, 111, 17));

        retranslateUi(beach_add);

        QMetaObject::connectSlotsByName(beach_add);
    } // setupUi

    void retranslateUi(QDialog *beach_add)
    {
        beach_add->setWindowTitle(QCoreApplication::translate("beach_add", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("beach_add", "\354\203\244\354\233\214\354\213\244 \352\260\234\354\210\230", nullptr));
        update_btn->setText(QCoreApplication::translate("beach_add", "\354\240\225\353\263\264 \353\223\261\353\241\235", nullptr));
        exit_btn->setText(QCoreApplication::translate("beach_add", "\353\222\244\353\241\234\352\260\200\352\270\260", nullptr));
        check_btn->setText(QCoreApplication::translate("beach_add", "\354\235\264\353\246\204 \354\244\221\353\263\265\355\231\225\354\235\270", nullptr));
        label_4->setText(QCoreApplication::translate("beach_add", "\353\260\251\353\254\270\352\260\235 \354\210\230", nullptr));
        label_6->setText(QCoreApplication::translate("beach_add", "\355\203\210\354\235\230\354\213\244 \352\260\234\354\210\230", nullptr));
        label->setText(QCoreApplication::translate("beach_add", "\355\225\264\354\210\230\354\232\225\354\236\245 \353\252\205", nullptr));
        label_7->setText(QCoreApplication::translate("beach_add", "\355\231\224\354\236\245\354\213\244 \352\260\234\354\210\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class beach_add: public Ui_beach_add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BEACH_ADD_H
