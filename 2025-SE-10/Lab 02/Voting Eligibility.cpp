#include <iostream>
using namespace std;
class Voter {
public:
    string name;
    int age;
    bool isEligible();
};

// Function outside class
bool Voter::isEligible() {
    return age > 18;
}
int main() {
    Voter v;
    cout << "Enter name: ";
    cin >> v.name;
    cout << "Enter age: ";
    cin >> v.age;
    if (v.isEligible())
    cout << "Eligible for voting" << endl;
    else
    cout << "Not eligible for voting" << endl;
    return 0;
}
