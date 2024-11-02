#include "funktiot.h"


int main()
{
    //Variables
    int a;
    int b;

    //User Inputs
    cout << "Anna luku: ";
    cin>>a;

    cout << "Anna toinen luku: ";
    cin>>b;

    //function calls
    calcSum(a,b);
    calcDiv(a,b);

    int retS = retSum(a,b);
    float retD = retDiv(a,b);

    //prints
    cout << "Summa (ret): " << retS << endl;
    cout << fixed;
    cout << setprecision(2);
    cout << "Jako (ret): " << retD << endl;
    return 0;
}
