#include <iostream>
using namespace std;
#include "Rectangle.h"
int main() {
    Rectangle rect; // create object

    rect.setDimensions();  // input values

    cout << "Area of rectangle: " << rect.area() << endl;
    cout << "Perimeter of rectangle: " << rect.perimeter() << endl;

    return 0;
}
