#include "animal.h"
#include <iostream>

using namespace std;

Animal::Animal() {}

Animal::~Animal() {
    cout << "Animal destruktori" << endl;
}

void Animal::callOut() {
    cout << "Animal makes noises" << endl;
}
