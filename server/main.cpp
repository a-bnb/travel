#include "user.h"
#include "database.h"

#include <QApplication>
#include <QIcon>

int main(int argc, char *argv[])
{
    Database db;
    db.database_init();
    QApplication a(argc, argv);
    QIcon icon(":/new/prefix1/img/bonobono.jpg");
    a.setWindowIcon(icon);
    user u(db);

    u.show();

    return u.exec();
}
