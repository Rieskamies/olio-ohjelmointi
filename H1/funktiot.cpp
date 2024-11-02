#include "funktiot.h"

void calcSum(int a, int b)
{
    int sum = a+b;
    cout << "Summa (calc): " << sum << endl;
}

void calcDiv(int a, int b)
{
    if (a==0 || b==0) {
        cout << "Et voi jakaa nollalla" << endl;
    }

    else {
        int division = a/b;
        cout << "Jako (calc): " << division << endl;
    }
}

int retSum(int a, int b)
{
    int sum = a+b;
    return sum;
}

int retDiv(int a, int b)
{
    if (a==0 || b==0) {
        cout << "Et voi jakaa nollalla" << endl;
        return 0;
    }

    int division = a/b;
    return division;
}
