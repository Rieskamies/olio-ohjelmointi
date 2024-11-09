#include "car.h"
#include <vector>

int main()
{
    //Luodaan vektoritaulukko
    vector<Car> carList;

    //Luodaan Car luokan olioita
    Car objCar1=Car("Skoda", "Octavia", 2015);
    Car objCar2=Car("Volvo", "XC60", 1991);
    Car objCar3=Car("Volkswagen", "Golf", 2018);

    //Lisätään luodut oliot listaan (vektoriin)
    carList.push_back(objCar1);
    carList.push_back(objCar2);
    carList.push_back(objCar3);

    //Tulosta listan toisen alkion tiedot.
    cout << "Toisen alkion tiedot:" << endl;
    cout << endl;
    carList[1].printData();
    cout << endl;
    cout << "Kaikkien alkioiden tiedot:" << endl;
    cout << "---------------------------" << endl;
    for(int i=0; i<=2; i++) {
        carList[i].printData();
    }
    return 0;
}
