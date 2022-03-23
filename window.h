#ifndef WINDOW_H
#define WINDOW_H
#include <QWidget>
#include "sbutton.h"

class window : public QWidget
{
public:
    window(QWidget *parent = 0);
    QList<SButton *> *buttons = new QList<SButton *>();
};

#endif // WINDOW_H
