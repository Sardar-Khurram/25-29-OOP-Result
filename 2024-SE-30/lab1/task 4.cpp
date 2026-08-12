#include <iostream>
using namespace std;
#include "Temperature.h"
int main() {
    // Create object
    Temperature temp;

    // Take input
    cout << "Enter temperature in Celsius: ";
    cin >> temp.celsius;

    // Display converted temperature
    temp.display();

    return 0;
}
