#include "multipagetest.h"
#include <QtWidgets/QApplication>
#include <QtCore/qfile.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile file("stylesheet.qss");
    file.open(QFile::ReadOnly);
    QString stylesheet = QLatin1String(file.readAll());
    a.setStyleSheet(stylesheet);
    MultiPageTest w;
    w.show();
    return a.exec();
}
