#include "lodge.h"
#include "ui_lodge.h"
#include "beach.h"
#include "user.h"
#include "lodge.h"
#include "guide.h"
#include "lodge_add.h"

lodge::lodge(Database db, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::lodge)
{
    this->db = db;
    ui->setupUi(this);
    this->on_refresh_btn_clicked();
}

lodge::~lodge()
{
    delete ui;
}


void lodge::on_beach_btn_clicked()
{
    this->close();
    beach beach(db);
    beach.setModal(true);
    beach.exec();
    this->show();
}

void lodge::on_lodge_btn_clicked()
{
    this->close();
    lodge lodge(db);
    lodge.setModal(true);
    lodge.exec();
    this->show();
}

void lodge::on_guide_btn_clicked()
{
    this->close();
    guide guide(db);
    guide.setModal(true);
    guide.exec();
    this->show();
}

void lodge::on_user_btn_clicked()
{
    this->close();
    user user(db);
    user.setModal(true);
    user.exec();
    this->show();
}

void lodge::on_refresh_btn_clicked()
{
    int i, column, line=0;
    QString temp;
    ui->lodgetable->clearContents();
    sprintf(query, "SELECT hotel_name, hotel_sortation, hotel_number, hotel_address FROM hotel");
    sql_query.exec(QString::fromLocal8Bit(query));
    column = sql_query.record().count();
    ui->lodgetable->setRowCount(sql_query.size());
    ui->lodgetable->setColumnCount(column);
    if(sql_query.size() != 0)
    {
        while(sql_query.next())
        {
            for(i=0; i<column; i++)
            {
                ui->lodgetable->setItem(line, i, new QTableWidgetItem(sql_query.value(i).toString()));
            }
            line++;
        }
        ui->lodgetable->show();

    }
}

void lodge::on_add_btn_clicked()
{
    lodge_add l(db);
    l.setModal(true);
    l.exec();
    this->on_refresh_btn_clicked();
}

void lodge::on_remove_btn_clicked()
{
    int row;
    if(check==true)
        row = ui->lodgetable->currentRow();
    else
        return;

    QString name = ui->lodgetable->takeItem(row, 0)->text();
    sprintf(query, "DELETE FROM hotel WHERE hotel_name='%s'", name.toLocal8Bit().data());
    sql_query.exec(QString::fromLocal8Bit(query));
    if(sql_query.lastError().type() == QSqlError::NoError)
    {
        QMessageBox::information(this, "message", "Delete Complete!");
        ui->lodgetable->removeRow(row);
    }
    else
    {
        QMessageBox::information(this, "error", "삭제 실패");
    }
    check = false;
}

void lodge::on_lodgetable_itemClicked()
{
    check = true;
}
