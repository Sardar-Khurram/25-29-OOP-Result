# Object-Oriented Programming — Consolidated Evaluation Report

**Student Name:** Adeeba Mansoor Qureshi  
**Roll Number:** `2025-SE-12`  
**Total Maximum Marks:** 210  
**Total Obtained Marks:** 157 / 210 (74.76%)  
**Total Excluding Plagiarism:** 157 / 210 (74.76%)  

---

### 📊 **Student Grand Total Result Table**

| Lab Number | Total Marks | Obtained Marks | Excluding Plagarism | Status / Notes |
| :--- | :---: | :---: | :---: | :--- |
| Lab  1 | 12 | 12 | 12 | Submitted |
| Lab  2 | 12 | 11 | 11 | Submitted |
| Lab  3 | 18 | 17 | 17 | Submitted |
| Lab  4 | 12 | 9 | 9 | Submitted |
| Lab  5 | 12 | 12 | 12 | Submitted |
| Lab  6 | 12 | 12 | 12 | Submitted |
| Lab  7 | 12 | 12 | 12 | Submitted |
| Lab  8 | 12 | 12 | 12 | Submitted |
| Lab  9 | 12 | 12 | 12 | Submitted |
| Lab 10 | 12 | 12 | 12 | Submitted |
| Lab 11 | 12 | 12 | 12 | Submitted |
| Lab 12 | 12 | 12 | 12 | Submitted |
| Lab 13 | 12 | 12 | 12 | Submitted |
| Lab 14 | 48 | 0 | 0 | Absent / Missing |
| **Grand Total** | **210** | **157** | **157** | **Percentage: 74.76% (Excl. Plag: 74.76%)** |

---


<br>

---
---

<br>

# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-12
**Student Name:** Adeeba Mansoor Qureshi
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                                    |
| :----------------------------------------- | :-----------: | :----------------: | :---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **3**       | **Excellent.** Task 1 correctly defines the `Student` structure with `firstName`, `lastName`, `rollNumber`, and `marks`. The `displayStudentInfo()` function correctly displays the student's full name and marks. A structure variable is created, all required members are assigned values, and the function is called successfully.                                                                                  |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** Task 2 correctly declares an array of `Student` structures, accepts multiple student records through user input, and calls `displayStudentInfo()` for every student. I tested the program with two student records and both records were displayed correctly. The only issue is that `Student students[n]` is a variable-length array, which is accepted by GCC as an extension but is not standard C++. |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** Task 3 correctly allocates a `Student` object dynamically using `new Student`, assigns all members through the pointer using `->`, calls `displayStudentInfo()` through the pointer, and correctly releases the allocated memory with `delete`.                                                                                                                                                          |
| **Input, Output & Execution**              |       3       |        **3**       | **Excellent.** All three programs compile successfully with `g++ -std=c++17`. Task 1 and Task 3 execute correctly, and Task 2 was tested with multiple student records and produced the expected output.                                                                                                                                                                                                                |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **12 / 12 (100.0%)**
* **Grade Status:** **Excellent**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> The submitted files were evaluated against the Lab 1 requirements. No comparison submission was provided for this evaluation, so a 100% code-match determination cannot be established from the available materials. The Lab 1 policy specifies a **-3 mark penalty** when a student's code is found to be plagiarized or matching 100% with another student's code.

---

### 💬 **Overall Teacher Remarks**

**Dear Adeeba,** your Lab 1 submission demonstrates an **excellent understanding of structures, arrays of structures, and structure pointers**. All three tasks satisfy the required functionality.

Task 1 correctly implements the basic `Student` structure and member function. Task 2 correctly extends the solution to multiple students using an array of structures and user input. Task 3 demonstrates proper pointer-based structure access, dynamic allocation, member assignment through `->`, and memory cleanup with `delete`.

All three programs were compiled and tested successfully. Task 2 produced the expected results when tested with multiple student records.

One technical improvement is recommended: replace the variable-length array `Student students[n]` with standard C++ dynamic allocation such as `new Student[n]` or a `vector<Student>`.

**Overall performance: Excellent — 12/12.**

<br>

---
---

<br>

# Lab 2 Evaluation Report (All Tasks)
**Student Roll Number:** 2025-SE-12  
**Student Name:** Adeeba Mansoor Qureshi

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** All tasks are structured using distinct header files (`student.h`, `rectangle.h`, `voter.h`, `temperature.h`, `calculator.h`) and driver source files (`student.cpp`, etc.). Object creation and usage are correct. |
| **Member Variables** | 3 | **3** | **Excellent.** Data members are defined with appropriate C++ types. Proper use of encapsulation (`private` attributes) is demonstrated across multiple tasks. |
| **Member Functions (Inside/Outside)** | 3 | **1** | **Need Improvement.** While the logic itself is mostly correct (and the Voter eligibility check correctly uses `age > 18`), you did not follow member function scoping rules: <br>1. **Task 2 (Rectangle):** All member functions (`setDimensions`, `area`, `perimeter`) are defined inline *inside* the class. The prompt explicitly requested they be defined *outside*. <br>2. **Task 3 (Voter):** All member functions (`setData`, `isEligible`) are defined *inside* the class instead of *outside* as requested. |
| **Input/Output & Execution** | 3 | **2** | **Good.** All 5 tasks compile successfully under `g++` and run. User menu selections are implemented using `switch` structures. <br><br> *Deduction Reason (Task 5):* <br>The division function `Calculator::divide()` (line 25 in `calculator.h`) is defined as `float divide() { return num1 / num2; }`. It lacks a safety validation check for division by zero, which results in division-by-zero behavior if the user inputs `0` for the second number. |

---

### **Summary of Results**
* **Total Marks:** **9 / 12** (75.0%)
* **Grade Status:** **Passed with feedback**

### **Overall Teacher Remarks**
Dear Adeeba,
You have done a great job organizing your tasks into clean header and source files. The structure is neat, and the compilation builds successfully for every task.

To improve, you need to focus on two areas:
1. **Scoping Rules:** Make sure to define your member functions outside the class using the scope resolution operator `::` when the task asks for it (specifically in Tasks 2 and 3). Inline declarations are convenient, but separating declaration from definition is a key concept of C++.
2. **Error Handling:** Always protect arithmetic operations. The calculator division function must have an `if (num2 != 0)` check to prevent runtime errors. Keep up the effort!

<br>

---
---

<br>

# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-12  
**Student Name:** Adeeba Mansoor Qureshi
**Task Folder Location:** `Lab Tasks\04-Lab(Encapsulation)\product.h & product.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** Modular `product.h` header with preprocessor guards (`#ifndef PRODUCT_H`) and `product.cpp` driver. |
| **Member Variables** | 3 | **3** | **Excellent.** Attributes (`name`, `price`, `quantity`) private and correctly typed (`string`, `double`, `int`). |
| **Member Functions (Inside/Outside)** | 3 | **2** | **Good.** Setter validation implemented for price (`p > 0`) and quantity (`q >= 0`). <br>*Deduction (-1 mark):* Logic typo in `setName`: `if(name!="")` checks member variable `name` instead of incoming parameter `n`. |
| **Use of Access Specifiers** | 3 | **3** | **Excellent.** Encapsulation is strictly enforced (`private:` data members, `public:` methods). |
| **Use of Getters/Setters** | 3 | **3** | **Excellent.** Getters and setters present and functional. |
| **Input/Output & Execution** | 3 | **3** | **Excellent.** Code compiles 100% cleanly with `g++` and executes test sequence. |

---

### 📈 **Summary of Results**
* **Total Marks:** **17 / 18 (94.4%)**
* **Grade Status:** **Excellent**

### 💬 **Overall Teacher Remarks**
Dear Adeeba, Great work on your `Product` encapsulation task in `Lab Tasks\04-Lab(Encapsulation)`! Code compiles cleanly and runs test cases smoothly. Just watch out for a small typo in `setName`: `if(name!="")` checks the uninitialized attribute `name` instead of the incoming parameter `n`. Minor detail, otherwise great work!

<br>

---
---

<br>

# Lab 4 Evaluation Report (Constructors & Destructors)
**Student Roll Number:** 2025-SE-12  
**Student Name:** Adeeba Mansoor Qureshi
**Task Folder Location:** `Lab Tasks\03_Lab(Constructor)\`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor Implementation** | 3 | **0** | **Incomplete.** Task 1 default constructor `Employee` is implemented. <br>*Deduction (-3 marks):* Completely omitted Task 2 (`BankAccount` parameterized constructor) from submission. |
| **Constructor Overloading** | 3 | **3** | **Excellent.** Task 3 `Rectangle` class overloads default (1.0), 2-parameter (`length`, `width`), and 1-parameter (square) constructors with `area()` method. |
| **Destructor & Object Management** | 3 | **3** | **Excellent.** Task 4 `Locker` class destructor correctly prints deallocation message. Demonstrates both scoped stack allocation `{}` and dynamic heap allocation via `new`/`delete`. |
| **Output & Execution** | 3 | **3** | **Excellent.** Submitted files compile 100% cleanly with `g++` and execute with clear output. |

---

### 📈 **Summary of Results**
* **Total Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Passed with feedback**

### 💬 **Overall Teacher Remarks**
Dear Adeeba, Good effort on Tasks 1, 3, and 4! To earn full marks, ensure to include Task 2 (`BankAccount` parameterized constructor) in your submission folder. Good work!

<br>

---
---

<br>

# Lab 5 Evaluation Report (Inheritance)

**Student Roll Number:** 2025-SE-12
**Student Name:** Adeeba Mansoor Qureshi
**Task Folder Location:** `Lab Tasks\05-Lab(Inheritance)\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Inheritance Implementation** | 3 | **3** | **Excellent.** All four inheritance types—single, multilevel, hierarchical, and multiple—are implemented correctly according to the requirements. |
| **Classes, Attributes & Functions** | 3 | **3** | **Excellent.** All required classes, inherited attributes, additional attributes, and functions are correctly defined and used. |
| **Object Creation & Functionality** | 3 | **3** | **Excellent.** Objects are created correctly and all required display/operation functions are called and work as intended in `main()`. |
| **Input, Output & Execution** | 3 | **3** | **Excellent.** All four files compiled and executed cleanly. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **12 / 12 (100.0%)**
* **Grade Status:** **Passed**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> No similarity matches found.

---

### 💬 **Overall Teacher Remarks**

**Dear Adeeba,** your Lab 5 submission structurally demonstrates an excellent understanding of single, multilevel, hierarchical, and multiple inheritance in C++. 
Keep up the excellent work!

<br>

---
---

<br>

# Lab 6 Evaluation Report (Constructor Chaining & Destructors)

**Student Roll Number:** 2025-SE-12
**Student Name:** Adeeba Mansoor Qureshi
**Task Folder Location:** `Lab Tasks\06_(Constructor Chaining)\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor & Inheritance Implementation** | 3 | **3** | Excellent. Clean constructor chaining and multilevel constructor delegation implementation. |
| **Destructor & Memory Management** | 3 | **3** | Excellent. Correct destructors freeing dynamic memory cleanly. |
| **Classes, Attributes & Object Functionality** | 3 | **3** | Excellent. Classes and attributes are defined correctly. |
| **Input, Output & Execution** | 3 | **3** | Excellent. All files compile and execute successfully. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **12 / 12 (100.0%)**
* **Grade Status:** **Passed (Excellent)**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> No similarity matches found.

---

### 💬 **Overall Teacher Remarks**

**Dear Adeeba,** your Lab 6 submission demonstrates your understanding of constructor chaining and destructors in C++.

<br>

---
---

<br>

# Lab 7 Evaluation Report (Composition & Aggregation)

**Student Roll Number:** 2025-SE-12
**Student Name:** Adeeba Mansoor Qureshi
**Task Folder Location:** `Lab Tasks\07_Lab(Aggreagation _Composition)\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Composition & Object Ownership** | 3 | **3** | Excellent. Calculator properly owns Display object and delegates display responsibilities. |
| **Aggregation & Shared Object Usage** | 3 | **3** | Excellent. Shared Calculator is created externally and passed by pointer to Student instances. |
| **Classes, Functions & Data Management** | 3 | **3** | Excellent. All arithmetic operations, delegation functions, and lastResult tracking are correctly implemented. |
| **Object Creation, Output & Execution** | 3 | **3** | Excellent. Both files compile and execute cleanly. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **12 / 12 (100.0%)**
* **Grade Status:** **Passed (Excellent)**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> No similarity matches found.

---

### 💬 **Overall Teacher Remarks**

**Dear Adeeba,** your Lab 7 submission demonstrates your understanding of composition (strong ownership) and aggregation (shared references) in C++.

<br>

---
---

<br>

# Lab 8 Evaluation Report (Polymorphism & Virtual Functions)

**Student Roll Number:** 2025-SE-12
**Student Name:** Adeeba Mansoor Qureshi
**Task Folder Location:** `Lab Tasks\08_Lab(Polymorphism)\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Polymorphism & Virtual Function** | 3 | **3** | Excellent. Pure virtual double area() = 0 declared in abstract base Shape, overridden cleanly in Rectangle and Circle. |
| **Derived Classes & Area Calculation** | 3 | **3** | Excellent. Accurate area formulas implemented in both derived classes. |
| **Shape Pointer & Object Access** | 3 | **3** | Excellent. Shape* base pointer used to call overridden area() dynamically. |
| **Object Creation, Output & Execution** | 3 | **3** | Excellent. Flawless compilation and execution. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **12 / 12 (100.0%)**
* **Grade Status:** **Passed (Excellent)**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> As per standard course grading policy for single-structure tasks, code similarity is expected and no plagiarism penalty is assessed.

---

### 💬 **Overall Teacher Remarks**

**Dear Adeeba,** your Lab 8 submission demonstrates your understanding of runtime polymorphism and virtual functions in C++.

<br>

---
---

<br>

# Lab 9 Evaluation Report (Operator Overloading ==)

**Student Roll Number:** 2025-SE-12
**Student Name:** Adeeba Mansoor Qureshi
**Task Folder Location:** `Lab Tasks\09_Lab(Operator Overloading\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Data Members** | 3 | **3** | Excellent. Distance class correctly encapsulates private feet and inches data members. |
| **Constructor Implementation** | 3 | **3** | Excellent. Constructor with default parameters initializes dimensions properly. |
| **`==` Operator Overloading** | 3 | **3** | Excellent. bool operator==(const Distance& d) correctly overloaded as a member function. |
| **Object Usage, Output & Execution** | 3 | **3** | Excellent. Objects compared via if-else with clear output; flawless compilation. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **12 / 12 (100.0%)**
* **Grade Status:** **Passed (Excellent)**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> No similarity matches found.

---

### 💬 **Overall Teacher Remarks**

**Dear Adeeba,** your Lab 9 submission demonstrates your understanding of C++ operator overloading and member function comparison.

<br>

---
---

<br>

# Lab 10 Evaluation Report (File Handling in C++)

**Student Roll Number:** 2025-SE-12
**Student Name:** Adeeba Mansoor Qureshi
**Task Folder Location:** `Lab Tasks\10_Lab(File Handling)\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **File Creation & Writing** | 3 | **3** | Excellent. File writing implemented correctly with distinct message lines and student records. |
| **File Reading & Content Display** | 3 | **3** | Excellent. ifstream reading and full console output display implemented cleanly. |
| **Line Counting & File Appending/Copying** | 3 | **3** | Excellent. Accurate line count, append mode, and stream copy functionality. |
| **File Handling, Execution & Output** | 3 | **3** | Excellent. All 4 programs compile with zero errors and execute cleanly. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **12 / 12 (100.0%)**
* **Grade Status:** **Passed (Excellent)**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> No similarity matches found.

---

### 💬 **Overall Teacher Remarks**

**Dear Adeeba,** your Lab 10 submission demonstrates your understanding of C++ file stream handling, reading, writing, and resource management.

<br>

---
---

<br>

# Lab 11 Evaluation Report (Friend Functions & Static Members)

**Student Roll Number:** 2025-SE-12
**Student Name:** Adeeba Mansoor Qureshi
**Task Folder Location:** `Lab Tasks\11+12_Lab(Friend Function+static member+abstract class)\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Friend Function Implementation** | 3 | **3** | Excellent. Both Box displayLength() and Distance addDistance() friend functions are properly declared and implemented with accurate parameter passing. |
| **Static Data Member Implementation** | 3 | **3** | Excellent. BankAccount correctly defines static int totalAccounts, increments counter in constructor, and displays total accounts created. |
| **Static Member Function & Shared Data** | 3 | **3** | Excellent. Employee class correctly defines static string companyName and static void displayCompany(), accessed via Employee::displayCompany(). |
| **Object Creation, Output & Execution** | 3 | **3** | Excellent. All 4 tasks compile cleanly with zero errors and produce accurate output. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **12 / 12 (100.0%)**
* **Grade Status:** **Passed (Excellent)**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> No similarity matches found.

---

### 💬 **Overall Teacher Remarks**

**Dear Adeeba,** your Lab 11 submission demonstrates a solid understanding of friend functions and static members in C++.

<br>

---
---

<br>

# Lab 12 Evaluation Report (Pure Virtual Functions & Abstract Classes)

**Student Roll Number:** 2025-SE-12
**Student Name:** Adeeba Mansoor Qureshi
**Task Folder Location:** `Lab Tasks\11+12_Lab(Friend Function+static member+abstract class)\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Abstract Base Class & Pure Virtual Function** | 3 | **3** | Excellent. HospitalStaff correctly defined as an abstract base class with pure virtual function virtual void performDuty() = 0;. |
| **Derived Classes & Function Overriding** | 3 | **3** | Excellent. Doctor, Nurse, and Receptionist classes properly inherit from HospitalStaff and override performDuty(). |
| **Object Creation & Polymorphic Call** | 3 | **3** | Excellent. Objects of all 3 derived classes created and performDuty() invoked on each. |
| **Execution, Output & Clean Compilation** | 3 | **3** | Excellent. Clean compilation with zero errors and clear console output. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **12 / 12 (100.0%)**
* **Grade Status:** **Passed (Excellent)**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> No similarity matches found.

---

### 💬 **Overall Teacher Remarks**

**Dear Adeeba,** your Lab 12 submission demonstrates an excellent understanding of abstract classes and pure virtual functions in C++.

<br>

---
---

<br>

# Lab 13 Evaluation Report (C++ Templates)

**Student Roll Number:** 2025-SE-12
**Student Name:** Adeeba Mansoor Qureshi
**Task Folder Location:** `Lab Tasks\13_Lab(Templates)\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Function Templates (`printTwice` & `findMin`)** | 3 | **3** | Excellent. printTwice() and findMin() function templates are properly implemented with generic types. |
| **Required Type Testing & Results** | 3 | **3** | Excellent. Required type testing (int, double, string and int, double, char) correctly demonstrated with clear output. |
| **Class Templates (`Pair<T>` & `Calculator<T>`)** | 3 | **3** | Excellent. Pair<T> and Calculator<T> class templates are properly designed with private members, constructor, getters, and operations returning T. |
| **Object Creation, `main()` Usage & Execution** | 3 | **3** | Excellent. Object creation inside main() is clean, compiles with zero warnings, and executes flawlessly. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **12 / 12 (100.0%)**
* **Grade Status:** **Passed (Excellent)**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> No similarity matches found.

---

### 💬 **Overall Teacher Remarks**

**Dear Adeeba,** your Lab 13 submission demonstrates your understanding of generic programming, function templates, and class templates in C++.

<br>

---
---

<br>

# Lab 14 Evaluation Report (In-Class Lab: Vehicle Rental System)

**Student Roll Number:** 2025-SE-12  
**Student Name:** Adeeba Mansoor Qureshi  
**Task Folder Location:** `N/A`  

---

### 📊 **Evaluation Rubric & Score Sheet (Max 48 Marks)**

| **Criterion** | **Weight** | **Raw Score (1–4)** | **Weighted Marks** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :---: | :--- |
| **OOP Design** | x 4 | **0** / 4 | **0 / 16** | Absent / No submission found in repository. |
| **Design Justification** | x 3 | **0** / 4 | **0 / 12** | Absent / No submission found in repository. |
| **Encapsulation & Responsibility** | x 2 | **0** / 4 | **0 / 8** | Absent / No submission found in repository. |
| **Working Demo** | x 2 | **0** / 4 | **0 / 8** | Absent / No submission found in repository. |
| **Code Quality** | x 1 | **0** / 4 | **0 / 4** | Absent / No submission found in repository. |

---

### 📈 **Summary of Results**

* **Weighted Total Marks:** **0 / 48 (0.0%)**
* **Grade Status:** **Absent / Empty Task Folder**
* **Plagiarism Penalty:** **0 Marks**

---

### 💬 **Overall Teacher Remarks**

**Dear Adeeba,** your Lab 14 (Vehicle Rental System) submission is missing from your repository. Please upload your complete Lab 14 files to receive evaluation.
