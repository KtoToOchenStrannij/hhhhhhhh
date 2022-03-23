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
    bool VT[9][9];
        srand(time(NULL));
        for(int i=0;i<9;i++)
        {
            for(int j = 0;j<9;j++)
            {
                VT[i][j] = 0;
            }
        }
        for(int i=10;i>0;)
        {
            int k = rand()%9;
            int d = rand()%9;
            if(VT[k][d]==0)
            {
            VT[k][d] = 1;
            i--;
            }
        }
    return a.exec();
}
