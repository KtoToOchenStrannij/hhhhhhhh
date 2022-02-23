#include "window.h"
#include <QGridLayout>

window::window(QWidget *parent): QWidget(parent)
{
    QGridLayout *grid = new QGridLayout(this);
      grid->setSpacing(2);
      for (int i=0; i<9; i++) {
       for (int j=0; j<9; j++) {
           SButton* btn = new SButton;
         btn->setFixedSize(40, 40);
         grid->addWidget(btn, i, j);
       }
      }

      setLayout(grid);
}
