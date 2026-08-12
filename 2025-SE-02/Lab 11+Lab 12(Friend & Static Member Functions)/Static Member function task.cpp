#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int employeeID;
    string employeeName;

public:
    // Static variable shared by all employees
    static string companyName;

    // Constructor
    Employee(int id, string name) {
        employeeID = id;
        employeeName = name;
    }

    // Static member function to display company info
    static void displayCompanyInfo() {
        // Static functions can only access static data members
        cout << "Company Name: " << companyName << endl;
    }

    // Normal function to show individual employee details
    void displayEmployee() {
        cout << "ID: " << employeeID << " | Name: " << employeeName << " | Company: " << companyName << endl;
    }
};

// Define and initialize the static company name outside the class
string Employee::companyName = "10Pearls";

int main() {
    // Requirement: Access static function using the class name directly
    cout << "--- Accessing Static Function via Class Name ---" << endl;
    Employee::displayCompanyInfo();
    cout << "-----------------------------------------------" << endl;

    // Create employee objects to demonstrate the shared company name
    Employee emp1(101, "Wajeeha");
    Employee emp2(102, "Adeeba");

    cout << "\n--- Individual Employee Details ---" << endl;
    emp1.displayEmployee();
    emp2.displayEmployee();

    return 0;
}
