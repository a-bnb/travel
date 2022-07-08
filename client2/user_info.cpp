#include "user_info.h"
#include "ui_user_info.h"

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
    int row;
    if(check==true)
        row = ui->usertable->currentRow();
    else
        return;

    QString id = ui->usertable->takeItem(row, 0)->text();
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

void user_info::on_edit_btn_clicked()
{

}

void user_info::on_undo_btn_clicked()
{

}
