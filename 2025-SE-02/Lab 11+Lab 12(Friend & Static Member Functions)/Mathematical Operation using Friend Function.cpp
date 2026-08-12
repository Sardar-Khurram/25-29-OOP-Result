#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    // Constructor to initialize feet and inches
    Distance(int f, int i) {
        feet = f;
        inches = i;
    }

    // Declaring the friend function that takes two objects as parameters
    friend void addDistance(Distance d1, Distance d2);
};

    // Defining the friend function to perform proper addition logic
    void addDistance(Distance d1, Distance d2) {
    // Add feet and inches separately
    int totalFeet = d1.feet + d2.feet;
    int totalInches = d1.inches + d2.inches;

    // Proper addition logic: If inches are 12 or more, convert them to feet
    if (totalInches >= 12) {
        totalFeet += totalInches / 12;
        totalInches = totalInches % 12;
    }

    // Display the final result
    cout << "Total Distance: " << totalFeet << " feet and " << totalInches << " inches." << endl;
}

int main() {
    // Create two distance objects
    Distance dist1(5, 9);  
    Distance dist2(3, 5);  

    // Call the friend function to add them and show the result
    addDistance(dist1, dist2);

    return 0;
}
