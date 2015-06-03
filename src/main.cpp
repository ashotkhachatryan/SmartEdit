#include "smartedit.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SmartEdit w;
    w.show();

    return a.exec();
}
