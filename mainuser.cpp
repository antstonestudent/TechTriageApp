#include <QApplication>
#include <QStackedWidget>
#include "usermainwindow.h"
#include "useryourticketswindow.h"
#include "usernewticketwindow.h"
#include "usernotificationswindow.h"
#include "usersettingswindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QStackedWidget *stackedWidget = new QStackedWidget;

    MainWindow *w = new MainWindow;
    YourTicketsWindow *y = new YourTicketsWindow;
    NewTicketWindow *n = new NewTicketWindow;
    InboxWindow *i = new InboxWindow;
    NotificationsWindow *no = new NotificationsWindow;
    SettingsWindow *s = new SettingsWindow;

    w->setStackedWidget(stackedWidget);
    stackedWidget->addWidget(w);
    stackedWidget->addWidget(y);
    stackedWidget->addWidget(n);
    stackedWidget->addWidget(i);
    stackedWidget->addWidget(no);
    stackedWidget->addWidget(s);

    stackedWidget->setCurrentWidget(w);
    stackedWidget->show();

    return a.exec();
}
