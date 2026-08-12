//Constructor Overloading____Rectangle
#include <iostream>
using namespace std;
class Rectangle {
private:
    float length;
    float width;
public:
    // Default constructor
    Rectangle() {
    length = 1.0;
    width = 1.9;
    }
    // Two-parameter constructor
    Rectangle(float l, float w) {
    length = l;
    width = w;
    
    }
    // Single-parameter constructor 
    Rectangle(float side) {
    length = side;
    width = side;
    }
    float area() {
    return length * width;
    }
    void display() {
    cout << "Length: " << length << ", Width: " << width
    << ", Area: " << area() << endl;
    }
};
int main() {
    Rectangle r1;              // Default
    Rectangle r2(5.0, 3.0); // Two parameters
    Rectangle r3(4.0);        // Single parameter
    cout << "Rectangle 1: ";
    r1.display();
    cout << "Rectangle 2: ";
    r2.display();
    cout << "Rectangle 3: ";
    r3.display();
    return 0;
}
