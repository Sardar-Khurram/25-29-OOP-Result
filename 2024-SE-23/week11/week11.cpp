
//Friend Function tasks
// Task 1: Basic Friend Function

//#include <iostream>
//using namespace std;
//
//class Box
//{
//private:
//    int length;
//
//public:
//    // Constructor
//    Box(int l)
//    {
//        length = l;
//    }
//
//    // Friend Function Declaration
//    friend void displayLength(Box);
//};
//
//// Friend Function Definition
//void displayLength(Box b)
//{
//    cout << "Length = " << b.length << endl;
//}
//
//int main()
//{
//    Box b1(25);
//
//    // Calling Friend Function
//    displayLength(b1);
//
//    return 0;
//}


//Task 2: Mathematical Operation Using Friend Function

#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    int inches;

public:
    // Constructor
    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }

    // Friend Function Declaration
    friend void addDistance(Distance, Distance);
};

// Friend Function Definition
void addDistance(Distance d1, Distance d2)
{
    int totalFeet = d1.feet + d2.feet;
    int totalInches = d1.inches + d2.inches;

    // Convert inches to feet if inches >= 12
    if (totalInches >= 12)
    {
        totalFeet += totalInches / 12;
        totalInches = totalInches % 12;
    }

    cout << "Total Distance = "
         << totalFeet << " feet "
         << totalInches << " inches" << endl;
}

int main()
{
    Distance d1(5, 8);
    Distance d2(4, 7);

    addDistance(d1, d2);

    return 0;
}
