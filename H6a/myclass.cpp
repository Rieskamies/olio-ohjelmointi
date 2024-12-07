#include "myclass.h"

MyClass::MyClass(QObject *parent) : QObject(parent) {

    // Tämä yhdistää signaalin mySignal slottiin mySlot!
    // Eli kun metodia raiseMySignal (ns. signaali nostetaan) kutsutaan niin tätä kautta tajutaan
    // kutsua tuota mySlottia.
    // toisinsanoen: mySignal kytketään slottiin mySLOT
    connect(this, SIGNAL(mySignal()), this, SLOT(mySlot()));
}

void MyClass::raiseMySignal()
{
    //"nostetaan" mySignal, niminen signaali / kutsutaan metodia.
    emit mySignal();
}

void MyClass::mySlot()
{
    //Tulostaa viestin konsoliin
    //qDebug toimii kuten cout. Graafisissa sovelluksissa qDebuggia voidaan käyttää tulostamaan tekstiä Qt-Creatorin Output ikkunaan. Näitä sanomia ei siis näytetä loppukäyttäjille.
    qDebug()<<"mySlot:ia kutsuttiin";
}
