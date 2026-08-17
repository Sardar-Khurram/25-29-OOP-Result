# Object-Oriented Programming — Consolidated Evaluation Report

**Student Name:** Syeda Mariam Gillani  
**Roll Number:** `2025-SE-01`  
**Total Maximum Marks:** 210  
**Total Obtained Marks:** 118.5 / 210 (56.43%)  
**Total Excluding Plagiarism:** 124.5 / 210 (59.29%)  

---

### 📊 **Student Grand Total Result Table**

| Lab Number | Total Marks | Obtained Marks | Excluding Plagarism | Status / Notes |
| :--- | :---: | :---: | :---: | :--- |
| Lab  1 | 12 | 12 | 12 | Submitted |
| Lab  2 | 12 | 12 | 12 | Submitted |
| Lab  3 | 18 | 17.5 | 17.5 | Submitted |
| Lab  4 | 12 | 9 | 12 | Submitted (Plag Penalty: -3) |
| Lab  5 | 12 | 9 | 12 | Submitted (Plag Penalty: -3) |
| Lab  6 | 12 | 11 | 11 | Submitted |
| Lab  7 | 12 | 12 | 12 | Submitted |
| Lab  8 | 12 | 12 | 12 | Submitted |
| Lab  9 | 12 | 12 | 12 | Submitted |
| Lab 10 | 12 | 12 | 12 | Submitted |
| Lab 11 | 12 | 0 | 0 | Absent / Missing |
| Lab 12 | 12 | 0 | 0 | Absent / Missing |
| Lab 13 | 12 | 0 | 0 | Absent / Missing |
| Lab 14 | 48 | 0 | 0 | Absent / Missing |
| **Grand Total** | **210** | **118.5** | **124.5** | **Percentage: 56.43% (Excl. Plag: 59.29%)** |

---


<br>

---
---

<br>

# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-01
**Student Name:** Syeda Mariam Gillani
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                             |
| :----------------------------------------- | :-----------: | :----------------: | :--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **3**       | **Excellent.** `Student` structure correctly contains `firstName`, `lastName`, `rollNo`, and `marks`. `displayStudentInfo()` correctly displays the student's full name and marks. Task 1 also correctly creates a structure variable and assigns values.        |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** Task 2 correctly uses an array of `Student` structures, accepts the number of students and their details through user input, and calls `displayStudentInfo()` for every student.                                                                  |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** Task 3 correctly uses dynamically allocated `Student` structures with `new Student[n]`, accesses members through structure pointers using `->`, calls `displayStudentInfo()` through the pointer, and properly releases memory using `delete[]`.  |
| **Input, Output & Execution**              |       3       |        **3**       | **Excellent.** All three submitted C++ files compile successfully with C++17. Tasks 2 and 3 correctly accept student information and display the required information. Task 1 also produces the required student name and marks output.                          |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **12 / 12 (100.0%)**
* **Grade Status:** **Excellent**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> The submitted files were evaluated against the Lab 1 requirements and no comparison submission was provided in the supplied materials, so a 100% code-match determination cannot be made from the available evidence. The Lab 1 policy specifies a **-3 mark penalty** when code is found to be 100% identical to another student's submission. 

---

### 💬 **Overall Teacher Remarks**

**Dear Syeda,** your Lab 1 submission demonstrates a strong understanding of **structures, arrays of structures, structure pointers, and dynamic memory allocation**. All three tasks satisfy the required functionality, and the programs compile successfully.

Particularly, Task 3 demonstrates good practical understanding by dynamically allocating an array of structures, accessing members through pointers, invoking the member function through the pointer, and correctly freeing the allocated memory with `delete[]`. 

**Overall performance: Excellent — 12/12.**

<br>

---
---

<br>

# Lab 2 Evaluation Report (All Tasks)
**Student Roll Number:** 2025-SE-01  
**Student Name:** Syeda Mariam Gillani

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** All 5 tasks are correctly structured. Each task separates the class declaration into a `.h` header file (utilizing proper preprocessor guards) and tests the functionality in a corresponding `.cpp` source file. Objects are instantiated correctly in the main functions (e.g., `Student mariam`, `Rectangle x`, `Voter v1`, `Temperature t1`, `Calculator c1`) with proper syntax. |
| **Member Variables** | 3 | **3** | **Excellent.** All required data members/attributes across the 5 tasks are defined clearly with correct C++ data types (such as `string name`, `int rollNumber`, `float marks` in Task 1; `int length`, `int width` in Task 2; `string name`, `int age` in Task 3; `float celsiusTemp`, `float fahrenheit` in Task 4; and `float num1`, `float num2` in Task 5). |
| **Member Functions (Inside/Outside)** | 3 | **3** | **Excellent.** You have followed the interface instructions precisely: <br>1. **Inside Class:** Functions are defined inside the class where requested (Task 1: `getData()`, `displayData()`; Task 5: math operations). <br>2. **Outside Class:** Functions are correctly declared inside the class and defined outside using the scope resolution operator `::` (Task 2: `setDimension()`, `area()`, `perimeter()`; Task 3: `isEligible()`). <br>3. **Logic:** The voter check (`age > 18`) aligns exactly with the requirements of Task 3. |
| **Input/Output & Execution** | 3 | **3** | **Excellent.** All 5 C++ tasks compile successfully using `g++` and run without runtime errors. The console output prompts are clear and informative, and the calculations (such as area, perimeter, temperature conversions, and arithmetic operations) are correct. |

---

### **Summary of Results**
* **Total Marks:** **12 / 12** (100%)
* **Grade Status:** **Excellent (Full Marks)**

### **Overall Teacher Remarks**
Dear Syeda Mariam,
Outstanding performance on Lab 2! You have successfully completed all 5 tasks. Your file organization is highly professional, separating class interface definitions in `.h` files from client code in `.cpp` files. 

Your code compiles cleanly, runs correctly, and perfectly matches the structural requirements of each task (defining functions inside or outside the class as requested). The input/output interaction is user-friendly and well-formatted. Keep up the excellent work!

<br>

---
---

<br>

# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-01  
**Student Name:** Syeda Mariam Gillani
**Task Folder Location:** `Lab-03\product.h & product.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | Excellent. `Product` class is properly defined in `product.h` with header guards (`#ifndef PRODUCT_H`). |
| **Member Variables** | 3 | **3** | Excellent. Attributes (`name`, `price`, `quantity`) declared under `private:` access specifier. |
| **Member Functions (Inside/Outside)** | 3 | **3** | Excellent. Inline methods implement proper validation logic (`!n.empty()`, `p > 0`, `q >= 0`). |
| **Use of Access Specifiers** | 3 | **3** | Excellent. Encapsulation strictly enforced with private attributes and public methods. |
| **Use of Getters/Setters** | 3 | **3** | Excellent. Setters print validation error messages when invalid data is provided. |
| **Input/Output & Execution** | 3 | **2.5** | Very Good. Test driver in `product.cpp` tests invalid inputs first, then valid values. <br>*Minor Note (-0.5):* `#include "product.h"` placed before `using namespace std;` on line 4, and `setprecision(2)` used without `#include <iomanip>`. |

---

### 📈 **Summary of Results**
* **Total Marks:** **17.5 / 18 (97.2%)**
* **Grade Status:** **Excellent**

### 💬 **Overall Teacher Remarks**
Dear Syeda Mariam, Outstanding job! Your encapsulation logic and setter input validation are 100% correct. Placing `using namespace std;` inside `product.h` (or above line 2 in `product.cpp`) and adding `#include <iomanip>` resolves compilation instantly. Excellent work!

<br>

---
---

<br>

# Lab 4 Evaluation Report (Constructors & Destructors)
**Student Roll Number:** 2025-SE-01  
**Student Name:** Syeda Mariam Gillani
**Task Folder Location:** `Lab-04\Task-01.cpp` to `Task-04.cpp`  

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
* **Plagiarism Penalty:** **-3 Marks** *(100% identical code match with student `2025-SE-02`)*
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Plagiarism Penalty (-3)**

---

### ⚠️ **Plagiarism Audit Detail**
> [!WARNING]
> Manual inspection detected a **100% character-for-character code match** across all 4 tasks between your `Lab-04` files and student `2025-SE-02` (Shahnza Munir)'s submission files. Per course policy, a flat **-3 marks penalty** has been applied to both submissions.

### 💬 **Overall Teacher Remarks**
Dear Syeda Mariam, Your core implementation is fully working, but please write your code independently. Duplicate submissions result in heavy plagiarism penalties.

<br>

---
---

<br>

# Lab 5 Evaluation Report (Inheritance)

**Student Roll Number:** 2025-SE-01
**Student Name:** Syeda Mariam Gillani
**Task Folder Location:** `Lab-05\`

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
> Tasks 1, 2, and 4 are 100% identical matches with student `2025-SE-21` (Noor Fatima Kiani).

---

### 💬 **Overall Teacher Remarks**

**Dear Syeda,** your Lab 5 submission structurally demonstrates an excellent understanding of single, multilevel, hierarchical, and multiple inheritance in C++. 
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 6 Evaluation Report (Constructor Chaining & Destructors)

**Student Roll Number:** 2025-SE-01
**Student Name:** Syeda Mariam Gillani
**Task Folder Location:** `Lab-06\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor & Inheritance Implementation** | 3 | **3** | Excellent. Clean implementation of constructor chaining and multilevel constructor prints showing call sequence. |
| **Destructor & Memory Management** | 3 | **3** | Excellent. Correct destructor implementations in Task 3 and Task 4. |
| **Classes, Attributes & Object Functionality** | 3 | **2** | Good. Deducted 1 mark under Object Creation & Functionality because Task 4 was tested using static/stack allocation in main() instead of using new and delete pointers as requested by the task prompt. |
| **Input, Output & Execution** | 3 | **3** | Excellent. All files compile and execute cleanly. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **11 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **11 / 12 (91.7%)**
* **Grade Status:** **Passed (Excellent)**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> No similarity matches found.

---

### 💬 **Overall Teacher Remarks**

**Dear Syeda,** your Lab 6 submission demonstrates your understanding of constructor chaining and destructors in C++.

<br>

---
---

<br>

# Lab 7 Evaluation Report (Composition & Aggregation)

**Student Roll Number:** 2025-SE-01
**Student Name:** Syeda Mariam Gillani
**Task Folder Location:** `Lab-07\`

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
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **12 / 12 (100.0%)**
* **Grade Status:** **Passed (Excellent)**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> No similarity matches found.

---

### 💬 **Overall Teacher Remarks**

**Dear Syeda,** your Lab 7 submission demonstrates your understanding of composition (strong ownership) and aggregation (shared references) in C++.

<br>

---
---

<br>

# Lab 8 Evaluation Report (Polymorphism & Virtual Functions)

**Student Roll Number:** 2025-SE-01
**Student Name:** Syeda Mariam Gillani
**Task Folder Location:** `Lab-08\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Polymorphism & Virtual Function** | 3 | **3** | Excellent. Virtual double area() defined in base Shape and properly overridden in Rectangle and Circle. |
| **Derived Classes & Area Calculation** | 3 | **3** | Excellent. Accurate area calculation for both Rectangle and Circle. |
| **Shape Pointer & Object Access** | 3 | **3** | Excellent. Shape* base pointer dynamically allocates and accesses derived shape instances on heap. |
| **Object Creation, Output & Execution** | 3 | **3** | Excellent. Clean compilation and runtime execution. |

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

**Dear Syeda,** your Lab 8 submission demonstrates your understanding of runtime polymorphism and virtual functions in C++.

<br>

---
---

<br>

# Lab 9 Evaluation Report (Operator Overloading ==)

**Student Roll Number:** 2025-SE-01
**Student Name:** Syeda Mariam Gillani
**Task Folder Location:** `Lab-09\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Data Members** | 3 | **3** | Excellent. Distance class encapsulates private feet and inches data members. |
| **Constructor Implementation** | 3 | **3** | Excellent. Parameterized constructor correctly initializes dimensions. |
| **`==` Operator Overloading** | 3 | **3** | Excellent. bool operator==(Distance d2) overloaded as a member function. |
| **Object Usage, Output & Execution** | 3 | **3** | Excellent. Objects created and compared via if-else; compiles and executes cleanly. |

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

**Dear Syeda,** your Lab 9 submission demonstrates your understanding of C++ operator overloading and member function comparison.

<br>

---
---

<br>

# Lab 10 Evaluation Report (File Handling in C++)

**Student Roll Number:** 2025-SE-01
**Student Name:** Syeda Mariam Gillani
**Task Folder Location:** `Lab-10\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **File Creation & Writing** | 3 | **3** | Excellent. notes.txt and students.txt created and written using ofstream properly. |
| **File Reading & Content Display** | 3 | **3** | Excellent. Clean reading loops using ifstream and getline with console display. |
| **Line Counting & File Appending/Copying** | 3 | **3** | Excellent. Line counting, ios::app append mode, and file copying to copy.txt all correctly implemented. |
| **File Handling, Execution & Output** | 3 | **3** | Excellent. All 4 programs compile cleanly and execute properly. |

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

**Dear Syeda,** your Lab 10 submission demonstrates your understanding of C++ file stream handling, reading, writing, and resource management.

<br>

---
---

<br>

# Lab 11 Evaluation Report (Friend Functions & Static Members)

**Student Roll Number:** 2025-SE-01
**Student Name:** Syeda Mariam Gillani
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

**Dear Syeda,** your Lab 11 submission is missing from your repository. Please upload your complete Lab 11 tasks to receive evaluation.

<br>

---
---

<br>

# Lab 12 Evaluation Report (Pure Virtual Functions & Abstract Classes)

**Student Roll Number:** 2025-SE-01
**Student Name:** Syeda Mariam Gillani
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

**Dear Syeda,** your Lab 12 submission is missing from your repository. Please upload your complete Lab 12 tasks to receive evaluation.

<br>

---
---

<br>

# Lab 13 Evaluation Report (C++ Templates)

**Student Roll Number:** 2025-SE-01
**Student Name:** Syeda Mariam Gillani
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

**Dear Syeda,** your Lab 13 submission is missing from your repository. Please upload your complete Lab 13 Templates tasks to receive evaluation.

<br>

---
---

<br>

# Lab 14 Evaluation Report (In-Class Lab: Vehicle Rental System)

**Student Roll Number:** 2025-SE-01  
**Student Name:** Syeda Mariam Gillani  
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

**Dear Syeda,** your Lab 14 (Vehicle Rental System) submission is missing from your repository. Please upload your complete Lab 14 files to receive evaluation.
