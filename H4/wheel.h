#ifndef WHEEL_H
#define WHEEL_H
#include <iostream>
using namespace std;

class Wheel
{
private:
    int size;
    string type;
public:
    Wheel();
    Wheel(int, string);
    int getSize();
    void setSize(const int &newSize);
    string getType();
    void setType(const string &newType);
};

#endif // WHEEL_H
