#include "window.h"
#include <QGridLayout>

window::window(QWidget *parent): QWidget(parent)
{
    QGridLayout *grid = new QGridLayout(this);
    grid->setSpacing(2);
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


    int TAB [11][11];
    for(int i=0;i<11;i++)
    {
        for(int j = 0;j<11;j++)
        {
            TAB[i][j] = 0;
        }
    }
    for(int i=1;i<10;i++)
    {
        for(int j = 1;j<10;j++)
        {
            TAB[i][j] = VT[i-1][j-1];
        }
    }

    int VT_2[9][9];

    for(int i=0;i<9;i++)
    {
        for(int j = 0;j<9;j++)
        {
            if(TAB[i+1][j+1]==1)
            {
                VT_2[i][j] = 9;
            }
            else
            {
                VT_2[i][j] = TAB[i+1+1][j+1+1] + TAB[i+1][j+1+1] + TAB[i+1+1][j+1] + TAB[i+1-1][j+1] + TAB[i+1][j+1-1] + TAB[i+1-1][j+1+1] + TAB[i+1+1][j+1-1] + TAB[i+1-1][j+1-1];

            }
        }
    }

    for (int i=0; i<9; i++) {
        for (int j=0; j<9; j++) {
            SButton* btn = new SButton();
            btn->m_ar = VT_2[i][j];
            btn->setFixedSize(40, 40);
            grid->addWidget(btn, i, j);
        }
    }
    setLayout(grid);
}
