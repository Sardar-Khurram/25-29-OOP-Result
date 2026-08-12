//Task 1: Composition

//#include <iostream>
//using namespace std;
//
//// Display Class
//class Display
//{
//private:
//    int lastResult;
//
//public:
//    Display()
//    {
//        lastResult = 0;
//    }
//
//    void showResult(int result)
//    {
//        lastResult = result;
//        cout << "Result = " << lastResult << endl;
//    }
//
//    void showLastResult()
//    {
//        cout << "Last Result = " << lastResult << endl;
//    }
//};
//
//// Calculator Class (Composition)
//class Calculator
//{
//private:
//    Display display;   // Calculator owns Display object
//
//public:
//    int add(int a, int b)
//    {
//        int result = a + b;
//        display.showResult(result);
//        return result;
//    }
//
//    int multiply(int a, int b)
//    {
//        int result = a * b;
//        display.showResult(result);
//        return result;
//    }
//
//    void showLast()
//    {
//        display.showLastResult();
//    }
//};
//
//int main()
//{
//    Calculator c;
//
//    c.add(10, 20);
//    c.multiply(5, 6);
//    c.showLast();
//
//    return 0;
//}

//Task 2: Aggregation

#include <iostream>
#include <string>
using namespace std;

// Calculator Class
class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int multiply(int a, int b)
    {
        return a * b;
    }
};

// Student Class
class Student
{
private:
    string name;
    Calculator *calculator;   // Aggregation

public:
    Student(string n, Calculator *c)
    {
        name = n;
        calculator = c;
    }

    void performAddition(int a, int b)
    {
        cout << name << " Addition Result = "
             << calculator->add(a, b) << endl;
    }

    void performMultiplication(int a, int b)
    {
        cout << name << " Multiplication Result = "
             << calculator->multiply(a, b) << endl;
    }
};

int main()
{
    Calculator sharedCalculator;

    Student s1("Ali", &sharedCalculator);
    Student s2("Sara", &sharedCalculator);

    s1.performAddition(10, 20);
    s2.performMultiplication(5, 6);

    return 0;
}