#include "dog.h"
#include <iostream>

using namespace std;

Dog::Dog() {}

Dog::~Dog() {
    cout << "Dog destruktori" << endl;
}

void Dog::callOut() {
    cout << "Dog barks" << endl;
}
