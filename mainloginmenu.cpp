#include "mainloginmenu.h"
#include "ui_mainloginmenu.h"

LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_pushButton_login_clicked()
{
    // Login logic here
}

void LoginWindow::on_label_register_linkActivated(const QString &link)
{
    // Navigate to registration window
}

void LoginWindow::on_label_forgotPassword_linkActivated(const QString &link)
{
    // Navigate to forgot password window
}
