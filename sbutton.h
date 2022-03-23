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
    SButton(QWidget* pwgt = 0);
    int m_ar;
};

#endif // SBUTTON_H
