#include <iostream>
using namespace std;

class Calculator {
public:
	
    float num1;
     float num2 ;

    void input() {
        cout << "Enter first number: ";
           cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;
    }

    void add() {
      cout << "Addition = " << num1 + num2 << endl;
    }

       void subtract() {
          cout << "Subtraction = " << num1 - num2 << endl;
    }

    void multiply() {
cout << "Multiplication = " << num1 * num2 << endl;
    }

    void divide() {
    if (num2 != 0)
        cout << "Division = " << num1 / num2 << endl;
        else
            cout << "Error! Division by zero" << endl;
    }
    
};

int main() {
	
    Calculator c;
    int choice;

    c.input();

    cout << "\nChoose operation:\n";
    cout << "1. Add " <<endl ;
    cout << "2. Subtract" <<endl;
    cout << "3. Multiply" <<endl;
    cout << "4. Divide" <<endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1: c.add() ; break;
        case 2: c.subtract() ; break;
        case 3: c.multiply() ; break;
        case 4: c.divide() ; break;
        default: cout << "Invalid choice";
    }

    return 0;
}
