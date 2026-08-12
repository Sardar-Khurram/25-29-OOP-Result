#include <iostream>
#include <string>
using namespace std;

// Define the Class Template
template <typename T>
class Pair {
private:
    T first;
    T second;

public:
    // Constructor to initialize values
    Pair(T f, T s) {
        first = f;
        second = s;
    }

    // Getter for the first value
    T getFirst() {
        return first;
    }

    // Getter for the second value
    T getSecond() {
        return second;
    }

    // Method to display both values
    void display() {
        cout << "First: " << first << " Second: " << second << endl;
    }
};

int main() {
    cout << "--- Pair ---" << endl;

    // Create a Pair of integers
    Pair<int> intPair(10, 20);
    cout << "Int Pair: ";
    intPair.display();

    // Create a Pair of doubles
    Pair<double> doublePair(3.14, 6.28);
    cout << "Double Pair: ";
    doublePair.display();

    // Create a Pair of strings
    Pair<string> stringPair("Hello", "World");
    cout << "String Pair: ";
    stringPair.display();

    return 0;
}
