#include "user.h"
#include "ui_user.h"
#include "beach.h"
#include "user.h"
#include "lodge.h"
#include "guide.h"


user::user(Database db, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::user)
{
    this->db = db;
    ui->setupUi(this);
    this->on_refresh_btn_clicked();
}

user::~user()
{
    delete ui;
}

void user::on_beach_btn_clicked()
{
    this->close();
    beach beach(db);
    beach.setModal(true);
    beach.exec();
    this->show();
}

void user::on_lodge_btn_clicked()
{
    this->close();
    lodge lodge(db);
    lodge.setModal(true);
    lodge.exec();
    this->show();
}

void user::on_guide_btn_clicked()
{
    this->close();
    guide guide(db);
    guide.setModal(true);
    guide.exec();
    this->show();
}

void user::on_user_btn_clicked()
{
    this->close();
    user user(db);
    user.setModal(true);
    user.exec();
    this->show();
}


void user::on_refresh_btn_clicked()
{
    int i, line=0;
    QString temp;
    sprintf(query, "SELECT userid, username, usertype FROM user");
    sql_query.exec(QString::fromLocal8Bit(query));
    if(sql_query.size() != 0)        ui->usertable->setRowCount(sql_query.size());

    {
        while(sql_query.next())
        {
            for(i=0; i<3; i++)
            {
//                std::cout<<sql_query.value(i).toString().toStdString().data()<<std::endl;
                ui->usertable->setItem(line, i, new QTableWidgetItem(sql_query.value(i).toString()));
            }
            line++;
        }
        ui->usertable->show();

    }
    else
    {
        QMessageBox::information(this, "error", "user 데이터를 찾을 수 없습니다");
    }
}
