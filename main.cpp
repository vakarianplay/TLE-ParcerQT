#include "connectform.h"
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);

    ConnectForm c;
    c.show();

    return a.exec();
}
