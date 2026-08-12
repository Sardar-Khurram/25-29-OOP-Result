//Aggregation task(Students sharing a Calculator)
#include <iostream>
using namespace std;
// Shared Calculator class (NOT owned by any student)
class Calculator {
public:
    double add(double a, double b) {
    return a + b;
    }
    double multiply(double a, double b) {
    return a * b;
    }
};
// Student class — uses Calculator via pointer (Aggregation)
class Student {
private:
    string name;
    Calculator* calc; // Just a reference, NOT owned by Student
public:
    Student(string n, Calculator* c) {
    name = n;
    calc = c;
    }
    void doAddition(double a, double b) {
    double result = calc->add(a, b);
    cout << name << " | Addition (" << a << " + " << b
    << ") = " << result << endl;
    }
    void doMultiplication(double a, double b) {
    double result = calc->multiply(a, b);
    cout << name << " | Multiplication (" << a << " x " << b
    << ") = " << result << endl;
    }
};
int main() {
// Calculator created externally (by teacher/system)
    Calculator sharedCalc;
    // All students share the same calculator
    Student s1("Ali",   &sharedCalc);
    Student s2("Sara",  &sharedCalc);
    Student s3("Ahmed", &sharedCalc);
    s1.doAddition(10, 20);
    s2.doMultiplication(5, 6);
    s3.doAddition(100, 200);
    s1.doMultiplication(3, 7);
    return 0;
}
