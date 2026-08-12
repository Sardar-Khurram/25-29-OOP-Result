//Destructor___Locker
#include <iostream>
using namespace std;
class Locker {
public:
    Locker() {
    cout << "Locker allocated to customer." << endl;
    }
    ~Locker() {
    cout << "Locker returned by customer." << endl;
    }
};
int main() {
    // Stack locker — destructor called automatically
    cout << "-- Stack Locker --" << endl;
    {
    Locker locker1;
    } // destructor called here
    // Heap locker — destructor called with delete
    cout << "-- Heap Locker --" << endl;
    Locker* locker2 = new Locker();
    delete locker2;
    return 0;
}
