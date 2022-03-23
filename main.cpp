#include <QCoreApplication>
#include <QtWidgets>
#include "sbutton.h"
#include "window.h"
#include <ctime>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    window sb;
    sb.show();
    return a.exec();
}
