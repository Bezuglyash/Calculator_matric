#include "view.h"
#include "Logic_matrix.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    View w;
    w.show();
    return a.exec();
}
