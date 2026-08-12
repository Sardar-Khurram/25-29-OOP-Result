#include <iostream>
using namespace std;
class Person {
public:
    string name;
    int age;
public:
    void input_person() {
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    }
    void display_person() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    }
};
class Employee : public Person {
public:
    int employee_id;
public:
    void input_employee() {
    input_person();
    cout << "Enter Employee ID: ";
    cin >> employee_id;
    }
    void display_employee() {
    display_person();
    cout << "Employee ID: " << employee_id << endl;
    }
};
class Manager : public Employee {
    string department;
public:
    void input_manager() {
    input_employee();
    cout << "Enter Department: ";
    cin >> department;
    }
    void display_manager() {
    display_employee();
    cout << "Department: " << department << endl;
    }
};
int main() {
    Manager m;
    cout << "\n--- Multilevel Inheritance ---\n";
    m.input_manager();
    cout << "\nManager Details:\n";
    m.display_manager();
    return 0;
}
