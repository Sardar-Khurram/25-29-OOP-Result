# Object-Oriented Programming — Consolidated Evaluation Report

**Student Name:** Shahnza Munir  
**Roll Number:** `2025-SE-02`  
**Total Maximum Marks:** 210  
**Total Obtained Marks:** 148 / 210 (70.48%)  
**Total Excluding Plagiarism:** 157 / 210 (74.76%)  

---

### 📊 **Student Grand Total Result Table**

| Lab Number | Total Marks | Obtained Marks | Excluding Plagarism | Status / Notes |
| :--- | :---: | :---: | :---: | :--- |
| Lab  1 | 12 | 11 | 11 | Submitted |
| Lab  2 | 12 | 8 | 8 | Submitted |
| Lab  3 | 18 | 18 | 18 | Submitted |
| Lab  4 | 12 | 9 | 12 | Submitted (Plag Penalty: -3) |
| Lab  5 | 12 | 12 | 12 | Submitted |
| Lab  6 | 12 | 12 | 12 | Submitted |
| Lab  7 | 12 | 9 | 12 | Submitted (Plag Penalty: -3) |
| Lab  8 | 12 | 12 | 12 | Submitted |
| Lab  9 | 12 | 12 | 12 | Submitted |
| Lab 10 | 12 | 9 | 12 | Submitted (Plag Penalty: -3) |
| Lab 11 | 12 | 12 | 12 | Submitted |
| Lab 12 | 12 | 12 | 12 | Submitted |
| Lab 13 | 12 | 12 | 12 | Submitted |
| Lab 14 | 48 | 0 | 0 | Absent / Missing |
| **Grand Total** | **210** | **148** | **157** | **Percentage: 70.48% (Excl. Plag: 74.76%)** |

---


<br>

---
---

<br>

# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-02
**Student Name:** Shahnza Munir
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                              |
| :----------------------------------------- | :-----------: | :----------------: | :---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **3**       | **Excellent.** The `Student` structure correctly contains `firstName`, `lastName`, `rollNumber`, and `marks`. The `displayStudentInfo()` member function correctly displays the student's full name and marks. Task 1 also correctly creates a structure variable, assigns values, and calls the member function. |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** Task 2 correctly implements an array of `Student` structures, accepts the number of students and their details through user input, and calls `displayStudentInfo()` for each student.                                                                                                              |
| **Structure Pointer & Dynamic Access**     |       3       |        **2**       | **Good.** Task 3 correctly creates a dynamically allocated `Student` object using `new`, accesses its members through the structure pointer using `->`, and calls `displayStudentInfo()` through the pointer. However, the allocated memory is **not released using `delete`**, resulting in a memory leak.       |
| **Input, Output & Execution**              |       3       |        **3**       | **Excellent.** All three tasks contain the required input/output functionality. Task 1 directly assigns student information, while Tasks 2 and 3 accept student information from the user and display the required name and marks.                                                                                |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **11 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **11 / 12 (91.67%)**
* **Grade Status:** **Excellent**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> The submitted files were evaluated against the Lab 1 requirements. No comparison submission was provided for this evaluation, so a 100% code-match determination cannot be established from the available materials. The Lab 1 policy specifies a **-3 mark penalty** when a student's code is found to be 100% identical to another student's code.

---

### 💬 **Overall Teacher Remarks**

**Dear Shahnza,** your Lab 1 submission demonstrates a **strong understanding of structures, arrays of structures, and structure pointers**. All three tasks implement the main requirements successfully.

Task 3 is functionally correct in its use of dynamic allocation and pointer-based member access. However, after allocating memory using `new Student`, the program does not release that memory using `delete`. This should be corrected to avoid a **memory leak**.

Also, Task 2 uses a variable-length array (`Student students[n]`), which is not standard C++ and may cause portability issues with strict C++ compilers. A fixed-size array or dynamic allocation would be preferable.

**Overall performance: Excellent — 11/12.**

<br>

---
---

<br>

# Lab 2 Evaluation Report (All Tasks)
**Student Roll Number:** 2025-SE-02  
**Student Name:** Shahnza Munir

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **2** | **Good.** Individual task C++ files are correctly structured with object creation. However, the header file `Calculator.h` has a compilation error (missing closing curly brace for the `divide()` method and the `Calculator` class scope), which prevents the integrated `main.cpp` driver from compiling. |
| **Member Variables** | 3 | **3** | **Excellent.** All relevant attributes (like `name`, `rollNumber`, `marks`, `length`, `width`, `age`, `celsiusTemp`, etc.) are clearly defined with proper C++ data types. |
| **Member Functions (Inside/Outside)** | 3 | **2** | **Good.** Function separation is mostly followed (inline for Task 1 & 5, outline for Task 2 & 3). <br><br> *Deduction Reasons:* <br>1. **Calculator.h:** Syntactically broken definition of the `divide()` method. <br>2. **OOP Lab 2 Calculator Task.cpp:** `case 4` in the `switch` statement lacks a `break;` statement, causing execution to fall through and print "Invalid Choice!" alongside the result. <br>3. **main.cpp:** The variable `choice` is declared but never read from the user, leading to undefined execution logic. |
| **Input/Output & Execution** | 3 | **1** | **Needs Improvement.** While the individual task files (Student, Rectangle, Voter, Temperature, Calculator) compile and execute correctly, the main unified project file (`main.cpp`) fails to compile due to errors in `Calculator.h`. Also, `main.cpp` is missing user input (`cin >> choice`) for the calculator menu. |

---

### **Summary of Results**
* **Total Marks:** **8 / 12** (66.7%)
* **Grade Status:** **Passed with feedback**

### **Overall Teacher Remarks**
Dear Shahnza,
You have done a good job completing all 5 tasks individually. The individual task files compile and run successfully.

However, you need to pay close attention to syntactic details when building integrated header files. A missing curly brace in `Calculator.h` broke the compilation of the main entry program (`main.cpp`). Additionally, make sure to test your logical flows—missing a `break;` in the calculator switch statement and failing to read user input for the menu selection are significant logical bugs. Double check your files before submission!

<br>

---
---

<br>

# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-02  
**Student Name:** Shahnza Munir
**Task Folder Location:** `Lab 4(Encapsulation)\Encapsulation Task 5.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | Excellent. `Product` class is defined cleanly and instantiated correctly in `main()`. |
| **Member Variables** | 3 | **3** | Excellent. All 3 private attributes (`name`, `price`, `quantity`) are correctly defined. |
| **Member Functions (Inside/Outside)** | 3 | **3** | Excellent. Setter validation logic (`n.empty()`, `p <= 0`, `q < 0`) displays clear error messages. |
| **Use of Access Specifiers** | 3 | **3** | Excellent. Strict encapsulation followed: `private:` attributes, `public:` interface. |
| **Use of Getters/Setters** | 3 | **3** | Excellent. Complete getters and setters implemented according to instructions. |
| **Input/Output & Execution** | 3 | **3** | Excellent. Compiles 100% cleanly with g++ and executes test sequence perfectly. |

---

### 📈 **Summary of Results**
* **Total Marks:** **18 / 18 (100%)**
* **Grade Status:** **Excellent (Full Marks)**

### 💬 **Overall Teacher Remarks**
Dear Shahnza, Outstanding work! Your Encapsulated `Product` task in `Lab 4(Encapsulation)\Encapsulation Task 5.cpp` is 100% complete, handles input validation cleanly, and compiles without any errors. Excellent job!

<br>

---
---

<br>

# Lab 4 Evaluation Report (Constructors & Destructors)
**Student Roll Number:** 2025-SE-02  
**Student Name:** Shahnza Munir
**Task Folder Location:** `Lab 3(Constructors & Destructors)\`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor Implementation** | 3 | **3** | **Excellent.** Task 1 default constructor initializes `id=0`, `name="not assigned"`, `salary=0.0`. Task 2 parameterized constructor correctly initializes all banking attributes. |
| **Constructor Overloading** | 3 | **3** | **Excellent.** Task 3 `Rectangle` class overloads default (1.0), 2-parameter (`length`, `width`), and 1-parameter (square) constructors cleanly. |
| **Destructor & Object Management** | 3 | **3** | **Excellent.** Task 4 `Locker` class destructor correctly prints deallocation message. Demonstrates both scoped stack allocation `{}` and dynamic heap allocation via `new`/`delete`. |
| **Output & Execution** | 3 | **3** | **Excellent.** All 4 C++ files compile 100% cleanly with `g++` and execute with correct output formatting. |

---

### 📈 **Summary of Results**
* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **-3 Marks** *(100% identical code match with student `2025-SE-01`)*
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Plagiarism Penalty (-3)**

---

### ⚠️ **Plagiarism Audit Detail**
> [!WARNING]
> Manual inspection detected a **100% character-for-character code match** across all 4 tasks between your `Lab 3(Constructors & Destructors)` files and student `2025-SE-01` (Syeda Mariam Gillani)'s submission files. Per course policy, a flat **-3 marks penalty** has been applied to both submissions.

### 💬 **Overall Teacher Remarks**
Dear Shahnza, Your core implementation is fully working, but please write your code independently. Duplicate submissions result in heavy plagiarism penalties.

<br>

---
---

<br>

# Lab 5 Evaluation Report (Inheritance)

**Student Roll Number:** 2025-SE-02
**Student Name:** Shahnza Munir
**Task Folder Location:** `Lab 5 (Inheritance)\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Inheritance Implementation** | 3 | **3** | **Excellent.** All four inheritance types—single, multilevel, hierarchical, and multiple—are implemented correctly according to the requirements. |
| **Classes, Attributes & Functions** | 3 | **3** | **Excellent.** All required classes, inherited attributes, additional attributes, and functions are correctly defined and used. |
| **Object Creation & Functionality** | 3 | **3** | **Excellent.** Objects are created correctly and all required display/operation functions are called and work as intended in `main()`. |
| **Input, Output & Execution** | 3 | **3** | **Excellent.** Programs compile successfully without warnings and execute with clear user input and output. |

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

**Dear Shahnza,** your Lab 5 submission structurally demonstrates an excellent understanding of single, multilevel, hierarchical, and multiple inheritance in C++. 
Keep up the excellent work!

<br>

---
---

<br>

# Lab 6 Evaluation Report (Constructor Chaining & Destructors)

**Student Roll Number:** 2025-SE-02
**Student Name:** Shahnza Munir
**Task Folder Location:** `Lab 6 (Constructor Chaining)\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor & Inheritance Implementation** | 3 | **3** | Excellent. Correct constructor chaining and multilevel constructor delegation. |
| **Destructor & Memory Management** | 3 | **3** | Excellent. Correct destructor implementation, including hand-rolled string deletion. |
| **Classes, Attributes & Object Functionality** | 3 | **3** | Excellent. All required classes, attributes, and object relationships are correctly demonstrated. |
| **Input, Output & Execution** | 3 | **3** | Excellent. All files compile and execute cleanly. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **12 / 12 (100.0%)**
* **Grade Status:** **Passed (Excellent)**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> No plagiarism penalty applied. Standard boilerplate matching for Task 3.

---

### 💬 **Overall Teacher Remarks**

**Dear Shahnza,** your Lab 6 submission demonstrates your understanding of constructor chaining and destructors in C++.

<br>

---
---

<br>

# Lab 7 Evaluation Report (Composition & Aggregation)

**Student Roll Number:** 2025-SE-02
**Student Name:** Shahnza Munir
**Task Folder Location:** `Lab 7 (Composition & Aggregation)\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Composition & Object Ownership** | 3 | **3** | Excellent. Composition logic and object ownership are correctly implemented. |
| **Aggregation & Shared Object Usage** | 3 | **3** | Excellent. Aggregation with shared Calculator and Student objects is correctly implemented. |
| **Classes, Functions & Data Management** | 3 | **3** | Excellent. Class definitions, operations, and result tracking are verified. |
| **Object Creation, Output & Execution** | 3 | **3** | Excellent. Compiles and executes cleanly. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **-3 Marks**
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Passed (Good)**

---

### ⚠️ **Plagiarism Audit Detail**

> **Plagiarism Penalty of **-3 marks** applied.**
> Both task files are 100% identical copy-matches (excluding spacing/comments) with student `2025-SE-22` (Noor Ul Ain Abbasi).

---

### 💬 **Overall Teacher Remarks**

**Dear Shahnza,** your Lab 7 submission demonstrates your understanding of composition (strong ownership) and aggregation (shared references) in C++.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 8 Evaluation Report (Polymorphism & Virtual Functions)

**Student Roll Number:** 2025-SE-02
**Student Name:** Shahnza Munir
**Task Folder Location:** `Lab 8(Polymorphism)\`

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

**Dear Shahnza,** your Lab 8 submission demonstrates your understanding of runtime polymorphism and virtual functions in C++.

<br>

---
---

<br>

# Lab 9 Evaluation Report (Operator Overloading ==)

**Student Roll Number:** 2025-SE-02
**Student Name:** Shahnza Munir
**Task Folder Location:** `Lab 10 (Operator Overloading)\ (Swapped folder)`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Data Members** | 3 | **3** | Excellent. Distance class correctly encapsulates private feet and inches data members in Lab 10 folder. |
| **Constructor Implementation** | 3 | **3** | Excellent. Constructor with default arguments initializes distance dimensions properly. |
| **`==` Operator Overloading** | 3 | **3** | Excellent. bool operator==(const Distance& d) converts feet to total inches for precise mathematical comparison. |
| **Object Usage, Output & Execution** | 3 | **3** | Excellent. Multiple Distance objects compared; flawless compilation and execution. |

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

**Dear Shahnza,** your Lab 9 submission demonstrates your understanding of C++ operator overloading and member function comparison.

<br>

---
---

<br>

# Lab 10 Evaluation Report (File Handling in C++)

**Student Roll Number:** 2025-SE-02
**Student Name:** Shahnza Munir
**Task Folder Location:** `Lab 9 (File Handling)\ (Swapped folder)`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **File Creation & Writing** | 3 | **3** | **Excellent.** File writing implemented correctly with distinct message lines and student records. |
| **File Reading & Content Display** | 3 | **3** | **Excellent.** ifstream reading and full console output display implemented cleanly. |
| **Line Counting & File Appending/Copying** | 3 | **3** | **Excellent.** Accurate line count, append mode with personal credentials, and stream copy functionality. |
| **File Handling, Execution & Output** | 3 | **3** | **Excellent.** All 4 programs compile with zero errors and execute cleanly. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **-3 Marks**
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Passed (Good)**

---

### ⚠️ **Plagiarism Audit Detail**

> **Plagiarism Penalty of **-3 marks** applied.**
> Source code files are 100% matched with student `2025-SE-36` (Muhammad Zakria) who submitted identical source code files including identical comments and credentials.

---

### 💬 **Overall Teacher Remarks**

**Dear Shahnza,** your Lab 10 submission demonstrates your understanding of C++ file stream handling, reading, writing, and resource management.
*Warning: Sharing or copying code violates class policies. A flat -3 marks penalty has been applied.*

<br>

---
---

<br>

# Lab 11 Evaluation Report (Friend Functions & Static Members)

**Student Roll Number:** 2025-SE-02
**Student Name:** Shahnza Munir
**Task Folder Location:** `Lab 11+Lab 12(Friend & Static Member Functions)\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Friend Function Implementation** | 3 | **3** | Excellent. Both Box displayLength() and Distance addDistance() friend functions are properly declared and implemented with accurate parameter passing. |
| **Static Data Member Implementation** | 3 | **3** | Excellent. BankAccount correctly defines static int totalAccounts, increments counter in constructor, and displays total accounts created. |
| **Static Member Function & Shared Data** | 3 | **3** | Excellent. Employee class correctly defines static string companyName and static void displayCompanyInfo(), accessed via Employee::displayCompanyInfo(). |
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

**Dear Shahnza,** your Lab 11 submission demonstrates a clear understanding of friend functions and static members in C++.

<br>

---
---

<br>

# Lab 12 Evaluation Report (Pure Virtual Functions & Abstract Classes)

**Student Roll Number:** 2025-SE-02
**Student Name:** Shahnza Munir
**Task Folder Location:** `Lab 11+Lab 12(Friend & Static Member Functions)\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Abstract Base Class & Pure Virtual Function** | 3 | **3** | Excellent. HospitalStaff correctly defined as an abstract base class with a pure virtual function virtual void performDuty() = 0; and staffName. |
| **Derived Classes & Function Overriding** | 3 | **3** | Excellent. Doctor, Nurse, and Receptionist classes properly inherit from HospitalStaff and override performDuty() with distinct duty descriptions. |
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

**Dear Shahnza,** your Lab 12 submission demonstrates an excellent understanding of abstract classes and pure virtual functions in C++.

<br>

---
---

<br>

# Lab 13 Evaluation Report (C++ Templates)

**Student Roll Number:** 2025-SE-02
**Student Name:** Shahnza Munir
**Task Folder Location:** `Lab 13(Templates)\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Function Templates (`printTwice` & `findMin`)** | 3 | **3** | Excellent. printTwice() and findMin() function templates are properly implemented with generic types. |
| **Required Type Testing & Results** | 3 | **3** | Excellent. Required type testing (int, double, string for printTwice; int, double, char for findMin) correctly demonstrated with clear output. |
| **Class Templates (`Pair<T>` & `Calculator<T>`)** | 3 | **3** | Excellent. Pair<T> and Calculator<T> class templates are properly designed with private members, constructor, getters, and arithmetic methods returning T. |
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

**Dear Shahnza,** your Lab 13 submission demonstrates a strong understanding of generic programming, function templates, and class templates in C++.

<br>

---
---

<br>

# Lab 14 Evaluation Report (In-Class Lab: Vehicle Rental System)

**Student Roll Number:** 2025-SE-02  
**Student Name:** Shahnza Munir  
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

**Dear Shahnza,** your Lab 14 (Vehicle Rental System) submission is missing from your repository. Please upload your complete Lab 14 files to receive evaluation.
