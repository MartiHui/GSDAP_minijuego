#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    std::srand(time(NULL));

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
