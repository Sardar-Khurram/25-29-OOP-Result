
# Lab 11 — Friend Functions & Static Members

## Task 1 — Basic Friend Function

**Prepared by:** Engr. M.Awais 13

Create a class `Box` having:

* Private data member `length`
* A constructor to initialize `length`
* A friend function `displayLength()` that accesses and displays the private member.

**Requirements:**

* Use the `friend` keyword properly.
* Call the friend function like a normal function.
* Display the output on screen.

---

## Task 2 — Mathematical Operation Using Friend Function

**Prepared by:** Engr. M.Awais 14

Create a class `Distance` with:

* `Feet`
* `Inches`

Create a friend function `addDistance()` that accepts two `Distance` objects, adds their values, and displays the resulting distance.

**Requirements:**

* Use objects as parameters.
* Implement proper distance addition logic.
* Display the resulting distance.

---

## Task 3 — Static Data Member: Bank Account System

**Prepared by:** Engr. M.Awais 15

Create a class `BankAccount` containing:

* Account holder name
* Balance

Use a static variable to store:

* Total number of bank accounts created.

**Requirements:**

* Create multiple `BankAccount` objects.
* Increment the static account counter whenever an account is created.
* Display the total number of accounts created.

---

## Task 4 — Static Member Function: Employee System

**Prepared by:** Engr. M.Awais 16

Create a class `Employee` with:

* Employee ID
* Employee name

Use:

* A static variable for the company name.
* A static member function to display company information.

**Requirements:**

* Access the static member function using the class name.
* Demonstrate that the company name is shared by all employees.


| **Criteria**                             | **Excellent (3)**                                                                                                                                                           | **Good (2)**                                                                            | **Need Improvement (1)**                                                              | **Poor (0)**                                                           |
| ---------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------- | ---------------------------------------------------------------------- |
| **Friend Function Implementation**       | Both friend-function tasks correctly use the `friend` keyword, access private members, accept required objects/parameters, and produce the required results.                | Friend functions are mostly correct with minor syntax, parameter, or access issues.     | One friend-function task is incomplete or several implementation issues exist.        | Friend functions are not implemented or are completely incorrect.      |
| **Static Data Member Implementation**    | `BankAccount` correctly uses a static variable to count all created accounts, creates multiple objects, increments the counter appropriately, and displays the total.       | Static counter is implemented with minor initialization, counting, or display issues.   | Static variable or account-counting logic is partially implemented or incorrect.      | Static data member is not implemented or does not function.            |
| **Static Member Function & Shared Data** | `Employee` correctly uses a static company name and static member function; the function is accessed using the class name and demonstrates shared company information.      | Static member function and shared company data mostly work with minor issues.           | Static function, shared data, or class-level access is partially implemented.         | Static member function/shared data is not implemented or is incorrect. |
| **Object Creation, Output & Execution**  | Required objects are created and all four tasks execute correctly; friend-function results, account count, company information, and required outputs are displayed clearly. | Programs mostly compile and execute correctly with minor output or object-usage issues. | Programs partially execute or required output/functionality is incomplete or unclear. | Code does not compile/run or required functionality/output is missing. |


---
