#include "userinboxwindow.h"
#include "ui_userinboxwindow.h"

InboxWindow::InboxWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InboxWindow)
{
    ui->setupUi(this);
}

InboxWindow::~InboxWindow()
{
    delete ui;
}
