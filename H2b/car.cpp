#include "car.h"

Car::Car() {}

Car::Car(string a, string b, int c)
{
    brand = a;
    model = b;
    yearModel = c;
}

void Car::printData()
{
    cout << "Car information:" << endl;
    cout << "Car brand: " << brand << endl;
    cout << "Car model: " << model << endl;
    cout << "Car year model: " << yearModel << endl;
    cout << "___________________" << endl;
}
