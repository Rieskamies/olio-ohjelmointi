#include "wheel.h"

Wheel::Wheel() {}

Wheel::Wheel(int a, string b)
{
    size = a;
    type = b;
}

int Wheel::getSize()
{
    return size;
}

void Wheel::setSize(const int &newSize)
{
    size = newSize;
}

string Wheel::getType()
{
    return type;
}

void Wheel::setType(const string &newType)
{
    type = newType;
}
