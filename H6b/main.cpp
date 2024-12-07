#include "exampleclass.h"
#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ExampleClass myObj;
    myObj.startToWait();
    return a.exec();
}
