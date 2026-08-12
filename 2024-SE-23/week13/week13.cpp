//Task 1: Function Template – printTwice()

//#include <iostream>
//#include <string>
//using namespace std;
//
//// Function Template
//template <class T>
//void printTwice(T val)
//{
//    cout << val << endl;
//    cout << val << endl;
//}
//
//int main()
//{
//    printTwice(10);          // int
//    printTwice(5.75);        // double
//    printTwice("Hello");     // string
//
//    return 0;
//}


//Task 2: Function Template – findMin()

//#include <iostream>
//using namespace std;
//
//// Function Template
//template <class T>
//T findMin(T a, T b)
//{
//    if (a < b)
//        return a;
//    else
//        return b;
//}
//
//int main()
//{
//    cout << "Minimum Integer: " << findMin(15, 25) << endl;
//
//    cout << "Minimum Double: " << findMin(8.6, 5.4) << endl;
//
//    cout << "Minimum Character: " << findMin('Z', 'A') << endl;
//
//    return 0;
//}


//Task 3: Class Template – Pair<T>

//#include <iostream>
//#include <string>
//using namespace std;
//
//// Class Template
//template <class T>
//class Pair
//{
//private:
//    T first, second;
//
//public:
//    // Constructor
//    Pair(T f, T s)
//    {
//        first = f;
//        second = s;
//    }
//
//    // Getter Functions
//    T getFirst()
//    {
//        return first;
//    }
//
//    T getSecond()
//    {
//        return second;
//    }
//
//    // Display Function
//    void display()
//    {
//        cout << "First: " << first
//             << " Second: " << second << endl;
//    }
//};
//
//int main()
//{
//    Pair<int> p1(10, 20);
//    Pair<double> p2(5.5, 8.8);
//    Pair<string> p3("Hello", "World");
//
//    p1.display();
//    p2.display();
//    p3.display();
//
//    return 0;
//}


//Task 4: Challenge – Class Template Calculator<T>

#include <iostream>
using namespace std;

// Class Template
template <class T>
class Calculator
{
private:
    T a, b;

public:
    // Constructor
    Calculator(T x, T y)
    {
        a = x;
        b = y;
    }

    T add()
    {
        return a + b;
    }

    T subtract()
    {
        return a - b;
    }

    T multiply()
    {
        return a * b;
    }
};

int main()
{
    Calculator<int> c1(20, 10);

    cout << "Integer Values:" << endl;
    cout << "Addition = " << c1.add() << endl;
    cout << "Subtraction = " << c1.subtract() << endl;
    cout << "Multiplication = " << c1.multiply() << endl;

    cout << endl;

    Calculator<double> c2(5.5, 2.0);

    cout << "Double Values:" << endl;
    cout << "Addition = " << c2.add() << endl;
    cout << "Subtraction = " << c2.subtract() << endl;
    cout << "Multiplication = " << c2.multiply() << endl;

    return 0;
}