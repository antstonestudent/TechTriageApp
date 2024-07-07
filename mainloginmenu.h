#ifndef MAINLOGINMENU_H
#define MAINLOGINMENU_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class LoginWindow; }
QT_END_NAMESPACE

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

private slots:
    void on_pushButton_login_clicked();
    void on_label_register_linkActivated(const QString &link);
    void on_label_forgotPassword_linkActivated(const QString &link);

private:
    Ui::LoginWindow *ui;
};

#endif // MAINLOGINMENU_H
