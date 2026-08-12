#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    // Constructor to initialize the values
    Distance(int f = 0, int i = 0) {
        feet = f;
        inches = i;
    }

    // Overloading the == operator using a member function
    bool operator==(const Distance& d) {
        // Convert both distances to total inches for an accurate comparison
        int totalInches1 = (this->feet * 12) + this->inches;
        int totalInches2 = (d.feet * 12) + d.inches;
        
        return totalInches1 == totalInches2;
    }
    
    // Helper function to show the distance nicely
    void display() {
        cout << feet << " feet, " << inches << " inches";
    }
};

int main() {
    // Create two Distance objects
    Distance d1(5, 8);  // 5 feet 8 inches
    Distance d2(5, 8);  // 5 feet 8 inches
    Distance d3(6, 2);  // 6 feet 2 inches

    // Compare d1 and d2
    cout << "Comparing d1 and d2: " << endl;
    if (d1 == d2) {
        cout << "The distances are EQUAL." << endl;
    } else {
        cout << "The distances are NOT EQUAL." << endl;
    }

    cout << "\nComparing d1 and d3: " << endl;
    // Compare d1 and d3
    if (d1 == d3) {
        cout << "The distances are EQUAL." << endl;
    } else {
        cout << "The distances are NOT EQUAL." << endl;
    }

    return 0;
}
