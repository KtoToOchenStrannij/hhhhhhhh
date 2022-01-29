#ifndef CUSTOMBUTTON_H
#define CUSTOMBUTTON_H
#include <QtWidgets>


class customButton : public QPushButton
{
    Q_OBJECT
public:
    customButton(QWidget* wgt = 0);
signals:
    void rclicked();
protected:
    void mouseReleaseEvent(QMouseEvent *event) override
    {
        if(event->button() == Qt::RightButton)
        {
            emit rclicked();
        }
      QPushButton::mouseReleaseEvent(event);
    }
};

#endif // CUSTOMBUTTON_H
