#ifndef USERINBOXWINDOW_H
#define USERINBOXWINDOW_H

namespace Ui {
class UserInboxWindow;
}

class UserInboxWindow : public QWidget
{
    Q_OBJECT

public:
    explicit UserInboxWindow(QWidget *parent = nullptr);
    ~UserInboxWindow();

private:
    Ui::UserInboxWindow *ui;
};

#endif // USERINBOXWINDOW_H
