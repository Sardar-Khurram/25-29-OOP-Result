
# Lab 12 — Pure Virtual Functions & Abstract Classes

## Task 1 — Hospital Staff Management System

**Prepared by:** Engr. M.Awais 17

Create a hospital system where different staff members perform different duties.

Create an abstract class `HospitalStaff` with:

* Staff name
* Pure virtual function `performDuty()`

Create the following derived classes:

* `Doctor`
* `Nurse`
* `Receptionist`

**Requirements:**

* Make `HospitalStaff` an abstract class using a pure virtual function.
* Override `performDuty()` in each derived class.
* Create objects of `Doctor`, `Nurse`, and `Receptionist`.
* Call `performDuty()` for each object and display their respective duties.

This separation gives **Lab 11 four closely related tasks** around friend functions and class-level/static concepts, while **Lab 12 cleanly introduces abstract classes and pure virtual functions** as a separate OOP topic.
