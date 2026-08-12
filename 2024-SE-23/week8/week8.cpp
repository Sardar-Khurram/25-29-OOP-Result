// Polymorphism : Shape Area 

#include <iostream>
using namespace std;

// Base Class
class Shape
{
public:
    virtual double area()
    {
        return 0;
    }

    virtual ~Shape() {}
};

// Derived Class: Rectangle
class Rectangle : public Shape
{
private:
    double length, width;

public:
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }

    double area() override
    {
        return length * width;
    }
};

// Derived Class: Circle
class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r)
    {
        radius = r;
    }

    double area() override
    {
        return 3.14159 * radius * radius;
    }
};

int main()
{
    Shape *shape;      // Base class pointer

    Rectangle rect(10, 5);
    Circle cir(7);

    shape = &rect;
    cout << "Area of Rectangle = " << shape->area() << endl;

    shape = &cir;
    cout << "Area of Circle = " << shape->area() << endl;

    return 0;
}