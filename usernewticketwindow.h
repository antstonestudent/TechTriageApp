#ifndef USERNEWTICKETWINDOW_H
#define USERNEWTICKETWINDOW_H

#include "qtmetamacros.h"
#include <QWidget>

namespace Ui {
class NewTicketWindow;
}

class NewTicketWindow : public QWidget
{
    Q_OBJECT

public:
    explicit NewTicketWindow(QWidget *parent = nullptr);
    ~NewTicketWindow();

private:
    Ui::NewTicketWindow *ui;
};

#endif // USERNEWTICKETWINDOW_H
