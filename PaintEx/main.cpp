#include "mainwidget.h"
#include <QApplication>
#include <QFont>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFont f("ZYSong18030", 12);
    MainWidget w;

    a.setFont(f);
    w.show();

    return a.exec();
}
