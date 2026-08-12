// TASK 1:  Default Constructor — Employee Management System
//
//#include <iostream>
//using namespace std;
//
//class Employee
//{
//private:
//    int id;
//    string name;
//    float salary;
//
//public:
//    // Default Constructor
//    Employee()
//    {
//        id = 0;
//        name = "Not Assigned";
//        salary = 0.0;
//    }
//
//    // Display Function
//    void displayDetails()
//    {
//        cout << "Employee Details" << endl;
//        cout << "----------------" << endl;
//        cout << "ID: " << id << endl;
//        cout << "Name: " << name << endl;
//        cout << "Salary: " << salary << endl;
//    }
//};
//
//int main()
//{
//    // Object created using default constructor
//    Employee emp;
//
//    // Display employee information
//    emp.displayDetails();
//
//    return 0;
//}


// Task 2: Parameterized Constructor — Bank Account Initialization

//#include <iostream>
//using namespace std;
//
//class BankAccount
//{
//private:
//    string accountNumber;
//    string accountHolder;
//    double balance;
//
//public:
//    // Parameterized Constructor
//    BankAccount(string accNo, string holder, double bal)
//    {
//        accountNumber = accNo;
//        accountHolder = holder;
//        balance = bal;
//    }
//
//    // Display Function
//    void showAccountDetails()
//    {
//        cout << "\nBank Account Details" << endl;
//        cout << "--------------------" << endl;
//        cout << "Account Number : " << accountNumber << endl;
//        cout << "Account Holder : " << accountHolder << endl;
//        cout << "Balance        : " << balance << endl;
//    }
//};
//
//int main()
//{
//    string accNo, holder;
//    double bal;
//
//    cout << "Enter Account Number: ";
//    cin >> accNo;
//
//    cin.ignore();
//
//    cout << "Enter Account Holder Name: ";
//    getline(cin, holder);
//
//    cout << "Enter Balance: ";
//    cin >> bal;
//
//    // Object created using parameterized constructor
//    BankAccount account(accNo, holder, bal);
//
//    // Display account information
//    account.showAccountDetails();
//
//    return 0;
//}


// Task 3: Constructor Overloading — Rectangle

//#include <iostream>
//using namespace std;
//
//class Rectangle
//{
//private:
//    float length;
//    float width;
//
//public:
//    // Default Constructor
//    Rectangle()
//    {
//        length = 1.0;
//        width = 1.0;
//    }
//
//    // Parameterized Constructor
//    Rectangle(float l, float w)
//    {
//        length = l;
//        width = w;
//    }
//
//    // Single Parameter Constructor
//    Rectangle(float side)
//    {
//        length = side;
//        width = side;
//    }
//
//    // Function to calculate area
//    float area()
//    {
//        return length * width;
//    }
//
//    // Display Function
//    void display()
//    {
//        cout << "Length = " << length << endl;
//        cout << "Width  = " << width << endl;
//        cout << "Area   = " << area() << endl;
//        cout << "------------------------" << endl;
//    }
//};
//
//int main()
//{
//    // Object using default constructor
//    Rectangle r1;
//
//    // Object using parameterized constructor
//    Rectangle r2(10, 5);
//
//    // Object using single parameter constructor
//    Rectangle r3(7);
//
//    cout << "R1 (Default Constructor)" << endl;
//    r1.display();
//
//    cout << "R2 (Parameterized Constructor)" << endl;
//    r2.display();
//
//    cout << "R3 (Single Parameter Constructor)" << endl;
//    r3.display();
//
//    return 0;
//}


// Task 4: Destructor — Locker

//#include <iostream>
//using namespace std;
//
//class Locker
//{
//public:
//    // Constructor
//    Locker()
//    {
//        cout << "Locker allocated to customer." << endl;
//    }
//
//    // Destructor
//    ~Locker()
//    {
//        cout << "Locker returned by customer." << endl;
//    }
//};
//
//int main()
//{
//    cout << "Creating locker inside block..." << endl;
//
//    {
//        Locker locker1;   // Constructor called
//    }                     // Destructor called automatically
//
//    cout << "\nCreating locker using new..." << endl;
//
//    Locker *locker2 = new Locker();   // Constructor called
//
//    delete locker2;   // Destructor called manually
//
//    return 0;
//}

