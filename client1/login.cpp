#include "login.h"
#include "ui_login.h"
#include "signup.h"

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


    if(id == "" || pw == "")
    {
        QMessageBox::information(this, "error", "공백");
    }
    else
    {

        sprintf(query, "SELECT userpw, username FROM user where userid='%s'", id.toLocal8Bit().data());
        if(mysql_query(&db.conn, query)!=0)
        {
            QMessageBox::information(this, "login_failed", "공백");

        }
        else
        {
            db.sql_result = mysql_store_result(&db.conn);
            db.sql_row = mysql_fetch_row(db.sql_result);
            cout<<"password: "<<db.sql_row[0]<<endl;
            if(strcmp(pw.toLocal8Bit().data(), db.sql_row[0])==0)
            {
                puts("login_sucess");
            }
            else
            {
                QMessageBox::information(this, "login_failed", "공백");
            }
            mysql_free_result(db.sql_result);
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
