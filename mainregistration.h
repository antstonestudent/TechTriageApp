#ifndef MAINREGISTRATION_H
#define MAINREGISTRATION_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class RegisterWindow; }
QT_END_NAMESPACE

class RegisterWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit RegisterWindow(QWidget *parent = nullptr);
    ~RegisterWindow();

private slots:
    void on_pushButton_register_clicked();

private:
    Ui::RegisterWindow *ui;
};

#endif // MAINREGISTRATION_H
