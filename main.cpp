#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Curneu Assement");
    w.setStyleSheet("background-image:url(:/C:/Users/naths/Pictures/backi.png)");
    w.showFullScreen();

    w.resize(1920,1080);
    w.show();
    return a.exec();
}
