#ifndef USERSETTINGSWINDOW_H
#define USERSETTINGSWINDOW_H

#include "qobject.h"
#include "qtmetamacros.h"
#include <QWidget>

namespace Ui {
class SettingsWindow;
}

class SettingsWindow : public QWidget
{
    Q_OBJECT

public:
    explicit SettingsWindow(QWidget *parent = nullptr);
    ~SettingsWindow();

private:
    Ui::SettingsWindow *ui;
};

#endif // USERSETTINGSWINDOW_H
