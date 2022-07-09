#include "user_info.h"
#include "ui_user_info.h"
#include "mainpage.h"

user_info::user_info(QString id, Database dbs, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::user_info),
    db(dbs),
    id(id)
{
    ui->setupUi(this);
    this->on_refresh_btn_clicked();
}

user_info::~user_info()
{
    delete ui;
}

void user_info::on_refresh_btn_clicked()
{
    int i, column, line=0;
    QString temp;
    ui->usertable->clearContents();
    sprintf(query, "SELECT * FROM user WHERE userid = '%s'", id.toLocal8Bit().data());
    sql_query.exec(QString::fromLocal8Bit(query));
    column = sql_query.record().count();
    ui->usertable->setRowCount(sql_query.size());
    ui->usertable->setColumnCount(column);
    if(sql_query.size() != 0)
    {
        while(sql_query.next())
        {
            for(i=0; i<column; i++)
            {
                ui->usertable->setItem(line, i, new QTableWidgetItem(sql_query.value(i).toString()));
            }
            line++;
        }
        ui->usertable->show();

    }
}

void user_info::on_remove_btn_clicked()
{

    sprintf(query, "INSERT INTO del_user_log select * FROM user WHERE userid='%s'", id.toLocal8Bit().data());
    sql_query.exec(QString::fromLocal8Bit(query));
    if(sql_query.lastError().type() != QSqlError::NoError)
    {
        QMessageBox::information(this, "error", "삭제 실패");
        return;
    }
    sprintf(query, "DELETE FROM user WHERE userid='%s'", id.toLocal8Bit().data());
    sql_query.exec(QString::fromLocal8Bit(query));
    if(sql_query.lastError().type() == QSqlError::NoError)
    {
        QMessageBox::information(this, "message", "Delete Complete!");
        this->close();
    }
    else
    {
        QMessageBox::information(this, "error", "삭제 실패");
    }
}

bool user_info::check_id(QString id)
{
    if(id == "")
    {
        QMessageBox::information(this, "error", "공백");
        return false;
    }
    sprintf(query, "SELECT * FROM user WHERE userid = '%s'", id.toLocal8Bit().data());
    sql_query.exec(QString::fromLocal8Bit(query));
    if(sql_query.size() == 0)
    {
        return true;
    }
    else
    {
        QMessageBox::information(this, "error", "중복");
        return false;
    }
}

void user_info::on_edit_btn_clicked()
{
    int col;
    col = ui->usertable->currentColumn();
    QList<QString> col_list = {"userid", "userpw","username", "usertype"};
    QString edit = ui->edit_text->text();

    if(col==0)
    {
        if(!check_id(id))
            return;
    }

    sprintf(query, "UPDATE user SET %s = '%s' WHERE userid='%s'",
            col_list.value(col).toLocal8Bit().data(),
            edit.toLocal8Bit().data(), id.toLocal8Bit().data());
    sql_query.exec(QString::fromLocal8Bit(query));
    if(sql_query.lastError().type() != QSqlError::NoError)
    {
        QMessageBox::information(this, "error", "수정 실패");
        std::cout<<sql_query.lastError().text().toStdString()<<std::endl;
        return;
    }
    else
    {
        QMessageBox::information(this, "success", "수정 성공");
        if(col==0)
            this->id = edit;
        this->on_refresh_btn_clicked();
    }
}

void user_info::on_undo_btn_clicked()
{
    this->close();
    mainpage m(id, db);
    m.setModal(true);
    m.exec();
}

void user_info::on_usertable_itemClicked(QTableWidgetItem *item)
{
    ui->edit_text->setText(item->text());
}
