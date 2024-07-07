#include "usermainwindow.h"
#include "ui_usermainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->newTicketButton, &QPushButton::clicked, this, &MainWindow::showUserNewTicketWindow);
    connect(ui->yourTicketsButton, &QPushButton::clicked, this, &MainWindow::showUserYourTicketsWindow);
    connect(ui->inboxButton, &QPushButton::clicked, this, &MainWindow::showUserInboxWindow);
    connect(ui->notificationsButton, &QPushButton::clicked, this, &MainWindow::showUserNotificationsWindow);
    connect(ui->settingsButton, &QPushButton::clicked, this, &MainWindow::showUserSettingsWindow);
    connect(ui->homeButton, &QPushButton::clicked, this, &MainWindow::showUserHomeWindow);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setStackedWidget(QStackedWidget *stackedWidget)
{
    this->stackedWidget = stackedWidget;
}

void MainWindow::showNewTicketWindow()
{
    stackedWidget->setCurrentIndex(2);
}

void MainWindow::showYourTicketsWindow()
{
    stackedWidget->setCurrentIndex(1);
}

void MainWindow::showInboxWindow()
{
    stackedWidget->setCurrentIndex(3);
}

void MainWindow::showSettingsWindow()
{
    stackedWidget->setCurrentIndex(5);
}

void MainWindow::showNotificationsWindow()
{
    stackedWidget->setCurrentIndex(4);
}

void MainWindow::showHomeWindow()
{
    stackedWidget->setCurrentIndex(0);
}
