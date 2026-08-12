# Task 1: Default Constructor — Employee Management System
**Prepared by:** Engr. M.Awais 13

Create a class named `Employee` for a basic employee management system.  
The class should have the following private data members:
* `id` (`int`)
* `name` (`string`)
* `salary` (`float`)

Implement a default constructor that initializes:
* `id = 0`
* `name = "Not Assigned"`
* `salary = 0.0`

Also include:
* A `displayDetails()` method that shows employee details.
* A `main()` function that creates an object using the default constructor and displays its information.

**Objective:** Simulate how a new employee might be stored in the system before their details are updated.

---

# Task 2: Parameterized Constructor — Bank Account Initialization
**Prepared by:** Engr. M.Awais 14

Create a class named `BankAccount` that manages account information. It should have the following private data members:
* `accountNumber` (`string`)
* `accountHolder` (`string`)
* `balance` (`double`)

Implement a parameterized constructor to initialize all three values when a new account is created:
* `accountNumber` - PK0309800780100
* `accountHolder` - Muhammad Awais
* `balance` - 10000

Also include:
* A method `showAccountDetails()` to display the account information.
* In `main()`, create an object of `BankAccount` using user-defined values and display the account details.

**Objective:** Demonstrate how real banking systems initialize customer data upon account creation.

---

# Task 3: Constructor Overloading
**Prepared by:** Engr. M.Awais 15

Create a class named `Rectangle` with the following private data members:
* `length` (`float`)
* `width` (`float`)

Overload the constructor as follows:
* A default constructor that initializes both `length` and `width` to 1.0.
* A parameterized constructor that takes two float values to initialize `length` and `width`.
* A single-parameter constructor that sets both `length` and `width` to the same value (creating a square).

Also include:
* A method `area()` to return the area of the rectangle and a `display()` method.
* In `main()`, create three objects using all constructor versions and display their dimensions and area.

**Objective:** Demonstrate how a various version of the constructors can be created using overloading.

---

# Task 4: Destructor
**Prepared by:** Engr. M.Awais 20

Create a class called `Locker` that represents a bank locker.
* The constructor should print:  
  `"Locker allocated to customer."`
* The destructor should print:  
  `"Locker returned by customer."`

Inside your `main()` function:
* Create one locker object inside a block `{ }` to observe automatic destructor call.
* Create another locker using `new` and release it using `delete`.

**Objective:**
* Understand when destructors are called.
* Practice creating objects on stack and heap.
* Learn the importance of managing memory and cleanup.
