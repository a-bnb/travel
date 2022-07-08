#include "login.h"
#include "ui_login.h"
#include "signup.h"
#include "mainpage.h"

using namespace std;

login::login(Database db, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    this->db = db;
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}


void login::on_login_btn_clicked()
{
    QString id = ui->ID_text->text();
    QString pw = ui->PW_text->text();
    QString type = "vip";

    if(id == "" || pw == "")
    {
        QMessageBox::information(this, "error", "공백");
    }
    else
    {

        sprintf(query, "SELECT userpw, username, usertype FROM user where userid='%s'", id.toLocal8Bit().data());
        sql_query.exec(QString::fromLocal8Bit(query));
        if(sql_query.size() == 0)
        {
            QMessageBox::warning(this, "login failed", "");

        }
        else
        {
            sql_query.next();
            if(sql_query.value(0) != pw || sql_query.value(2) != type)
            {
                QMessageBox::warning(this, "error", "login error");
            }
            else
            {
                QMessageBox::information(this, "환 영", "로그인 성공");
                this->close();
                mainpage m(id, db);
                m.setModal(true);
                m.exec();
                this->show();
            }
        }

    }
}

void login::on_signup_btn_clicked()
{
    this->hide();
    signup signup(db);
    signup.setModal(true);
    signup.exec();
    this->show();
}

void login::on_exit_btn_clicked()
{
    exit(0);
}
