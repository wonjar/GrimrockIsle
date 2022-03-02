#include "grimwindow.h"
#include <windows.h>
#include <winbase.h>
#include <QApplication>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    srand(GetTickCount());
    QApplication a(argc, argv);
    GrimWindow w;
    w.show();
    return a.exec();
}
