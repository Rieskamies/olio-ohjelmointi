#include "classb.h"
#include "assosiationa.h"
#include "aggregationa.h"


int main()
{
// VAIHE 1

    int a = 5;
    int b = 10;

    cout << "a:n arvo on: " << a << " ja osoite on: " << &a << endl;
    cout << "b:n arvo on: " << b << " ja osoite on: " << &b << endl;
    cout << endl;
//________________________________________________________________________
    int *myPointer = &a; //Luodaan int tyyppinen pointteri myPointer. Osoittaa muuttujaan a

    cout << "Pointeri:" << endl;
    cout << "Pointterin osoittama osoite on: " << myPointer << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << endl;
    cout << endl;
//________________________________________________________________________
    myPointer = &b; //asetetaan myPointeri osoittamaan b:n a:n sijasta

    cout << "Pointterin osoittama osoite on: " << &myPointer << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << endl;
    cout << endl;
//________________________________________________________________________
    int &refA = a; //luodaan referenssi refA, joka referoi muuttujaan a

    cout << "refA osoittaa osoitteeseen on: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;
    cout << endl;

//________________________________________________________________________
// VAIHE 2

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");

    cout<<"Assosiaatio esimerkki:"<<endl;
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAss: "<<objAss.getBinfo()<<endl;
    cout<<endl;

//________________________________________________________________________
// VAIHE 3

    cout<<"Aggregaatio esimerkki:"<<endl;
    ClassB &refB=objB;
    AggregationA objAggr(refB);
    objAggr.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAggr "<<objAggr.getBinfo()<<endl;
    cout<<endl;


    return 0;
}
