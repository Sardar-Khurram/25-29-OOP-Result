#include <iostream>
using namespace std;
class Employee {
protected:
    string name;
    float salary;
public:
    void input_employee() {
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter salary: ";
    cin >> salary;
    }
    void display_employee() {
    cout << "Name: " << name << endl;
    cout << "Salary: " << salary << endl;
    }
};
class Developer : public Employee {
    string programming_language;
public:
    void input_developer() {
    input_employee();
    cout << "Enter Programming Language: ";
    cin >> programming_language;
    }
    void display_developer() {
    display_employee();
    cout << "Programming Language: " << programming_language << endl;
    }
};
class Designer : public Employee {
    string design_tool;
public:
    void input_designer() {
    input_employee();
    cout << "Enter Design Tool: ";
    cin >> design_tool;
    }
    void display_designer() {
    display_employee();
    cout << "Design Tool: " << design_tool << endl;
    }
};
int main() {
    Developer d;
    Designer ds;
    cout << "\n--- Developer Details ---\n";
    d.input_developer();
    d.display_developer();
    cout << "\n--- Designer Details ---\n";
    ds.input_designer();
    ds.display_designer();
    return 0;
}
