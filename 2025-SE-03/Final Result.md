# Object-Oriented Programming — Consolidated Evaluation Report

**Student Name:** Muhammad Zain Mughal  
**Roll Number:** `2025-SE-03`  
**Total Maximum Marks:** 210  
**Total Obtained Marks:** 199 / 210 (94.76%)  
**Total Excluding Plagiarism:** 199 / 210 (94.76%)  

---

### 📊 **Student Grand Total Result Table**

| Lab Number | Total Marks | Obtained Marks | Excluding Plagarism | Status / Notes |
| :--- | :---: | :---: | :---: | :--- |
| Lab  1 | 12 | 12 | 12 | Submitted |
| Lab  2 | 12 | 12 | 12 | Submitted |
| Lab  3 | 18 | 18 | 18 | Submitted |
| Lab  4 | 12 | 7 | 7 | Submitted |
| Lab  5 | 12 | 12 | 12 | Submitted |
| Lab  6 | 12 | 12 | 12 | Submitted |
| Lab  7 | 12 | 12 | 12 | Submitted |
| Lab  8 | 12 | 12 | 12 | Submitted |
| Lab  9 | 12 | 12 | 12 | Submitted |
| Lab 10 | 12 | 12 | 12 | Submitted |
| Lab 11 | 12 | 12 | 12 | Submitted |
| Lab 12 | 12 | 12 | 12 | Submitted |
| Lab 13 | 12 | 12 | 12 | Submitted |
| Lab 14 | 48 | 42 | 42 | Submitted |
| **Grand Total** | **210** | **199** | **199** | **Percentage: 94.76% (Excl. Plag: 94.76%)** |

---


<br>

---
---

<br>

# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-03
**Student Name:** Muhammad Zain Mughal
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                              |
| :----------------------------------------- | :-----------: | :----------------: | :-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **3**       | **Excellent.** Task 1 correctly defines the `Student` structure with first name, last name, roll number, and marks. The `displayStudentInfo()` function correctly displays the full name and marks. A structure variable is created, all required members are assigned values, and the function is called successfully.           |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** Task 2 correctly uses an array of 100 `Student` structures, accepts the number of students and their details through user input, and calls `displayStudentInfo()` for each student.                                                                                                                                |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** Task 3 correctly declares a pointer to the `Student` structure, uses the `->` operator to assign all required values through the pointer, and calls `displayStudentInfo()` through the pointer. This satisfies the task requirement for pointer-based access and assignment.                                       |
| **Input, Output & Execution**              |       3       |        **3**       | **Excellent.** All three tasks contain the required structure data and display functionality. Task 2 correctly accepts multiple student records from the user, while Tasks 1 and 3 assign student data and display the required full name and marks. The submitted code follows the required program flow for all three tasks.    |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **12 / 12 (100.0%)**
* **Grade Status:** **Excellent**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> The submitted files were evaluated against the Lab 1 requirements. No comparison submission was provided for this evaluation, so a 100% code-match determination cannot be established from the available materials. The Lab 1 policy specifies a **-3 mark penalty** when a student's code is found to be plagiarized or 100% identical to another student's code.

---

### 💬 **Overall Teacher Remarks**

**Dear Muhammad,** your Lab 1 submission demonstrates a **strong understanding of structures, arrays of structures, and structure pointers**. All three tasks satisfy the specified requirements.

Task 1 correctly implements the `Student` structure and member function. Task 2 successfully extends the concept to multiple students using an array of structures and user input. Task 3 correctly demonstrates pointer-based access using the `->` operator and invokes the member function through the structure pointer.   

**Overall performance: Excellent — 12/12.**

<br>

---
---

<br>

# Lab 2 Evaluation Report (All Tasks)
**Student Roll Number:** 2025-SE-03  
**Student Name:** Muhammad Zain Mughal

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **2** | **Good.** Classes are defined correctly using separation of concern (`.h` files for class structure and `.cpp` files for testing). Header guards are present. However, for Task 3, the driver file `Voter.cpp` is empty, so no object was instantiated or tested. |
| **Member Variables** | 3 | **3** | **Excellent.** All relevant attributes (like `name`, `rollNumber`, `marks`, `length`, `width`, `age`, `celsius`, `num1`, `num2`) are defined clearly with correct data types. |
| **Member Functions (Inside/Outside)** | 3 | **3** | **Excellent.** You followed the method location instructions perfectly: <br>1. **Inside Class:** Defined inline in Task 1 (`getData`, `displayData`) and Task 4 (`convert`, `display`). <br>2. **Outside Class:** Defined outside in Task 2, 3, and 5 using the scope resolution operator `::`. <br>3. **Validation:** Good inclusion of division-by-zero validation check in Task 5 (`Calculator::divide`). |
| **Input/Output & Execution** | 3 | **2** | **Good.** Tasks 1, 2, 4, and 5 compile and run cleanly, offering clear user-friendly console I/O. However, Task 3 (`Voter.cpp`) fails to compile or execute because the file is entirely empty (0 bytes) and lacks a `main()` function. |

---

### **Summary of Results**
* **Total Marks:** **10 / 12** (83.3%)
* **Grade Status:** **Passed with feedback**

### **Overall Teacher Remarks**
Dear Muhammad Zain,
Your code structure is very neat, and you did an excellent job separating class interface headers (`.h`) from execution files (`.cpp`). Your C++ implementation for outside functions is flawless, especially with the solid division validation check in Task 5.

The main drawback is that you forgot to implement the test code for Task 3—your `Voter.cpp` was left empty, resulting in a compilation error for that task. Make sure to double check that all your files are populated and tested before submission. Great effort otherwise!

<br>

---
---

<br>

# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-03  
**Student Name:** Muhammad Zain Mughal
**Task Folder Location:** `Lab 3\Product.h & main.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | Excellent. `Product` class cleanly separated into `Product.h` (with guards `#ifndef PRODUCT_H`) and `main.cpp`. |
| **Member Variables** | 3 | **3** | Excellent. All 3 private data members (`string name`, `double price`, `int quantity`) declared. |
| **Member Functions (Inside/Outside)** | 3 | **3** | Excellent. Setters implement strict validation (`!n.empty()`, `p > 0`, `q >= 0`) with error messages. |
| **Use of Access Specifiers** | 3 | **3** | Excellent. Encapsulation strictly enforced. |
| **Use of Getters/Setters** | 3 | **3** | Excellent. All getters (`getName()`, `getPrice()`, `getQuantity()`) and setters fully functional. |
| **Input/Output & Execution** | 3 | **3** | Excellent. `main.cpp` compiles cleanly with g++ and executes test sequence perfectly. |

---

### 📈 **Summary of Results**
* **Total Marks:** **18 / 18 (100%)**
* **Grade Status:** **Excellent (Full Marks)**

### 💬 **Overall Teacher Remarks**
Dear Muhammad Zain, Perfect submission for Lab 3! Modular header structure and setter validation logic satisfy all rubric criteria. Great work!

<br>

---
---

<br>

# Lab 4 Evaluation Report (Constructors & Destructors)
**Student Roll Number:** 2025-SE-03  
**Student Name:** Muhammad Zain Mughal
**Task Folder Location:** `Lab 4\1`, `Lab 4\2`, `Lab 4\3`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor Implementation** | 3 | **2** | **Good.** Task 2 `BankAccount` parameterized constructor is implemented cleanly. <br>*Deduction (-1 mark):* In Task 1, `Employee.h` was accidentally replaced with main driver code, omitting the `class Employee` declaration. |
| **Constructor Overloading** | 3 | **3** | **Excellent.** Task 3 `Rectangle.h` overloads default (1.0), 2-parameter (`length`, `width`), and 1-parameter (square) constructors cleanly with preprocessor guards. |
| **Destructor & Object Management** | 3 | **0** | **Absent.** Task 4 `Locker` class (destructor stack block and heap `new`/`delete` allocation) is missing from submission. |
| **Output & Execution** | 3 | **2** | **Good.** Tasks 2 & 3 compile and run cleanly. <br>*Deduction (-1 mark):* Task 1 fails compilation due to missing `class Employee` declaration in `Employee.h`. |

---

### 📈 **Summary of Results**
* **Total Marks:** **7 / 12 (58.3%)**
* **Grade Status:** **Passed with feedback**

### 💬 **Overall Teacher Remarks**
Dear Muhammad Zain, Good effort on Tasks 2 & 3! To improve: 1) Restore the `class Employee` definition inside `Lab 4\1\Employee.h` so Task 1 compiles, and 2) Complete Task 4 (`Locker` destructor stack and heap object management) to earn full marks.

<br>

---
---

<br>

# Lab 5 Evaluation Report (Inheritance)

**Student Roll Number:** 2025-SE-03
**Student Name:** Muhammad Zain Mughal
**Task Folder Location:** `Lab 5\`

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

**Dear Muhammad,** your Lab 5 submission structurally demonstrates an excellent understanding of single, multilevel, hierarchical, and multiple inheritance in C++. 
Keep up the excellent work!

<br>

---
---

<br>

# Lab 6 Evaluation Report (Constructor Chaining & Destructors)

**Student Roll Number:** 2025-SE-03
**Student Name:** Muhammad Zain Mughal
**Task Folder Location:** `Lab 6\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor & Inheritance Implementation** | 3 | **3** | Excellent. Correct constructor chaining and multilevel constructor prints demonstrating call order. |
| **Destructor & Memory Management** | 3 | **3** | Excellent. Correct destructors freeing dynamic memory cleanly. |
| **Classes, Attributes & Object Functionality** | 3 | **3** | Excellent. Clean file structure separating headers (.h) and source files (main.cpp). |
| **Input, Output & Execution** | 3 | **3** | Excellent. All code compiles and executes successfully. |

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

**Dear Muhammad,** your Lab 6 submission demonstrates your understanding of constructor chaining and destructors in C++.

<br>

---
---

<br>

# Lab 7 Evaluation Report (Composition & Aggregation)

**Student Roll Number:** 2025-SE-03
**Student Name:** Muhammad Zain Mughal
**Task Folder Location:** `Lab 7\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Composition & Object Ownership** | 3 | **3** | Excellent. Clean modular composition architecture with header/cpp separation. |
| **Aggregation & Shared Object Usage** | 3 | **3** | Excellent. Clear aggregation model with shared Calculator and Student classes. |
| **Classes, Functions & Data Management** | 3 | **3** | Excellent. High-quality code structure and accurate logic. |
| **Object Creation, Output & Execution** | 3 | **3** | Excellent. All files compile and execute cleanly. |

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

**Dear Muhammad,** your Lab 7 submission demonstrates your understanding of composition (strong ownership) and aggregation (shared references) in C++.

<br>

---
---

<br>

# Lab 8 Evaluation Report (Polymorphism & Virtual Functions)

**Student Roll Number:** 2025-SE-03
**Student Name:** Muhammad Zain Mughal
**Task Folder Location:** `Lab 8\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Polymorphism & Virtual Function** | 3 | **3** | Excellent. Base Shape defines virtual double area() and derived classes properly override it. |
| **Derived Classes & Area Calculation** | 3 | **3** | Excellent. Derived classes Rectangle and Circle accurately compute their areas. |
| **Shape Pointer & Object Access** | 3 | **3** | Excellent. Base pointer Shape* is used to reference objects and call area() dynamically at runtime. |
| **Object Creation, Output & Execution** | 3 | **3** | Excellent. Compiles and executes cleanly. |

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

**Dear Muhammad,** your Lab 8 submission demonstrates your understanding of runtime polymorphism and virtual functions in C++.

<br>

---
---

<br>

# Lab 9 Evaluation Report (Operator Overloading ==)

**Student Roll Number:** 2025-SE-03
**Student Name:** Muhammad Zain Mughal
**Task Folder Location:** `Lab 9\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Data Members** | 3 | **3** | Excellent. Distance class correctly encapsulates private feet and inches data members. |
| **Constructor Implementation** | 3 | **3** | Excellent. Parameterized constructor initializes feet and inches values properly. |
| **`==` Operator Overloading** | 3 | **3** | Excellent. bool operator==(Distance d) correctly overloaded as a member function. |
| **Object Usage, Output & Execution** | 3 | **3** | Excellent. Objects created and compared; compiles and executes cleanly. |

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

**Dear Muhammad,** your Lab 9 submission demonstrates your understanding of C++ operator overloading and member function comparison.

<br>

---
---

<br>

# Lab 10 Evaluation Report (File Handling in C++)

**Student Roll Number:** 2025-SE-03
**Student Name:** Muhammad Zain Mughal
**Task Folder Location:** `Lab 10\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **File Creation & Writing** | 3 | **3** | Excellent. Proper creation and writing of text and student records. |
| **File Reading & Content Display** | 3 | **3** | Excellent. Clean reading loops using ifstream and getline. |
| **Line Counting & File Appending/Copying** | 3 | **3** | Excellent. Line counting, append mode, and file copying all correctly implemented. |
| **File Handling, Execution & Output** | 3 | **3** | Excellent. Flawless compilation and clean output across all 4 tasks. |

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

**Dear Muhammad,** your Lab 10 submission demonstrates your understanding of C++ file stream handling, reading, writing, and resource management.

<br>

---
---

<br>

# Lab 11 Evaluation Report (Friend Functions & Static Members)

**Student Roll Number:** 2025-SE-03
**Student Name:** Muhammad Zain Mughal
**Task Folder Location:** `LAB 11 AND 12\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Friend Function Implementation** | 3 | **3** | Excellent. Proper friend functions for Box and Distance with friend declarations and private member access. |
| **Static Data Member Implementation** | 3 | **3** | Excellent. BankAccount static account counter properly initialized and incremented in constructor. |
| **Static Member Function & Shared Data** | 3 | **3** | Excellent. Employee static company name and static function showCompany() invoked properly via Employee::showCompany(). |
| **Object Creation, Output & Execution** | 3 | **3** | Excellent. Well-structured modular folders with standalone compilation and execution. |

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

**Dear Muhammad,** your Lab 11 submission demonstrates a clear understanding of friend functions and static members in C++.

<br>

---
---

<br>

# Lab 12 Evaluation Report (Pure Virtual Functions & Abstract Classes)

**Student Roll Number:** 2025-SE-03
**Student Name:** Muhammad Zain Mughal
**Task Folder Location:** `LAB 11 AND 12\Pure Abstract Functions  Abstract Classes\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Abstract Base Class & Pure Virtual Function** | 3 | **3** | Excellent. HospitalStaff base abstract class properly constructed with pure virtual function. |
| **Derived Classes & Function Overriding** | 3 | **3** | Excellent. Derived classes Doctor, Nurse, and Receptionist properly call base constructor and override performDuty(). |
| **Object Creation & Polymorphic Call** | 3 | **3** | Excellent. Object instantiation and method execution demonstrated in main(). |
| **Execution, Output & Clean Compilation** | 3 | **3** | Excellent. Standalone file compiling cleanly with zero warnings/errors. |

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

**Dear Muhammad,** your Lab 12 submission demonstrates an excellent understanding of abstract classes and pure virtual functions in C++.

<br>

---
---

<br>

# Lab 13 Evaluation Report (C++ Templates)

**Student Roll Number:** 2025-SE-03
**Student Name:** Muhammad Zain Mughal
**Task Folder Location:** `LAB 13\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Function Templates (`printTwice` & `findMin`)** | 3 | **3** | Excellent. Proper function templates with template <typename T>, void and T return types, and correct comparison logic. |
| **Required Type Testing & Results** | 3 | **3** | Excellent. All required types (int, double, string and int, double, char) are tested and printed cleanly. |
| **Class Templates (`Pair<T>` & `Calculator<T>`)** | 3 | **3** | Excellent. Pair<T> and Calculator<T> class templates are correctly constructed with getters and arithmetic functions. |
| **Object Creation, `main()` Usage & Execution** | 3 | **3** | Excellent. Standalone files with clean compilation, execution, and accompanying README documentation. |

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

**Dear Muhammad,** your Lab 13 submission demonstrates a strong understanding of generic programming, function templates, and class templates in C++.

<br>

---
---

<br>

# Lab 14 Evaluation Report (In-Class Lab: Vehicle Rental System)

**Student Roll Number:** 2025-SE-03  
**Student Name:** Muhammad Zain Mughal  
**Task Folder Location:** `Open handed Lab\Complete project ready to run\`  

---

### 📊 **Evaluation Rubric & Score Sheet (Max 48 Marks)**

| **Criterion** | **Weight** | **Raw Score (1–4)** | **Weighted Marks** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :---: | :--- |
| **OOP Design** | x 4 | **4** / 4 | **16 / 16** | **Excellent.** Abstract base class `Vehicle` with pure virtual methods (`virtual double calculateCost(int days)=0;`, `virtual void display()=0;`) and virtual destructor. `Car`, `Motorbike`, and `Truck` properly inherit and implement type-specific pricing modifiers (+20% surcharge on Trucks, -10% discount on Motorbikes > 7 days). Polymorphic dispatch in `Rental` constructor dynamically computes the correct costs. |
| **Design Justification** | x 3 | **2** / 4 | **6 / 12** | **Developing.** Clean architecture in code, but the standalone written `DesignNote.txt` file explicitly answering the design questions (Section 4b) was omitted. |
| **Encapsulation & Responsibility** | x 2 | **4** / 4 | **8 / 8** | **Excellent.** Flawless encapsulation and responsibility separation across `Vehicle`, `Customer`, `Rental`, and `RentalSystem` classes with proper destructor memory cleanup in `RentalSystem`. |
| **Working Demo** | x 2 | **4** / 4 | **8 / 8** | **Excellent.** Compiles cleanly with zero errors under C++17. Features a full interactive menu-driven interface enabling dynamic vehicle creation, customer registration, rental assignment, vehicle return, and complete summary reporting. |
| **Code Quality** | x 1 | **4** / 4 | **4 / 4** | **Excellent.** Professional modular structure with header/source split across all classes, header guards, consistent naming, and clear formatting. |

---

### 📈 **Summary of Results**

* **Weighted Total Marks:** **42 / 48 (87.5%)**
* **Grade Status:** **Passed (Excellent)**
* **Plagiarism Penalty:** **0 Marks** (Independent individual submission)

---

### 💬 **Overall Teacher Remarks**

**Dear Muhammad Zain,** your Lab 14 submission demonstrates an outstanding understanding of object-oriented system design, modular multi-file architecture, and interactive CLI development. Excellent work.
