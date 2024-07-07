#include "usernotificationswindow.h"
#include "ui_usernotificationswindow.h"

NotificationsWindow::NotificationsWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NotificationsWindow)
{
    ui->setupUi(this);
}

NotificationsWindow::~NotificationsWindow()
{
    delete ui;
}
