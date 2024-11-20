#include "car.h"



Car::Car() {}

Car::Car(string a, string b)
{
    brand = a;
    model = b;
}

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

void Car::setEngine()
{
    objEngine.setHorsepower(150);
    objEngine.setDisplacement(2.0);
}

void Car::setWheels()
{
    /*
     * Tämä for looppi ja lista tehty GPT:llä, tahdoin kompaktin tavan tehdä tämä sen sijaan, että
     * kirjoittaa jokaiselle renkaalle erikseen:
     * objWheel1.setSize(17);
     * objWheel1.setType("kesarengas");
     * jne..
     *
     * Ymmärsin, että Wheel* kertoo että wheels[] on lista(array) pointereita, jonka
     * pituus määrittyy pointerien määrän mukaan. Pointerit osoittaa Wheel-objektiin.
     *
     * Tuo taitaa toimia niin, että jos esim. i = 1 on wheels silloin periaatteessa objWheel1, koska se
     * on eka ko. listassa ja tästä tulee Wheel objWheel1 jolle sitten asetetaan koko ja tyyppi
     * ja niin edelleen muiden kanssa kun i:n arvo kasvaa. Kun i on isompi kuin 4 looppi päättyy.
     */
    Wheel* wheels[] = { &objWheel1, &objWheel2, &objWheel3, &objWheel4 };

    for (int i = 0; i < 4; i++) {
        wheels[i]->setSize(17);
        wheels[i]->setType("kesarengas");
    }
}



void Car::printDetails()
{
    cout << "Auto: " << model << " " << brand << endl;
    cout << "Moottori: " << objEngine.getHorsepower() << " hp, " << objEngine.getDisplacement() << " L" << endl;

    //Käytin tätä looppia taas, toki muokkasin itse tilanteeseen sopivaksi.
    Wheel* wheels[] = { &objWheel1, &objWheel2, &objWheel3, &objWheel4 };

    for (int i = 0; i < 4; i++) {
        cout << "Rengas " << (i + 1) << ": ";
        cout << wheels[i]->getSize() << " tuumaa, " << wheels[i]->getType() << endl;
    }

}
