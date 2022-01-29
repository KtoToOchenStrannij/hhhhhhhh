#include <QCoreApplication>
#include <QtWidgets>
#include "sbutton.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SButton sb;
    sb.show();
    return a.exec();
}
