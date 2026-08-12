#include <iostream>
using namespace std;

// Define the Class Template
template <typename T>
class Calculator {
private:
    T a;
    T b;

public:
    // Constructor
    Calculator(T x, T y) {
        a = x;
        b = y;
    }

    // Addition method
    T add() {
        return a + b;
    }

    // Subtraction method
    T subtract() {
        return a - b;
    }

    // Multiplication method
    T multiply() {
        return a * b;
    }
};

int main() {
    // 1. Testing with int values
    cout << "--- Calculator with Integers (10 and 5) ---" << endl;
    Calculator<int> intCalc(10, 5);
    cout << "Addition: " << intCalc.add() << endl;
    cout << "Subtraction: " << intCalc.subtract() << endl;
    cout << "Multiplication: " << intCalc.multiply() << endl;

    // 2. Testing with double values
    cout << "\n--- Calculator with Doubles (6.5 and 2.0) ---" << endl;
    Calculator<double> doubleCalc(6.5, 2.0);
    cout << "Addition: " << doubleCalc.add() << endl;
    cout << "Subtraction: " << doubleCalc.subtract() << endl;
    cout << "Multiplication: " << doubleCalc.multiply() << endl;

    return 0;
}
