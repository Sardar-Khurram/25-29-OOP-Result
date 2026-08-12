#include <iostream>
using namespace std;
#include "Calculator.h"
int main() {
    Calculator calc;
    float a, b;
    int choice;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    calc.setValues(a, b);

    cout << "\nChoose Operation:" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Result = " << calc.add() << endl;
            break;
        case 2:
            cout << "Result = " << calc.subtract() << endl;
            break;
        case 3:
            cout << "Result = " << calc.multiply() << endl;
            break;
        case 4:
            cout << "Result = " << calc.divide() << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
