#include "beach.h"
#include "ui_beach.h"
#include "reserv.h"
#include "beach.h"
#include "user.h"
#include "lodge.h"
#include "guide.h"
#include "beach_add.h"

beach::beach(Database db, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::beach)
{
    this->db = db;
    ui->setupUi(this);
    this->on_refresh_btn_clicked();
}

beach::~beach()
{
    delete ui;
}

void beach::on_reserv_btn_clicked()
{
    this->close();
    reserv reserv(db);
    reserv.setModal(true);
    reserv.exec();
    this->show();
}

void beach::on_beach_btn_clicked()
{
    this->close();
    beach beach(db);
    beach.setModal(true);
    beach.exec();
    this->show();}

void beach::on_lodge_btn_clicked()
{
    this->close();
    lodge lodge(db);
    lodge.setModal(true);
    lodge.exec();
    this->show();
}

void beach::on_guide_btn_clicked()
{
    this->close();
    guide guide(db);
    guide.setModal(true);
    guide.exec();
    this->show();
}

void beach::on_user_btn_clicked()
{
    this->close();
    user user(db);
    user.setModal(true);
    user.exec();
    this->show();
}

void beach::on_refresh_btn_clicked()
{
    int i, column, line=0;
    QString temp;
    ui->beachtable->clearContents();
    sprintf(query, "SELECT beach_name, beach_room, beach_shower, beach_wash, beach_guest FROM beach");
    sql_query.exec(QString::fromLocal8Bit(query));
    column = sql_query.record().count();
    ui->beachtable->setRowCount(sql_query.size());
    ui->beachtable->setColumnCount(column);
    if(sql_query.size() != 0)
    {
        while(sql_query.next())
        {
            for(i=0; i<column; i++)
            {
                if(sql_query.value(i) == "")
                    sql_query.value(i) = "0";
                ui->beachtable->setItem(line, i, new QTableWidgetItem(sql_query.value(i).toString()));
            }
            line++;
        }
        ui->beachtable->show();
    }

}

void beach::on_add_btn_clicked()
{
    beach_add b(db);
    b.setModal(true);
    b.exec();
    this->on_refresh_btn_clicked();

}



void beach::on_remove_btn_clicked()
{
    int row;
    if(check==true)
        row = ui->beachtable->currentRow();
    else
        return;

    QString name = ui->beachtable->takeItem(row, 0)->text();
    sprintf(query, "DELETE FROM beach WHERE beach_name='%s'", name.toLocal8Bit().data());
    sql_query.exec(QString::fromLocal8Bit(query));
    if(sql_query.lastError().type() == QSqlError::NoError)
    {
        QMessageBox::information(this, "message", "Delete Complete!");
        ui->beachtable->removeRow(row);
    }
    else
    {
        QMessageBox::information(this, "error", "삭제 실패");
    }
    check = false;
}

void beach::on_beachtable_itemClicked()
{
    check=true;
}

void beach::on_edit_btn_clicked()
{
    int row;
    if(check==true)
        row = ui->beachtable->currentRow();
    else
        return;

    QString name = ui->beachtable->takeItem(row, 0)->text();
    check = false;
    beach_add b(name, db);
    b.setModal(true);
    b.exec();
    this->on_refresh_btn_clicked();
}
