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
    int aw = 0;

    void mouseReleaseEvent(QMouseEvent *event) override
    {
        if(event->button() == Qt::LeftButton and aw%2==0)
        {
            Q_UNUSED(hide());
        }
        else
            if(event->button() == Qt::RightButton and aw%2 == 1)
            {
                aw=0;
                Q_UNUSED(setText(" "));
            }
            else
                if(event->button() == Qt::RightButton and aw%2 == 0)
                {
                    aw=1;
                    Q_UNUSED(setText("!>"));
                }

        QPushButton::mouseReleaseEvent(event);
    }

};

#endif // CUSTOMBUTTON_H
