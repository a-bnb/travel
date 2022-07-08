#include "reserv_add.h"
#include "ui_reserv_add.h"

reserv_add::reserv_add(bool edit, QString id, Database dbs, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reserv_add),
    db(dbs),
    id(id),
    check(edit)
{
    ui->setupUi(this);
    this->on_refresh_btn_clicked();
}

reserv_add::~reserv_add()
{
    delete ui;
}

void reserv_add::on_add_button_clicked()
{
    QList<QString> reserv_list;
    reserv_list.append(ui->date_text->text());
    reserv_list.append(id);
    reserv_list.append(ui->guide_text->text());
    reserv_list.append(ui->lodge_text->text());
    reserv_list.append(ui->beach_text->text());


    if(!check)
    {
        sprintf(query, "INSERT INTO reservation(reserv_date, client_id, guide_name, hotel_name, beach_name) VALUES(%s, '%s', '%s', '%s', '%s')",
                reserv_list.value(0).toLocal8Bit().data(),reserv_list.value(1).toLocal8Bit().data(),
                reserv_list.value(2).toLocal8Bit().data(),reserv_list.value(3).toLocal8Bit().data(),
                reserv_list.value(4).toLocal8Bit().data());
    }
    else
    {
        sprintf(query, "UPDATE resrvation SET  reserv_date='%s',client_id='%s', guide_name='%s', hotel_name='%s', beach_name='%s' WHERE reserv_id=%s",
                reserv_list.value(0).toLocal8Bit().data(),reserv_list.value(1).toLocal8Bit().data(),
                reserv_list.value(2).toLocal8Bit().data(),reserv_list.value(3).toLocal8Bit().data(),
                reserv_list.value(4).toLocal8Bit().data(),id.toLocal8Bit().data());
    }
    sql_query.exec(QString::fromLocal8Bit(query));
    if(sql_query.lastError().type() != QSqlError::NoError)
    {
        QMessageBox::information(this, "error", "데이터베이스 접근 오류");
        std::cout<<sql_query.lastError().text().toStdString()<<std::endl;
    }
    else
    {
        QMessageBox::information(this,"message", ui->add_button->text()+" 완료");
        this->close();
    }
}

void reserv_add::on_calendar_selectionChanged()
{
    QDate date = ui->calendar->selectedDate();
    ui->date_text->setText(date.toString());
}

void reserv_add::on_refresh_btn_clicked()
{
    int line=0;
    ui->guide_table->clearContents();
    ui->lodge_table->clearContents();
    ui->beach_table->clearContents();

    sprintf(query, "SELECT guidename FROM guide WHERE guidestate = 'break'");
    sql_query.exec(QString::fromLocal8Bit(query));
    ui->guide_table->setRowCount(sql_query.size());
    if(sql_query.size() != 0)
    {
        while(sql_query.next())
        {
            ui->guide_table->setItem(line++, 0, new QTableWidgetItem(sql_query.value(0).toString()));
            line++;
        }
        line=0;
    }
    else
        return;
    ui->guide_table->show();

    sprintf(query, "SELECT hotel_name FROM hotel");
    sql_query.exec(QString::fromLocal8Bit(query));
    ui->lodge_table->setRowCount(sql_query.size());
    if(sql_query.size() != 0)
    {
        while(sql_query.next())
        {
            ui->lodge_table->setItem(line++, 0, new QTableWidgetItem(sql_query.value(0).toString()));
            line++;
        }
        line=0;
    }
    else
        return;
    ui->lodge_table->show();

    sprintf(query, "SELECT beach_name FROM beach");
    sql_query.exec(QString::fromLocal8Bit(query));
    ui->beach_table->setRowCount(sql_query.size());
    if(sql_query.size() != 0)
    {
        while(sql_query.next())
        {
            ui->beach_table->setItem(line++, 0, new QTableWidgetItem(sql_query.value(0).toString()));
            line++;
        }
        line=0;
    }
    else
        return;
    ui->beach_table->show();

}

void reserv_add::on_guide_table_itemClicked(QTableWidgetItem *item)
{
    ui->guide_text->setText(item->text());

}

void reserv_add::on_lodge_table_itemClicked(QTableWidgetItem *item)
{
    ui->lodge_text->setText(item->text());
}

void reserv_add::on_beach_table_itemClicked(QTableWidgetItem *item)
{
    ui->beach_text->setText(item->text());
}
