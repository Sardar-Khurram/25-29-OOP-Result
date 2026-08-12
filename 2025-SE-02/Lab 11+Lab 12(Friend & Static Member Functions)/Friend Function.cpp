#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    // Constructor to initialize length
    Box(int len) {
        length = len;
    }

    // Declaring the friend function inside the class
    friend void displayLength(Box b);
};

   // Defining the friend function
    void displayLength(Box b) {
    // Accessing the private member directly
    cout << "The length of the box is: " << b.length << " units." << endl;
}

    int main() {
    // Create a Box object with a length of 15
    Box myBox(15);

    // Call the friend function like a normal function
    displayLength(myBox);

    return 0;
}
