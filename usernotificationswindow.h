#ifndef USERNOTIFICATIONSWINDOW_H
#define USERNOTIFICATIONSWINDOW_H

#include <QWidget>

namespace Ui {
class NotificationsWindow;
}

class NotificationsWindow : public QWidget
{
    Q_OBJECT

public:
    explicit NotificationsWindow(QWidget *parent = nullptr);
    ~NotificationsWindow();

private:
    Ui::NotificationsWindow *ui;
};

#endif // USERNOTIFICATIONSWINDOW_H
