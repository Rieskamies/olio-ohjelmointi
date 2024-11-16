#include "italianchef.h"

ItalianChef::ItalianChef() : Chef() {

}

ItalianChef::~ItalianChef() {
    cout << "ItalianChef " << name << " destruktori" << endl;
}

ItalianChef::ItalianChef(string a) : Chef(a) {

    cout << "ItalianChef " << name << " kontruktori" << endl;
}

string ItalianChef::getName() {
    cout << "name of the Italian Chef is " << name << endl;
    return name;
}

void ItalianChef::makePasta() {
    cout << "Italian Chef " << name << " makes pasta" << endl;
}
