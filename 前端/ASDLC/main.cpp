#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile qss("style.qss");
    if(qss.open(QFile::ReadOnly))
    {
        qDebug("open sucess");
        QString style=QLatin1String(qss.readAll());
        a.setStyleSheet(style);
        qss.close();
    }
    else
    {
        qDebug("Open failed");
    }
    Widget w;
    w.show();

    return a.exec();
}
