# Tasks - Friend Functions
**Prepared by:** Engr. M.Awais 13

## Task 1 — Basic Friend Function
Create a class `Box` having:
* Private data member `length`
* A constructor to initialize `length`
* Create a friend function `displayLength()` that accesses and displays the private member.

**Requirements:**
* Use `friend` keyword properly
* Call the friend function like a normal function
* Show output on screen

---

# Tasks - Friend Functions
**Prepared by:** Engr. M.Awais 14

## Task 2 — Mathematical Operation Using Friend Function
Create a class `Distance` with:
* `Feet`
* `Inches`

Create a friend function `addDistance()` that adds two distance objects and displays the result.

**Requirements:**
* Use objects as parameters
* Perform proper addition logic

---

# Tasks – Static Data Member
**Prepared by:** Engr. M.Awais 15

## Task 1 — Bank Account System
Create a class `BankAccount` containing:
* Account holder name
* Balance

Use a static variable to store:
* Total number of bank accounts

**Requirements:**
* Create multiple objects
* Display total accounts created

---

# Tasks – Static Member Function
**Prepared by:** Engr. M.Awais 16

## Task 1
Create a class `Employee` with:
* Employee ID
* Employee name

Use:
* Static variable for company name
* Static member function to display company information

**Requirements:**
* Access static function using class name
* Demonstrate shared company name

---

# Tasks – Pure Abstract Functions / Abstract Classes
**Prepared by:** Engr. M.Awais 17

## Task 1
Create a hospital system where different staff members perform different duties.

Create abstract class `HospitalStaff` with:
* Staff name
* Pure virtual function `performDuty()`

Derived classes:
* `Doctor`
* `Nurse`
* `Receptionist`