#include "graphicui.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    graphicUI w;
    w.show();

    return a.exec();
}
