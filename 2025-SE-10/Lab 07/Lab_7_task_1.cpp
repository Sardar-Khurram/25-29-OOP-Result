//Composition task(Calculator with display)
#include <iostream>
using namespace std;
// Display class — owned by Calculator (Composition)
class Display {
private:
    double lastValue;

public:
    Display() {
    lastValue = 0.0;
    }
    void show(double value) {
    lastValue = value;
    cout << "Result: " << lastValue << endl;
    }
    double getLastValue() const {
    return lastValue;
    }
    void showPreviousResult() const {
    cout << "Previous result: " << lastValue << endl;
    }
};
// Calculator class — OWNS a Display object (Composition)
class Calculator {
private:
    Display screen; // Display is part of Calculator's internal structure
public:
    Calculator() {}
    void add(double a, double b) {
    double result = a + b;
    screen.show(result);
    }
    void multiply(double a, double b) {
    double result = a * b;
    screen.show(result);
    }
    void showPreviousResult() const {
    screen.showPreviousResult();
    }
    double getLastResult() const {
    return screen.getLastValue();
    }
};
int main() {
    Calculator calc;
    cout << "Addition (10 + 5): ";
    calc.add(10, 5);
    cout << "Multiplication (4 * 6): ";
    calc.multiply(4, 6);
    calc.showPreviousResult();
    return 0;
}
