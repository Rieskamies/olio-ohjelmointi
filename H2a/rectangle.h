#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double width;
    double height;

public:
    Rectangle();
    void setWidth(double newWidth);
    void setHeight(double newHeight);
    int getArea() const;
    int getCircum() const;
};

#endif // RECTANGLE_H
