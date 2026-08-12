//Task 1: Single Inheritance

//#include <iostream>
//#include <string>
//using namespace std;
//
//// Base Class
//class Person
//{
//protected:
//    string name;
//    int age;
//
//public:
//    void input_person()
//    {
//        cout << "Enter Name: ";
//        cin.ignore();
//        getline(cin, name);
//
//        cout << "Enter Age: ";
//        cin >> age;
//    }
//
//    void display_person_info()
//    {
//        cout << "\n--- Person Information ---" << endl;
//        cout << "Name : " << name << endl;
//        cout << "Age  : " << age << endl;
//    }
//};
//
//// Derived Class
//class Student : public Person
//{
//private:
//    string student_id;
//
//public:
//    void input_student()
//    {
//        input_person();
//
//        cout << "Enter Student ID: ";
//        cin >> student_id;
//    }
//
//    void display_student_info()
//    {
//        display_person_info();
//
//        cout << "Student ID : " << student_id << endl;
//    }
//};
//
//int main()
//{
//    Student s;
//
//    s.input_student();
//
//    cout << "\n===== Student Record =====";
//    s.display_student_info();
//
//    return 0;
//}


//Task 2: Multilevel Inheritance

//#include <iostream>
//#include <string>
//using namespace std;
//
//// Base Class
//class Person
//{
//protected:
//    string name;
//    int age;
//
//public:
//    void input_person()
//    {
//        cout << "Enter Name: ";
//        cin.ignore();
//        getline(cin, name);
//
//        cout << "Enter Age: ";
//        cin >> age;
//    }
//
//    void display_person()
//    {
//        cout << "\n--- Person Information ---" << endl;
//        cout << "Name : " << name << endl;
//        cout << "Age  : " << age << endl;
//    }
//};
//
//// Derived Class
//class Employee : public Person
//{
//protected:
//    string employee_id;
//
//public:
//    void input_employee()
//    {
//        input_person();
//
//        cout << "Enter Employee ID: ";
//        cin >> employee_id;
//    }
//
//    void display_employee()
//    {
//        display_person();
//
//        cout << "Employee ID : " << employee_id << endl;
//    }
//};
//
//// Derived from Employee
//class Manager : public Employee
//{
//private:
//    string department;
//
//public:
//    void input_manager()
//    {
//        input_employee();
//
//        cin.ignore();
//        cout << "Enter Department: ";
//        getline(cin, department);
//    }
//
//    void display_manager()
//    {
//        display_employee();
//
//        cout << "Department : " << department << endl;
//    }
//};
//
//int main()
//{
//    Manager m;
//
//    m.input_manager();
//
//    cout << "\n===== Manager Record =====";
//    m.display_manager();
//
//    return 0;
//}


//Task 3: Hierarchical Inheritance

//#include <iostream>
//#include <string>
//using namespace std;
//
//// Base Class
//class Employee
//{
//protected:
//    string name;
//    float salary;
//
//public:
//    void input_employee()
//    {
//        cout << "Enter Employee Name: ";
//        cin.ignore();
//        getline(cin, name);
//
//        cout << "Enter Salary: ";
//        cin >> salary;
//    }
//
//    void display_employee()
//    {
//        cout << "\nEmployee Name : " << name << endl;
//        cout << "Salary        : " << salary << endl;
//    }
//};
//
//// Derived Class 1
//class Developer : public Employee
//{
//private:
//    string programming_language;
//
//public:
//    void input_developer()
//    {
//        input_employee();
//
//        cin.ignore();
//        cout << "Enter Programming Language: ";
//        getline(cin, programming_language);
//    }
//
//    void display_developer()
//    {
//        display_employee();
//        cout << "Programming Language : " << programming_language << endl;
//    }
//};
//
//// Derived Class 2
//class Designer : public Employee
//{
//private:
//    string design_tool;
//
//public:
//    void input_designer()
//    {
//        input_employee();
//
//        cin.ignore();
//        cout << "Enter Design Tool: ";
//        getline(cin, design_tool);
//    }
//
//    void display_designer()
//    {
//        display_employee();
//        cout << "Design Tool : " << design_tool << endl;
//    }
//};
//
//int main()
//{
//    Developer d;
//    Designer ds;
//
//    cout << "===== Developer Information =====\n";
//    d.input_developer();
//
//    cout << "\n===== Designer Information =====\n";
//    ds.input_designer();
//
//    cout << "\n===== Developer Record =====";
//    d.display_developer();
//
//    cout << "\n\n===== Designer Record =====";
//    ds.display_designer();
//
//    return 0;
//}


//Task 4: Multiple Inheritance

#include <iostream>
using namespace std;

// Base Class 1
class Printer
{
public:
    void print_document()
    {
        cout << "Printing Document..." << endl;
    }
};

// Base Class 2
class Scanner
{
public:
    void scan_document()
    {
        cout << "Scanning Document..." << endl;
    }
};

// Derived Class
class Photocopier : public Printer, public Scanner
{
public:
    void photocopy()
    {
        print_document();
        scan_document();
        cout << "Photocopy Completed Successfully." << endl;
    }
};

int main()
{
    Photocopier p;

    cout << "===== Photocopier =====" << endl;

    p.print_document();
    p.scan_document();
    p.photocopy();

    return 0;
}