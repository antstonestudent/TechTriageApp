#include "usernewticketwindow.h"
#include "ui_usernewticketwindow.h"

NewTicketWindow::NewTicketWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NewTicketWindow)
{
    ui->setupUi(this);
}

NewTicketWindow::~NewTicketWindow()
{
    delete ui;
}
