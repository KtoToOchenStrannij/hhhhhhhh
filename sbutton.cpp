#include "sbutton.h"

SButton::SButton(QWidget* pwgt) : QLabel(pwgt)
{
    customButton* pb = new customButton(this);
    int ar = 9;
    switch (ar)
    {
    case 0:
        this->setText(" ");
        break;
    case 1:
        this->setText("1");
        break;
    case 2:
        this->setText("2");
        break;
    case 3:
        this->setText("3");
        break;
    case 4:
        this->setText("4");
        break;
    case 5:
        this->setText("5");
        break;
    case 6:
        this->setText("6");
        break;
    case 7:
        this->setText("7");
        break;
    case 8:
        this->setText("8");
        break;
    case 9:
        this->setText("*");
        break;
    }

    connect(pb,SIGNAL(clicked()),pb,SLOT(hide()));
    connect(pb, &customButton::rclicked, [pb](){pb->setText("!>");});
    QLayout* glo = new QGridLayout();

    glo->addWidget(pb);
    this->setLayout(glo);
    glo->setContentsMargins(0,0,0,0);

    QSizePolicy PolicyButton_1 = pb->sizePolicy();
        PolicyButton_1.setVerticalPolicy(QSizePolicy::Expanding);
        pb->setSizePolicy(PolicyButton_1);
}

