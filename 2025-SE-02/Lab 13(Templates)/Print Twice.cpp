#include <iostream>
#include <string>
using namespace std;

// 1. Define the function template
template <typename T>
void printTwice(T val) {
    cout << val << endl;
    cout << val << endl;
}

int main() {
    cout << "--- PrintTwice() ---" << endl;

    // Call it with an int
    cout << "Int :" << endl;
    printTwice(100);
    cout << endl;

    // Call it with a double
    cout << "Double:" << endl;
    printTwice(45.67);
    cout << endl;

    // Call it with a string
    cout << "String:" << endl;
    printTwice("Hello World!");
    cout << endl;

    return 0;
}
