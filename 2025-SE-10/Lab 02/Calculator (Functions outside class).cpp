#include <iostream>
using namespace std;
class Calculator {
public:
    float num1, num2;
    float add();
    float subtract();
    float multiply();
    float divide();
};
// Functions outside class
float Calculator::add() {
    return num1 + num2;
}
float Calculator::subtract() {
    return num1 - num2;
}
float Calculator::multiply() {
    return num1 * num2;
}
float Calculator::divide() {
    if (num2 != 0)
    return num1 / num2;
    else {
    cout << "Division by zero error!" << endl;
    return 0;
    }
}
int main() {
    Calculator c;
    int choice;
    cout << "Enter two numbers: ";
    cin >> c.num1 >> c.num2;
    cout << "\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cout << "Choose operation: ";
    cin >> choice;
    switch(choice) {
    case 1: cout << "Result: " << c.add(); break;
    case 2: cout << "Result: " << c.subtract(); break;
    case 3: cout << "Result: " << c.multiply(); break;
    case 4: cout << "Result: " << c.divide(); break;
    default: cout << "Invalid choice!";
    }
    return 0;
}
