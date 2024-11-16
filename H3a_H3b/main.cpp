#include "chef.h"
#include "italianchef.h"
#include "animal.h"
#include "dog.h"

int main() {
// En ole varma pitikö tämä Gordonin osio jättää vai ei, mutta ilman Gordonin osiota H3a vaihe 10 näyttää oikealta.
// Tosin destruktorit päätyvät ohjelman outputin loppuun.

/*  Chef objChef("Gordon Ramsay");

    objChef.makeSalad();
    objChef.makeSoup();
*/
cout << "H3a" << endl;
cout << "_____________________________" << endl;
    ItalianChef objItaly("Anthony Bourdain");
    objItaly.makeSalad();
    objItaly.makeSoup();
    objItaly.makePasta();
    objItaly.getName();

    cout << "_____________________________" << endl;
    cout << "H3b" << endl;
    cout << "_____________________________" << endl;

    Animal objAnimal;
    objAnimal.callOut();
    Dog objDog;
    objDog.callOut();

    cout << endl;
    cout << endl;

    cout << "_____________________________" << endl;
    cout << "Destruktorit" << endl;
    cout << "_____________________________" << endl;
    return 0;
}
