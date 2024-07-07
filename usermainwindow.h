#ifndef USERMAINWINDOW_H
#define USERMAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void setStackedWidget(QStackedWidget *stackedWidget);

private slots:
    void showNewTicketWindow();
    void showYourTicketsWindow();
    void showInboxWindow();
    void showSettingsWindow();
    void showNotificationsWindow();
    void showHomeWindow();

private:
    Ui::MainWindow *ui;
    QStackedWidget *stackedWidget;
};

#endif // USERMAINWINDOW_H
