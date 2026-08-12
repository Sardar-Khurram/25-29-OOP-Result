#include <iostream>
#include <string>
using namespace std;

// Base Abstract Class
class HospitalStaff {
protected:
    string staffName;

public:
    // Constructor to initialize staff name
    HospitalStaff(string name) {
        staffName = name;
    }

    // Pure virtual function (makes the class abstract)
    virtual void performDuty() = 0; 
    
    // Virtual destructor
    virtual ~HospitalStaff() {}
};

// Derived Class 1: Doctor
class Doctor : public HospitalStaff {
public:
    Doctor(string name) : HospitalStaff(name) {}

    // Implementing the pure virtual function
    void performDuty() override {
        cout << "Doctor is diagnosing patients." << endl;
    }
};

// Derived Class 2: Nurse
class Nurse : public HospitalStaff {
public:
    Nurse(string name) : HospitalStaff(name) {}

    // Implementing the pure virtual function
    void performDuty() override {
        cout << "Nurse is assisting patients." << endl;
    }
};

// Derived Class 3: Receptionist
class Receptionist : public HospitalStaff {
public:
    Receptionist(string name) : HospitalStaff(name) {}

    // Implementing the pure virtual function
    void performDuty() override {
        cout << "Receptionist is managing appointments." << endl;
    }
};

int main() {
    // Create objects of the derived classes
    Doctor doc("Dr. Mahnoor");
    Nurse nur("Sister Sarah");
    Receptionist rec("Ahmed");

    cout << "--- Hospital Staff Duties ---" << endl;
    
    // Call performDuty for each staff member
    doc.performDuty();
    nur.performDuty();
    rec.performDuty();

    return 0;
}
