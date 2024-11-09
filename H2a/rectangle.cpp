#include "rectangle.h"

void Rectangle::setWidth(double newWidth)
{
    width = newWidth;
}

void Rectangle::setHeight(double newHeight)
{
    height = newHeight;
}

int Rectangle::getArea() const
{
    return width*height;
}

int Rectangle::getCircum() const
{
    return 2*(width*height);
}
Rectangle::Rectangle() {}
