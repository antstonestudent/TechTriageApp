#include "mainwindow.h"

#include <QApplication>
#include <QFont>
#include <QLabel>
#include <QFontDatabase>

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    MainWindow w;

    QWidget window;
    window.resize(1920,1080);
    window.setWindowTitle("TechTriage");
    window.show();

    return app.exec();
}
