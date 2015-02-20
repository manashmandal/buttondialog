#include "buttondialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ButtonDialog w;
    w.show();

    return a.exec();
}
