#include "grimwindow.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    srand(GetTickCount());
    QApplication a(argc, argv);
    GrimWindow w;
    w.show();
    return a.exec();
}
