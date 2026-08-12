#include <iostream>
using namespace std;
#include "Voter.h"
int main() {
    string name;
    int age;

    cout << "Enter voter name: ";
    cin>>name;

    cout << "Enter voter age: ";
    cin >> age;

    // Create object
    Voter v1(name, age);

    // Check eligibility
    if (v1.isEligible()) {
        cout << v1.getName() << " is eligible to vote." << endl;
    } else {
        cout << v1.getName() << " is NOT eligible to vote." << endl;
    }

    return 0;
}
