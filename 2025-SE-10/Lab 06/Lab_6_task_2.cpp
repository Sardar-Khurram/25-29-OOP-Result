//Ride Booking System(Multilevel Inheritance)
#include <iostream>
using namespace std;
class Vehicle {
protected:
    string brand;
public:
    Vehicle(string b) {
    brand = b;
    cout << "Vehicle constructor called: " << brand << endl;
    }
};
class Car : public Vehicle {
protected:
    int seats;
public:
    Car(string b, int s) : Vehicle(b) {
    seats = s;
    cout << "Car constructor called, Seats: " << seats << endl;
    }
};
class ElectricCar : public Car {
private:
    int batteryRange;
public:
    ElectricCar(string b, int s, int r) : Car(b, s) {
    batteryRange = r;
    cout << "ElectricCar constructor called, Range: "
    << batteryRange << " km" << endl;
    }
    void display() {
    cout << "\n--- Electric Car Info ---" << endl;
    cout << "Brand: " << brand << endl;
    cout << "Seats: " << seats << endl;
    cout << "Battery Range: " << batteryRange << " km" << endl;
    }
};
int main() {
    ElectricCar ec("Tesla", 5, 500);
    ec.display();
    return 0;
}
