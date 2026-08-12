#include <iostream>
using namespace std;
class Temperature {
public:
    float celsius;
    float convertToFahrenheit();
    void display();
};
float Temperature::convertToFahrenheit() {
    return (celsius * 9 / 5) + 32;
}
void Temperature::display() {
    cout << "Fahrenheit: " << convertToFahrenheit() << endl;
}
int main() {
    Temperature t;
    cout << "Enter temperature in Celsius: ";
    cin >> t.celsius;
    t.display();
    return 0;
}
