#include "useryourticketswindow.h"
#include "ui_useryourticketswindow.h"

YourTicketsWindow::YourTicketsWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::YourTicketsWindow)
{
    ui->setupUi(this);
}

YourTicketsWindow::~YourTicketsWindow()
{
    delete ui;
}
