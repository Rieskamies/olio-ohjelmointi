#include "car.h"

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}


void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}

int Car::getYearModel() const
{
    return yearModel;
}

void Car::printData() //Tulosteaan auton tiedot
{
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Year Model: " << yearModel << endl;
}

Car::Car() {}

