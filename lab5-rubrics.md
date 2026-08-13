# Task — Single Inheritance
**Prepared by:** Engr. M.Awais 17

* You are building a student information system. Create a `Person` class and a `Student` class that inherits from it.
* **Classes & Requirements:**
  * `Person`:
    * Attributes: `name`, `age`
    * Functions: `display_person_info()`
  * `Student` (inherits `Person`):
    * Additional Attribute: `student_id`
    * Additional Function: `display_student_info()`
* **Tasks for Students:**
  * Define both classes using single inheritance.
  * Accept input from the user for all fields.
  * Display complete student information using both functions.

---

# Task — Multilevel Inheritance
**Prepared by:** Engr. M.Awais 18

* You are designing a payroll system.
* **Classes & Requirements:**
  * `Person`:
    * Attributes: `name`, `age`
    * Function: `display_person()`
  * `Employee` (inherits `Person`):
    * Additional Attribute: `employee_id`
    * Additional Function: `display_employee()`
  * `Manager` (inherits `Employee`):
    * Additional Attribute: `department`
    * Function: `display_manager()`
* **Tasks for Students:**
  * Implement multilevel inheritance.
  * Accept input and display complete info using all display functions.

---

# Task — Hierarchical Inheritance
**Prepared by:** Engr. M.Awais 19

* In an organization, `Employee` is a base class. `Developer` and `Designer` inherit from it.
* **Classes & Requirements:**
  * `Employee`:
    * Attributes: `name`, `salary`
    * Function: `display_employee()`
  * `Developer` (inherits `Employee`):
    * Additional Attribute: `programming_language`
    * Additional Function: `display_developer()`
  * `Designer` (inherits `Employee`):
    * Additional Attribute: `design_tool`
    * Function: `display_designer()`
* **Tasks for Students:**
  * Implement hierarchical inheritance.
  * Create objects of both derived classes and display all information.

---

# Task — Multiple Inheritance
**Prepared by:** Engr. M.Awais 20

* Build a device that behaves as both a `Printer` and a `Scanner`.
* **Classes & Requirements:**
  * `Printer`:
    * Function: `print_document()`
  * `Scanner`:
    * Function: `scan_document()`
  * `Photocopier` (inherits from `Printer` and `Scanner`):
    * Function: `photocopy()` (calls both above functions)
* **Tasks for Students:**
  * Implement multiple inheritance.
  * Create an object of `Photocopier` and call all functions.

| **Criteria**                        | **Excellent (3)**                                                                                                                       | **Good (2)**                                                                             | **Need Improvement (1)**                                                             | **Poor (0)**                                                            |
| ----------------------------------- | --------------------------------------------------------------------------------------------------------------------------------------- | ---------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------ | ----------------------------------------------------------------------- |
| **Inheritance Implementation**      | All four inheritance types—single, multilevel, hierarchical, and multiple—are implemented correctly according to the requirements.      | Most inheritance types are implemented correctly with minor syntax or structural issues. | Some inheritance types are incomplete or incorrectly implemented.                    | Inheritance is not attempted or completely incorrect.                   |
| **Classes, Attributes & Functions** | All required classes, inherited attributes, additional attributes, and functions are correctly defined and used.                        | Classes and functions are mostly correct with minor omissions or errors.                 | Several attributes/functions are missing, incorrectly defined, or poorly structured. | Required classes, attributes, or functions are mostly missing.          |
| **Object Creation & Functionality** | Objects are created correctly and all required display/operation functions are called and work as intended.                             | Objects and functions mostly work with minor execution or calling errors.                | Objects or functions are partially implemented or do not work consistently.          | Objects are not created correctly or required functions are not called. |
| **Input, Output & Execution**       | Required user input is handled correctly, complete information is displayed clearly, and all programs compile and execute successfully. | Programs mostly execute correctly with minor input, output, or execution issues.         | Programs partially execute or output is incomplete/unclear.                          | Code does not run or required input/output is missing.                  |

### **Plagiarism Policy**
* **Copied Code Check:** If the student's code is found to be plagiarized or matching 100% with another student's code, a flat penalty of **3 marks** will be deducted from their total score.
