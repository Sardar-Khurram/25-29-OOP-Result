//Static Data Member and Static Member Function

//Task 1: Static Data Member (Bank Account System)

//#include <iostream>
//using namespace std;
//
//class BankAccount
//{
//private:
//    string holderName;
//    double balance;
//
//public:
//    // Static Data Member
//    static int totalAccounts;
//
//    // Constructor
//    BankAccount(string name, double bal)
//    {
//        holderName = name;
//        balance = bal;
//        totalAccounts++;
//    }
//
//    void display()
//    {
//        cout << "Name: " << holderName << endl;
//        cout << "Balance: " << balance << endl;
//    }
//};
//
//// Definition of Static Data Member
//int BankAccount::totalAccounts = 0;
//
//int main()
//{
//    BankAccount b1("Ali", 50000);
//    BankAccount b2("Ahmed", 30000);
//    BankAccount b3("Sara", 45000);
//
//    b1.display();
//    cout << endl;
//
//    b2.display();
//    cout << endl;
//
//    b3.display();
//    cout << endl;
//
//    cout << "Total Bank Accounts = " << BankAccount::totalAccounts << endl;
//
//    return 0;
//}


//Task 2: Static Member Function

//#include <iostream>
//using namespace std;
//
//class Employee
//{
//private:
//    int empID;
//    string empName;
//
//public:
//    // Static Variable
//    static string companyName;
//
//    // Constructor
//    Employee(int id, string name)
//    {
//        empID = id;
//        empName = name;
//    }
//
//    void display()
//    {
//        cout << "Employee ID: " << empID << endl;
//        cout << "Employee Name: " << empName << endl;
//    }
//
//    // Static Member Function
//    static void displayCompany()
//    {
//        cout << "Company Name: " << companyName << endl;
//    }
//};
//
//// Definition of Static Variable
//string Employee::companyName = "ABC Technologies";
//
//int main()
//{
//    Employee e1(101, "Ali");
//    Employee e2(102, "Sara");
//
//    e1.display();
//    cout << endl;
//
//    e2.display();
//    cout << endl;
//
//    // Calling Static Member Function
//    Employee::displayCompany();
//
//    return 0;
//}


//Pure Abstract Function
//Task 1: Hospital System (Abstract Class)

#include <iostream>
using namespace std;

// Abstract Base Class
class HospitalStaff
{
protected:
    string staffName;

public:
    HospitalStaff(string name)
    {
        staffName = name;
    }

    // Pure Virtual Function
    virtual void performDuty() = 0;
};

// Derived Class: Doctor
class Doctor : public HospitalStaff
{
public:
    Doctor(string name) : HospitalStaff(name) {}

    void performDuty() override
    {
        cout << staffName << " is diagnosing patients." << endl;
    }
};

// Derived Class: Nurse
class Nurse : public HospitalStaff
{
public:
    Nurse(string name) : HospitalStaff(name) {}

    void performDuty() override
    {
        cout << staffName << " is assisting patients." << endl;
    }
};

// Derived Class: Receptionist
class Receptionist : public HospitalStaff
{
public:
    Receptionist(string name) : HospitalStaff(name) {}

    void performDuty() override
    {
        cout << staffName << " is managing appointments." << endl;
    }
};

int main()
{
    HospitalStaff *staff;

    Doctor d("Doctor");
    Nurse n("Nurse");
    Receptionist r("Receptionist");

    staff = &d;
    staff->performDuty();

    staff = &n;
    staff->performDuty();

    staff = &r;
    staff->performDuty();

    return 0;
}

