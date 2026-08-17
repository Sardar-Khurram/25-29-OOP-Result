# Object-Oriented Programming — Consolidated Evaluation Report

**Student Name:** Ali Zain-Ul-Abdin  
**Roll Number:** `2025-SE-05`  
**Total Maximum Marks:** 210  
**Total Obtained Marks:** 111 / 210 (52.86%)  
**Total Excluding Plagiarism:** 123 / 210 (58.57%)  

---

### 📊 **Student Grand Total Result Table**

| Lab Number | Total Marks | Obtained Marks | Excluding Plagarism | Status / Notes |
| :--- | :---: | :---: | :---: | :--- |
| Lab  1 | 12 | 12 | 12 | Submitted |
| Lab  2 | 12 | 10 | 10 | Submitted |
| Lab  3 | 18 | 17 | 17 | Submitted |
| Lab  4 | 12 | 9 | 12 | Submitted (Plag Penalty: -3) |
| Lab  5 | 12 | 9 | 12 | Submitted (Plag Penalty: -3) |
| Lab  6 | 12 | 9 | 12 | Submitted (Plag Penalty: -3) |
| Lab  7 | 12 | 9 | 12 | Submitted (Plag Penalty: -3) |
| Lab  8 | 12 | 12 | 12 | Submitted |
| Lab  9 | 12 | 12 | 12 | Submitted |
| Lab 10 | 12 | 12 | 12 | Submitted |
| Lab 11 | 12 | 0 | 0 | Absent / Missing |
| Lab 12 | 12 | 0 | 0 | Absent / Missing |
| Lab 13 | 12 | 0 | 0 | Absent / Missing |
| Lab 14 | 48 | 0 | 0 | Absent / Missing |
| **Grand Total** | **210** | **111** | **123** | **Percentage: 52.86% (Excl. Plag: 58.57%)** |

---


<br>

---
---

<br>

# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-05
**Student Name:** Ali Zain-Ul-Abdin
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                         |
| :----------------------------------------- | :-----------: | :----------------: | :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **3**       | **Excellent.** Task 1 correctly defines the `Student` structure with first name, last name, marks, and an additional `Age` field. The `displayStudentInfo()` function correctly displays the student's full name and marks. Structure variables are created, assigned values, and the member function is called successfully. The additional age display does not interfere with the required functionality. |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** Task 2 correctly creates an array of `Student` structures, accepts student details through user input, and uses a loop to call `displayStudentInfo()` for each student. The required full name and marks are displayed for each record.                                                                                                                                                       |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** Task 3 correctly declares structure pointers (`ptr1` and `ptr2`), uses the `->` operator to assign values to the structure members, and calls `displayStudentInfo()` through the pointers. This satisfies the required pointer-based structure access.                                                                                                                                        |
| **Input, Output & Execution**              |       3       |        **3**       | **Excellent.** All three tasks contain valid C++ structure implementations and the required program flow. Task 1 and Task 3 assign values and display records, while Task 2 accepts student information through user input and displays the results.                                                                                                                                                         |

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

**Dear Ali,** your Lab 1 submission demonstrates an **excellent understanding of structures, arrays of structures, and structure pointers**. All three tasks satisfy the core requirements of the lab.

Task 1 correctly defines the structure and member function, while Task 2 demonstrates storing and processing multiple student records through an array of structures. Task 3 correctly demonstrates pointer-based member access using the `->` operator and calls the member function through the structure pointers.

You have also included an additional `Age` field and display it in your programs. Although `Age` was not required by the task, it does not negatively affect the required functionality.

**Overall performance: Excellent — 12/12.**

<br>

---
---

<br>

# Lab 2 Evaluation Report (All Tasks)
**Student Roll Number:** 2025-SE-05  
**Student Name:** Ali Zain-Ul-Abdin

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** Correct class structure. Header files are organized cleanly with proper include guards. Objects are instantiated properly (including instantiating two objects, `s1` and `s2`, in Task 1). |
| **Member Variables** | 3 | **3** | **Excellent.** attributes are clearly defined with correct C++ data types. Temperature values in Task 4 are correctly defined as `float` (which avoids integer division issues). |
| **Member Functions (Inside/Outside)** | 3 | **2** | **Good.** Method locations follow instructions (inline vs outline). Excellent logical check for voter eligibility (`age > 18`) and double-object output display in Task 1. <br><br> *Deduction Reasons:* <br>1. **Task 2 (Rectangle):** The functions are named `input()`, `displayArea()`, and `displayPerimeter()` instead of the requested names (`setDimensions()`, `area()`, `perimeter()`). Also, `displayArea()` and `displayPerimeter()` return `void` instead of returning the calculations. <br>2. **Task 5 (Calculator):** In `header5.h`, the function `divide()` is defined to return `float`, but it does not return a value in the `else` block (division by zero). This causes compiler warnings: <br>`warning: control reaches end of non-void function [-Wreturn-type]`. |
| **Input/Output & Execution** | 3 | **3** | **Excellent.** All 5 tasks compile and execute successfully. Prompts are clean and easy to follow. The inclusion of a `do-while` loop in the calculator driver (`Project 05.cpp`) to allow multiple operations is a great usability enhancement! |

---

### **Summary of Results**
* **Total Marks:** **11 / 12** (91.7%)
* **Grade Status:** **Passed with feedback**

### **Overall Teacher Remarks**
Dear Ali Zain-Ul-Abdin,
Outstanding work! Your files are structured very neatly, and your custom Roman Urdu comments show that you put individual thought and effort into this assignment. 

All of your files compile and run successfully. The only minor things to watch out for are:
1. Try to strictly match the requested function names (like `setDimensions()`, `area()`, `perimeter()`) instead of creating your own.
2. In C++, non-void functions must always return a value in all code branches. A missing `return` statement in the `else` block of `Calculator::divide()` triggers compiler warnings. Returning `0` or another sentinel value in the error branch will fix this. Keep up the excellent work!

<br>

---
---

<br>

# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-05  
**Student Name:** Ali Zain-Ul-Abdin
**Task Folder Location:** `LAB 03\product.h & main.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** Modular `product.h` interface with guards (`#ifndef PRODUCT_H`) and `main.cpp` driver. |
| **Member Variables** | 3 | **3** | **Excellent.** All 3 attributes (`name`, `price`, `quantity`) declared under `private:` access specifier with correct data types. |
| **Member Functions (Inside/Outside)** | 3 | **2** | **Good.** Setters validate `!n.empty()`, `p > 0`, `q >= 0` with clear warning messages. <br>*Deduction (-1 mark):* Used all-lowercase method names (`setname`, `setprice`, `setquantity`, `getname`, `getprice`, `getquantity`) instead of standard camelCase (`setName`, `setPrice`, `setQuantity`). |
| **Use of Access Specifiers** | 3 | **3** | **Excellent.** Encapsulation is strictly enforced. |
| **Use of Getters/Setters** | 3 | **3** | **Excellent.** Getters and setters fully functional. |
| **Input/Output & Execution** | 3 | **3** | **Excellent.** Compiles 100% cleanly with `g++` and executes test cases without issues. |

---

### 📈 **Summary of Results**
* **Total Marks:** **17 / 18 (94.4%)**
* **Grade Status:** **Excellent**

### 💬 **Overall Teacher Remarks**
Dear Ali Zain, Great work on Lab 3! Your `Product` class in `LAB 03\product.h` is clean, robust, and handles input validation gracefully. Follow standard C++ camelCase naming conventions (`setName`, `setPrice`, `setQuantity`) in future labs. Keep it up!

<br>

---
---

<br>

# Lab 4 Evaluation Report (Constructors & Destructors)
**Student Roll Number:** 2025-SE-05  
**Student Name:** Ali Zain-Ul-Abdin
**Task Folder Location:** `LAB 04\Task 1.cpp` to `Task 4.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor Implementation** | 3 | **3** | **Excellent.** Task 1 default constructor initializes `id=0`, `name="Not Assigned"`, `salary=0.0`. Task 2 parameterized constructor uses `this->` pointer to initialize banking attributes cleanly. |
| **Constructor Overloading** | 3 | **3** | **Excellent.** Task 3 `Rectangle` class overloads default (1.0), 2-parameter (`length`, `width`), and 1-parameter (square) constructors with area calculation. |
| **Destructor & Object Management** | 3 | **3** | **Excellent.** Task 4 `Locker` class destructor prints deallocation message. Demonstrates both scoped stack allocation `{}` and dynamic heap allocation via `new`/`delete`. |
| **Output & Execution** | 3 | **3** | **Excellent.** All 4 C++ files compile 100% cleanly with `g++` and present beautifully styled output borders. |

---

### 📈 **Summary of Results**
* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **-3 Marks** *(100% identical code match with student `2024-SE-18`)*
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Plagiarism Penalty (-3)**

---

### ⚠️ **Plagiarism Audit Detail**
> [!WARNING]
> Manual inspection detected a **100% character-for-character code match** across Tasks 2, 3, and 4 between your `LAB 04` files and student `2024-SE-18` (Syed Abdul Rehman)'s submission files. Per course policy, a flat **-3 marks penalty** has been applied to both submissions.

### 💬 **Overall Teacher Remarks**
Dear Ali Zain-Ul-Abdin, Your core implementation is fully working, but please write your code independently. Duplicate submissions result in heavy plagiarism penalties.

<br>

---
---

<br>

# Lab 5 Evaluation Report (Inheritance)

**Student Roll Number:** 2025-SE-05
**Student Name:** Ali Zain-Ul-Abdin
**Task Folder Location:** `LAB 05\`

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
* **Plagiarism Penalty:** **-3 Marks**
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Passed**

---

### ⚠️ **Plagiarism Audit Detail**

> **Plagiarism Penalty of **-3 marks** applied.**
> Tasks 1, 2, and 4 are 100% identical matches with `2024-SE-18` (Syed Abdul Rehman) and `2024-SE-27` (Muhammad Arslan).

---

### 💬 **Overall Teacher Remarks**

**Dear Ali,** your Lab 5 submission structurally demonstrates an excellent understanding of single, multilevel, hierarchical, and multiple inheritance in C++. 
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 6 Evaluation Report (Constructor Chaining & Destructors)

**Student Roll Number:** 2025-SE-05
**Student Name:** Ali Zain-Ul-Abdin
**Task Folder Location:** `LAB 06\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor & Inheritance Implementation** | 3 | **3** | Excellent. Correct constructor chaining and execution order demonstration. |
| **Destructor & Memory Management** | 3 | **3** | Excellent. Correct destructor implementation, virtual destructors, and memory releasing. |
| **Classes, Attributes & Object Functionality** | 3 | **3** | Excellent. Required attributes and classes correctly defined. |
| **Input, Output & Execution** | 3 | **3** | Excellent. Compiles and executes successfully. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **-3 Marks**
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Passed (Good)**

---

### ⚠️ **Plagiarism Audit Detail**

> **Plagiarism Penalty of **-3 marks** applied.**
> All 4 task files are 100% identical copy-matches (excluding spacing/comments) with student `2024-SE-18` (Syed Abdul Rehman) and `2024-SE-27` (Muhammad Arslan).

---

### 💬 **Overall Teacher Remarks**

**Dear Ali,** your Lab 6 submission demonstrates your understanding of constructor chaining and destructors in C++.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 7 Evaluation Report (Composition & Aggregation)

**Student Roll Number:** 2025-SE-05
**Student Name:** Ali Zain-Ul-Abdin
**Task Folder Location:** `LAB 07\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Composition & Object Ownership** | 3 | **3** | Excellent. Proper composition with Calculator owning Display object. |
| **Aggregation & Shared Object Usage** | 3 | **3** | Excellent. Proper aggregation with shared Calculator referenced by Student objects. |
| **Classes, Functions & Data Management** | 3 | **3** | Excellent. Arithmetic methods and lastResult management correctly written. |
| **Object Creation, Output & Execution** | 3 | **3** | Excellent. Both files compile and execute cleanly. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **-3 Marks**
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Passed (Good)**

---

### ⚠️ **Plagiarism Audit Detail**

> **Plagiarism Penalty of **-3 marks** applied.**
> Both task files are 100% identical copy-matches (excluding spacing/comments) with students `2024-SE-18`, `2024-SE-27`, and `2025-SE-31`.

---

### 💬 **Overall Teacher Remarks**

**Dear Ali,** your Lab 7 submission demonstrates your understanding of composition (strong ownership) and aggregation (shared references) in C++.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 8 Evaluation Report (Polymorphism & Virtual Functions)

**Student Roll Number:** 2025-SE-05
**Student Name:** Ali Zain-Ul-Abdin
**Task Folder Location:** `LAB 08\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Polymorphism & Virtual Function** | 3 | **3** | Excellent. Base Shape defines virtual double Area() and derived classes properly override it. |
| **Derived Classes & Area Calculation** | 3 | **3** | Excellent. Derived classes Rectangle and Circle accurately compute their areas. |
| **Shape Pointer & Object Access** | 3 | **3** | Excellent. Base pointer Shape* is used to reference objects and call Area() dynamically at runtime. |
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

**Dear Ali,** your Lab 8 submission demonstrates your understanding of runtime polymorphism and virtual functions in C++.

<br>

---
---

<br>

# Lab 9 Evaluation Report (Operator Overloading ==)

**Student Roll Number:** 2025-SE-05
**Student Name:** Ali Zain-Ul-Abdin
**Task Folder Location:** `LAB 09\`

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

**Dear Ali,** your Lab 9 submission demonstrates your understanding of C++ operator overloading and member function comparison.

<br>

---
---

<br>

# Lab 10 Evaluation Report (File Handling in C++)

**Student Roll Number:** 2025-SE-05
**Student Name:** Ali Zain-Ul-Abdin
**Task Folder Location:** `LAB 10\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **File Creation & Writing** | 3 | **3** | Excellent. notes.txt and students.txt correctly created and populated. |
| **File Reading & Content Display** | 3 | **3** | Excellent. ifstream reading and clean output display implemented properly. |
| **Line Counting & File Appending/Copying** | 3 | **3** | Excellent. Line counting, append mode, and stream copying to copy.txt all correctly implemented. |
| **File Handling, Execution & Output** | 3 | **3** | Excellent. All 4 programs compile cleanly and execute flawlessly. |

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

**Dear Ali,** your Lab 10 submission demonstrates your understanding of C++ file stream handling, reading, writing, and resource management.

<br>

---
---

<br>

# Lab 11 Evaluation Report (Friend Functions & Static Members)

**Student Roll Number:** 2025-SE-05
**Student Name:** Ali Zain-Ul-Abdin
**Task Folder Location:** `N/A`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Friend Function Implementation** | 3 | **0** | Absent. |
| **Static Data Member Implementation** | 3 | **0** | Absent. |
| **Static Member Function & Shared Data** | 3 | **0** | Absent. |
| **Object Creation, Output & Execution** | 3 | **0** | Absent. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **0 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **0 / 12 (0.0%)**
* **Grade Status:** **Absent / Empty Task Folder**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> No code submitted.

---

### 💬 **Overall Teacher Remarks**

**Dear Ali,** your Lab 11 submission is missing from your repository. Please upload your complete Lab 11 tasks to receive evaluation.

<br>

---
---

<br>

# Lab 12 Evaluation Report (Pure Virtual Functions & Abstract Classes)

**Student Roll Number:** 2025-SE-05
**Student Name:** Ali Zain-Ul-Abdin
**Task Folder Location:** `N/A`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Abstract Base Class & Pure Virtual Function** | 3 | **0** | Absent. |
| **Derived Classes & Function Overriding** | 3 | **0** | Absent. |
| **Object Creation & Polymorphic Call** | 3 | **0** | Absent. |
| **Execution, Output & Clean Compilation** | 3 | **0** | Absent. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **0 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **0 / 12 (0.0%)**
* **Grade Status:** **Absent / Empty Task Folder**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> No code submitted.

---

### 💬 **Overall Teacher Remarks**

**Dear Ali,** your Lab 12 submission is missing from your repository. Please upload your complete Lab 12 tasks to receive evaluation.

<br>

---
---

<br>

# Lab 13 Evaluation Report (C++ Templates)

**Student Roll Number:** 2025-SE-05
**Student Name:** Ali Zain-Ul-Abdin
**Task Folder Location:** `N/A`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Function Templates (`printTwice` & `findMin`)** | 3 | **0** | Absent. |
| **Required Type Testing & Results** | 3 | **0** | Absent. |
| **Class Templates (`Pair<T>` & `Calculator<T>`)** | 3 | **0** | Absent. |
| **Object Creation, `main()` Usage & Execution** | 3 | **0** | Absent. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **0 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **0 / 12 (0.0%)**
* **Grade Status:** **Absent / Empty Task Folder**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> No code submitted.

---

### 💬 **Overall Teacher Remarks**

**Dear Ali,** your Lab 13 submission is missing from your repository. Please upload your complete Lab 13 Templates tasks to receive evaluation.

<br>

---
---

<br>

# Lab 14 Evaluation Report (In-Class Lab: Vehicle Rental System)

**Student Roll Number:** 2025-SE-05  
**Student Name:** Ali Zain-Ul-Abdin  
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

**Dear Ali,** your Lab 14 (Vehicle Rental System) submission is missing from your repository. Please upload your complete Lab 14 files to receive evaluation.
