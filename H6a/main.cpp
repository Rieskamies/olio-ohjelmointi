
#include <QCoreApplication>
#include "myclass.h"
using namespace std;

int main(int argc, char *argv[])
{
    // En ole nyt kyllä ihan varma mitä varten nuo argc, *argv[] yms. on olemassa int main() ja alemmassa komennossa.
    QCoreApplication a(argc, argv);

    // Luo olio MyClass-luokasta
    MyClass myObject;

    // Kutsutaan metodia
    myObject.raiseMySignal();

    return a.exec();
}
