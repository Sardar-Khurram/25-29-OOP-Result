//Online Shopping System
#include <iostream>
using namespace std;
class Product {
protected:
    string name;
    double price;
public:
    Product(string n, double p) {
    name = n;
    price = p;
    cout << "Product constructor called" << endl;
    }
    void display() {
    cout << "Product Name: " << name << endl;
    cout << "Price: " << price << endl;
    }
};
class Electronics : public Product {
private:
    int warrantyYears;
public:
    Electronics(string n, double p, int w) : Product(n, p) {
    warrantyYears = w;
    cout << "Electronics constructor called" << endl;
    }
    void display() {
    Product::display();
    cout << "Warranty: " << warrantyYears << " years" << endl;
    }
};
int main() {
    Electronics e("Laptop", 85000, 2);
    e.display();
    return 0;
}
