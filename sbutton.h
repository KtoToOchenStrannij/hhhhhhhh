#ifndef SBUTTON_H
#define SBUTTON_H
#include "custombutton.h"
#include <QObject>
#include <QtWidgets>
#include <QSizePolicy>
#include <QTreeView>


class SButton : public QLabel
{
public:
     int m_ar = 0;
     SButton(QWidget* pwgt=0, int ar){m_ar=ar;}
};

#endif // SBUTTON_H
