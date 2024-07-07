#ifndef USERYOURTICKETSWINDOW_H
#define USERYOURTICKETSWINDOW_H

#include <QWidget>

namespace Ui {
class YourTicketsWindow;
}

class YourTicketsWindow : public QWidget
{
    Q_OBJECT

public:
    explicit YourTicketsWindow(QWidget *parent = nullptr);
    ~YourTicketsWindow();

private:
    Ui::YourTicketsWindow *ui;
};

#endif // USERYOURTICKETSWINDOW_H
