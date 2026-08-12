#include <iostream>
using namespace std;

// 1. Define the function template (returns a value of type T)
template <typename T>
T findMin(T a, T b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    cout << "--- FindMin() ---" << endl;

    // Integers
    int intMin = findMin(15, 8);
    cout << "Integers:\nMinimum of 15 and 8 is: " << intMin << endl;

    // Doubles
    double doubleMin = findMin(4.25, 9.81);
    cout << "Doubles:\nMinimum of 4.25 and 9.81 is: " << doubleMin << endl;

    // Characters
    char charMin = findMin('z', 'm');
    cout << "Characters:\nMinimum of 'z' and 'm' is: '" << charMin << "'" << endl;

    return 0;
}
