#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    double balance;

public:
    // 1. Declare the static variable inside the class
    static int totalAccounts;

    // Constructor
    BankAccount(string name, double bal) {
        accountHolderName = name;
        balance = bal;
        
        // Increment the total count whenever a new account is created
        totalAccounts++; 
    }
};

// 2. Define and initialize the static variable outside the class
int BankAccount::totalAccounts = 0;

int main() {
    // Create multiple bank account objects
    BankAccount acc1("Adan", 15000);
    BankAccount acc2("Aimen", 25000);
    BankAccount acc3("Ahsan", 50000);

    // Display total accounts created 
    cout << "Total number of bank accounts created: " << BankAccount::totalAccounts << endl;

    return 0;
}
