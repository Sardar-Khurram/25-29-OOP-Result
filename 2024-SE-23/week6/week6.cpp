//Task 1: Online Shopping System (Constructor Chaining)

//#include <iostream>
//#include <string>
//using namespace std;
//
//// Base Class
//class Product
//{
//protected:
//    string name;
//    float price;
//
//public:
//    Product(string n, float p)
//    {
//        name = n;
//        price = p;
//    }
//
//    void displayProduct()
//    {
//        cout << "Product Name : " << name << endl;
//        cout << "Price        : " << price << endl;
//    }
//};
//
//// Derived Class
//class Electronics : public Product
//{
//private:
//    int warrantyYears;
//
//public:
//    Electronics(string n, float p, int w) : Product(n, p)
//    {
//        warrantyYears = w;
//    }
//
//    void displayElectronics()
//    {
//        displayProduct();
//        cout << "Warranty     : " << warrantyYears << " Years" << endl;
//    }
//};
//
//int main()
//{
//    string name;
//    float price;
//    int warranty;
//
//    cout << "Enter Product Name: ";
//    getline(cin, name);
//
//    cout << "Enter Price: ";
//    cin >> price;
//
//    cout << "Enter Warranty Years: ";
//    cin >> warranty;
//
//    Electronics e(name, price, warranty);
//
//    cout << "\nProduct Details\n";
//    e.displayElectronics();
//
//    return 0;
//}


//Task 2: Ride Booking System (Constructor - Multilevel)

//#include <iostream>
//using namespace std;
//
//class Vehicle
//{
//public:
//    Vehicle()
//    {
//        cout << "Vehicle Constructor Called" << endl;
//    }
//};
//
//class Car : public Vehicle
//{
//public:
//    Car()
//    {
//        cout << "Car Constructor Called" << endl;
//    }
//};
//
//class ElectricCar : public Car
//{
//public:
//    ElectricCar()
//    {
//        cout << "ElectricCar Constructor Called" << endl;
//    }
//};
//
//int main()
//{
//    ElectricCar e;
//    return 0;
//}


//Task 3: File Handling System (Destructor)

//#include <iostream>
//using namespace std;
//
//class File
//{
//public:
//    File()
//    {
//        cout << "File Opened" << endl;
//    }
//
//    ~File()
//    {
//        cout << "File Closed" << endl;
//    }
//};
//
//class TextFile : public File
//{
//public:
//    TextFile()
//    {
//        cout << "Text File Opened" << endl;
//    }
//
//    ~TextFile()
//    {
//        cout << "Text File Closed" << endl;
//    }
//};
//
//int main()
//{
//    TextFile t;
//    return 0;
//}


//Task 4: Device and Sensor System (Destructor with Dynamic Memory)

#include <iostream>
#include <string>
using namespace std;

class Device
{
protected:
    string deviceName;
    int *deviceID;

public:
    Device(string name, int id)
    {
        deviceName = name;
        deviceID = new int(id);

        cout << "Device Constructor Called" << endl;
    }

    virtual ~Device()
    {
        delete deviceID;
        cout << "Device Destructor Called" << endl;
    }
};

class Sensor : public Device
{
private:
    string sensorType;
    float *sensorValue;

public:
    Sensor(string name, int id, string type, float value)
        : Device(name, id)
    {
        sensorType = type;
        sensorValue = new float(value);

        cout << "Sensor Constructor Called" << endl;
    }

    void display()
    {
        cout << "\nDevice Name : " << deviceName << endl;
        cout << "Device ID   : " << *deviceID << endl;
        cout << "Sensor Type : " << sensorType << endl;
        cout << "Value       : " << *sensorValue << endl;
    }

    ~Sensor()
    {
        delete sensorValue;
        cout << "Sensor Destructor Called" << endl;
    }
};

int main()
{
    Sensor *s = new Sensor("Temperature Sensor", 101, "Heat", 36.5);

    s->display();

    delete s;

    return 0;
}