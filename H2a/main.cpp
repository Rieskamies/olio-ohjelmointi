#include "car.h"
#include "rectangle.h"
#include "student.h"
using namespace std;

int main()
{
    //Luodaan ns. automaattinen olio (tuhoutuu automaagisesti)
    //Luodaan pinoon
    Car objCar;
    objCar.setBrand("Skoda");   //Asetetaan auton Brand
    objCar.setModel("Octavia"); //Asetetaan auton Model
    objCar.setYearModel(2015);  //Asetetaan auton YearModel
    cout << "Car info:" << endl;
    objCar.printData();         //Tulosteaan auton tiedot

    //Luodaan ns. dynaaminen olia (täytyy tuhota itse)
    //Luodaan kekoon
    Rectangle *objRectangle;
    objRectangle=new Rectangle;
    objRectangle->setHeight(5.0);           //Asetetaan Height
    objRectangle->setWidth(3.0);            //Asetetaan Width
    int area = objRectangle->getArea();     //Haetaan pinta-ala muuttujaan area
    int circum = objRectangle->getCircum(); //Haetaan ympärysmitta muuttujaan circum

    //Tulostus
    cout << "_________________" << endl;
    cout << "Pinta-ala: " << area << endl;
    cout << "Ymparystmitta: " << circum << endl;

    delete objRectangle; //Tuhotaan olio
    objRectangle=nullptr;//Osoitetaan null pointteriin

    //Luodaan olio smart-pointterin avulla (tuhoutuu automaagisesti)
    //Luodaan kekoon
    unique_ptr<student> objStudent=make_unique<student>();
    objStudent->setStudentNumber(42);
    objStudent->setName("Tommi Tarmokas");
    objStudent->setAverage(3.6);

    //Tulostus
    cout << "_________________" << endl;
    cout << "Opiskelijan Nimi: " << objStudent->getName() << endl;
    cout << "Opiskelijanumero: " << objStudent->getStudentNumber() << endl;
    cout << "Opiskelijan Keskiarvo: " << objStudent->getAverage() << endl;









    return 0;
}
