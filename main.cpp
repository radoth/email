#include "mainwindow.h"

#include "database.h"
#include <QApplication>
#include "base64.h"

int main(int argc, char *argv[])
{
    /*char* a ="tdrKrrfiL1FR08rP5M340rOw5i+0v87Esb4=" ;
    string b = base64_decode(a);
    QString c = QString::fromLocal8Bit(b.c_str());
    qDebug()<<"decode:"<<c;*/

    /*bool isChanged = false;
    string b ="24=D00=A10=CA0=B10=BC0=C60=CA0=FD0=B70=A80=200-=200=B80=B10=B10=BE0.docx";
    QPDeCoding(b,isChanged);
    QString c = QString::fromLocal8Bit(b.c_str());
    qDebug()<<"decode:"<<c;*/


    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
