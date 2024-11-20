#include <iostream>
#include "car.h"

using namespace std;

int main()
{
    Car car1;
    car1.setModel("Corolla");
    car1.setBrand("Toyota");

    //Minkä takia setEngine ja setWheels täytyy kutsua tässä?
    car1.setEngine();
    car1.setWheels();

    car1.printDetails();
    return 0;
}
