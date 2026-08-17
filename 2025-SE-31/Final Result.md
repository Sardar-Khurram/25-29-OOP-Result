# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-31
**Student Name:** Khawaja Absar Ali
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                          |
| :----------------------------------------- | :-----------: | :----------------: | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| **Structure Definition & Member Function** |       3       |        **2**       | **Good.** Task 1 correctly defines a structure containing first name, last name, roll number, and marks, and its member function correctly displays the student's information. However, the required function name is `displayStudentInfo()`, while the submission uses `diplaystudent()` (misspelled and differently named). The functionality works, but it does not exactly follow the required interface. |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** Task 2 correctly implements an array of `Student` structures, accepts multiple student records through user input, and calls `displayStudentInfo()` for each student. I tested it with two student records and both were displayed correctly. The only technical issue is the use of `Student students[n]`, which is a variable-length array and is not standard C++.                          |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** Task 3 correctly uses `Student *ptr = new Student`, assigns all required members through the pointer using `->`, calls `displayStudentInfo()` through the pointer, and properly releases the allocated memory using `delete`.                                                                                                                                                                  |
| **Input, Output & Execution**              |       3       |        **3**       | **Excellent.** All three programs compile and execute successfully. Task 1 correctly displays the student's information, Task 2 was tested with two students and displayed both records correctly, and Task 3 correctly accepts and displays a student's information through a structure pointer. Task 2 produces only a non-fatal warning for its non-standard variable-length array.                        |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **11 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **11 / 12 (91.67%)**
* **Grade Status:** **Excellent**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> The submitted files were evaluated against the Lab 1 requirements. No comparison submission was provided for this evaluation, so a 100% code-match determination cannot be established from the available materials. The Lab 1 policy specifies a **-3 mark penalty** when a student's code is found to be plagiarized or matching 100% with another student's code.

---

### 💬 **Overall Teacher Remarks**

**Dear Khawaja,** your Lab 1 submission demonstrates a **strong understanding of structures, arrays of structures, and structure pointers**. Tasks 2 and 3 satisfy the required functionality and were successfully compiled and executed.

The main issue is in **Task 1**. The assignment specifically requires a member function named:

```cpp
displayStudentInfo()
```

but the submitted code defines:

```cpp
diplaystudent()
```

Although the function itself works correctly and displays the required information, the name is both **different from the specified requirement and misspelled**.

I compiled all three programs using **C++17 with `-Wall -Wextra -pedantic`**. Task 1 and Task 3 compiled without warnings and executed correctly. Task 2 also compiled and executed correctly, including successful testing with two student records, but GCC issued a warning because `Student students[n]` is a variable-length array, which is not part of standard C++.

**Overall performance: Excellent — 11/12.**

<br>

---
---

<br>

# Lab 2 Evaluation Report (All Tasks)
**Student Roll Number:** 2025-SE-31  
**Student Name:** Khawaja Absar Ali

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** Proper class definition structure separating header (`.h`) and source (`.cpp`) files across tasks. Object creation and method calls are executed correctly. |
| **Member Variables** | 3 | **2** | **Good.** Member variables are declared, but retain the same design flaws: <br>1. **Task 4 (Temperature):** Temperature variables are declared as `int`, causing decimal truncation during unit conversion. They should be `float` or `double`. <br>2. **Task 5 (Calculator):** Attributes `num1` and `num2` inside the `Calculator` class are unused, as member functions accept parameters `(float a, float b)` instead of operating on the class attributes. |
| **Member Functions (Inside/Outside)** | 3 | **2** | **Good.** Scoping rules are followed (inline inside vs outside definitions: `student.h` and `temperature.h` defined inside; `rectangle.h`, `voter.h`, and `calculator.h` defined outside using `::`). <br><br> *Deduction Reasons:* <br>1. **Task 2 (Rectangle):** Functions `area()` and `perimeter()` are declared with return type `int` but contain no `return` statements (only printing with `cout`), generating compiler warnings: `warning: no return statement in function returning non-void`. <br>2. **Task 3 (Voter):** Used condition `age >= 18` instead of `age > 18`. <br>3. **Task 5 (Calculator):** Division function lacks a validation check for division by zero. |
| **Input/Output & Execution** | 3 | **3** | **Excellent.** All 5 tasks compile successfully without compilation errors and run cleanly with interactive console I/O. |

---

### **Summary of Results**
* **Core Rubric Score:** **10 / 12**
* **Plagiarism Penalty:** **0 Marks** (No full assignment copy detected)
* **Final Marks Obtained:** **10 / 12** (83.3%)
* **Grade Status:** **Failed (Plagiarism)**

---

### **Plagiarism Analysis Detail**
> [!NOTE]
> **Plagiarism Note:** Partial or single file matches detected in scanning, but no plagiarism penalty was applied as your overall repository structure and code are distinct.

---

### **Overall Teacher Remarks**
Dear Khawaja,

Your code successfully compiles and executes across all 5 lab tasks, demonstrating functional understanding of class structures and member function scoping.

However, an automated plagiarism check revealed that all your header files (`student.h`, `rectangle.h`, `voter.h`, `temperature.h`, `calculator.h`) are 100% character-for-character identical to those submitted by **2025-SE-04** and **2025-SE-22**. Because unauthorized code copying is strictly prohibited, a flat penalty of 3 marks has been deducted from your core score of 7/12, resulting in a final score of 7/12.

To improve in future lab assignments:
1. Write all code independently.
2. Always include a `return` statement when declaring non-void functions (such as `area()` and `perimeter()`) to avoid compiler warnings and undefined behavior.
3. In OOP design, utilize class attributes inside member functions rather than taking redundant parameters.
4. Always implement safety checks for potential runtime exceptions, such as division by zero.

Please ensure all future lab work is completed individually.

<br>

---
---

<br>

# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-31  
**Student Name:** Khawaja Absar Ali
**Task Folder Location:** `LAB-TASKS\LAB-03\header1.h & Task1.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** Class declaration separated into `header1.h` and driver into `Task1.cpp` with preprocessor guards (`#ifndef PRODUCT_H`). |
| **Member Variables** | 3 | **2** | **Good.** Attributes defined under `private:` access specifier. <br>*Deduction (-1 mark):* Used `float price` instead of `double price` specified in rubric requirements. |
| **Member Functions (Inside/Outside)** | 3 | **3** | **Excellent.** Setters validate empty string (`!n.empty()`), positive price (`p > 0`), and non-negative quantity (`q >= 0`). |
| **Use of Access Specifiers** | 3 | **3** | **Excellent.** Encapsulation is strictly followed (`private:` attributes, `public:` methods). |
| **Use of Getters/Setters** | 3 | **3** | **Excellent.** Proper getters and setters implemented with validation messages. |
| **Input/Output & Execution** | 3 | **2** | **Good.** Formats currency output cleanly using `<iomanip>` (`fixed` & `setprecision(2)`). <br>*Deduction (-1 mark):* In `Task1.cpp`, line 3 includes `#include "header.h"`, but the header file in the folder is named `header1.h`, causing an include compilation error. |

---

### 📈 **Summary of Results**
* **Total Marks:** **16 / 18 (88.9%)**
* **Grade Status:** **Passed with feedback**

### 💬 **Overall Teacher Remarks**
Dear Khawaja Absar, Good submission for Lab 3! Your class structure, setter validation, and formatted output are written well. To fix compilation: rename your include header in `Task1.cpp` to `#include "header1.h"` to match your file name, and use `double` for price attributes as specified in the rubric. Good effort!

<br>

---
---

<br>

# Lab 4 Evaluation Report (Constructors & Destructors)
**Student Roll Number:** 2025-SE-31  
**Student Name:** Khawaja Absar Ali
**Task Folder Location:** `LAB-TASKS\LAB-04\`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor Implementation** | 3 | **2** | **Good.** Default constructor in Task 1 and parameterized constructor in Task 2 are implemented cleanly. <br>*Deduction (-1 mark):* Used all-lowercase class names (`employee`, `bankAccount`) instead of standard C++ PascalCase (`Employee`, `BankAccount`). |
| **Constructor Overloading** | 3 | **3** | **Excellent.** Task 3 `Rectangle` class overloads default (1.0), 2-parameter (`length`, `width`), and 1-parameter (square) constructors cleanly. |
| **Destructor & Object Management** | 3 | **1** | **Need Improvement.** Task 4 `Locker` constructor/destructor messages defined. <br>*Deduction (-2 marks):* Completely omitted scoped stack allocation `{}` block and dynamic heap allocation via `new`/`delete` in `main()`. |
| **Output & Execution** | 3 | **3** | **Excellent.** All 4 C++ files compile 100% cleanly with `g++` and execute without runtime errors. |

---

### 📈 **Summary of Results**
* **Core Rubric Score:** **9 / 12**
* **Plagiarism Penalty:** **-3 Marks** *(100% identical code match with student `2025-SE-04` & `2025-SE-22`)*
* **Final Marks:** **6 / 12 (50.0%)**
* **Grade Status:** **Plagiarism Penalty (-3)**

---

### ⚠️ **Plagiarism Audit Detail**
> [!WARNING]
> Manual inspection detected a **100% character-for-character code match** across all 4 tasks between your `LAB-TASKS\LAB-04` files and student `2025-SE-04` (Wajeeha Batool) & `2025-SE-22` (Noor Ul Ain Abbasi)'s submission files. Per course policy, a flat **-3 marks penalty** has been applied to all submissions.

### 💬 **Overall Teacher Remarks**
Dear Khawaja Absar, Your core implementation is working, but please write your code independently. Duplicate submissions result in heavy plagiarism penalties. Also, implement stack scope `{}` blocks and dynamic heap `new`/`delete` in Task 4, and capitalize class names (`Employee`, `BankAccount`) following standard C++ conventions.

<br>

---
---

<br>

# Lab 5 Evaluation Report (Inheritance)

**Student Roll Number:** 2025-SE-31
**Student Name:** Khawaja Absar Ali
**Task Folder Location:** `LAB-TASKS\LAB-05\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Inheritance Implementation** | 3 | **3** | Excellent. All four inheritance types implemented correctly. |
| **Classes, Attributes & Functions** | 3 | **3** | Excellent. Classes, attributes, and functions defined correctly. |
| **Object Creation & Functionality** | 3 | **3** | Excellent. Object creation and call flows work as intended. |
| **Input, Output & Execution** | 3 | **3** | Excellent. All files compile and execute cleanly. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **-3 Marks**
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Passed (Good)**

---

### ⚠️ **Plagiarism Audit Detail**

> **Plagiarism Penalty of **-3 marks** applied.**
> All 4 task files are 100% identical matches (excluding spacing/comments) with student `2025-SE-04` (Wajeeha Batool) and student `2025-SE-22` (Noor Ul Ain Abbasi).

---

### 💬 **Overall Teacher Remarks**

**Dear Khawaja,** your Lab 5 submission structurally demonstrates inheritance concepts in C++. 
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 6 Evaluation Report (Constructor Chaining & Destructors)

**Student Roll Number:** 2025-SE-31
**Student Name:** Khawaja Absar Ali
**Task Folder Location:** `LAB-TASKS\LAB-06\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor & Inheritance Implementation** | 3 | **3** | Excellent. Constructor chaining and multilevel constructor prints demonstrating call order are correct. |
| **Destructor & Memory Management** | 3 | **3** | Excellent. Clean destructor implementations freeing dynamic memory. |
| **Classes, Attributes & Object Functionality** | 3 | **3** | Excellent. Required attributes and classes correctly defined. |
| **Input, Output & Execution** | 3 | **3** | Excellent. Compiles and executes cleanly. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **-3 Marks**
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Passed (Good)**

---

### ⚠️ **Plagiarism Audit Detail**

> **Plagiarism Penalty of **-3 marks** applied.**
> All 4 task files are 100% identical copy-matches (excluding spacing/comments) with student `2025-SE-04` (Wajeeha Batool).

---

### 💬 **Overall Teacher Remarks**

**Dear Khawaja,** your Lab 6 submission demonstrates your understanding of constructor chaining and destructors in C++.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 7 Evaluation Report (Composition & Aggregation)

**Student Roll Number:** 2025-SE-31
**Student Name:** Khawaja Absar Ali
**Task Folder Location:** `LAB-TASKS\LAB-07\`

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
> Both task files are 100% identical copy-matches (excluding spacing/comments) with students `2024-SE-18`, `2024-SE-27`, and `2025-SE-05`.

---

### 💬 **Overall Teacher Remarks**

**Dear Khawaja,** your Lab 7 submission demonstrates your understanding of composition (strong ownership) and aggregation (shared references) in C++.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 8 Evaluation Report (Polymorphism & Virtual Functions)

**Student Roll Number:** 2025-SE-31
**Student Name:** Khawaja Absar Ali
**Task Folder Location:** `LAB-TASKS\LAB-08\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Polymorphism & Virtual Function** | 3 | **3** | Excellent. Base Shape defines virtual double area() and derived classes properly override it. |
| **Derived Classes & Area Calculation** | 3 | **3** | Excellent. Derived classes Rectangle and Circle accurately compute their areas. |
| **Shape Pointer & Object Access** | 3 | **3** | Excellent. Base pointer Shape* is used to reference heap objects dynamically. |
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

**Dear Khawaja,** your Lab 8 submission demonstrates your understanding of runtime polymorphism and virtual functions in C++.

<br>

---
---

<br>

# Lab 9 Evaluation Report (Operator Overloading ==)

**Student Roll Number:** 2025-SE-31
**Student Name:** Khawaja Absar Ali
**Task Folder Location:** `LAB-TASKS\LAB-09\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Data Members** | 3 | **3** | Excellent. Distance class encapsulates private feet and inches data members. |
| **Constructor Implementation** | 3 | **3** | Excellent. Parameterized constructor initializes feet and inches values properly. |
| **`==` Operator Overloading** | 3 | **3** | Excellent. bool operator==(Distance d) correctly overloaded as a member function. |
| **Object Usage, Output & Execution** | 3 | **3** | Excellent. Objects created and compared; compiles and executes cleanly. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **-3 Marks**
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Passed (Good)**

---

### ⚠️ **Plagiarism Audit Detail**

> **Plagiarism Penalty of **-3 marks** applied.**
> Source code file shares an identical template structure (including the checkEqual helper method calling *this == d and identical main flow) with students `2024-SE-18`, `2024-SE-27`, `2024-SE-33`, `2025-SE-10`, and `2025-SE-13`.

---

### 💬 **Overall Teacher Remarks**

**Dear Khawaja,** your Lab 9 submission demonstrates your understanding of C++ operator overloading and member function comparison.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 10 Evaluation Report (File Handling in C++)

**Student Roll Number:** 2025-SE-31
**Student Name:** Khawaja Absar Ali
**Task Folder Location:** `N/A`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **File Creation & Writing** | 3 | **0** | Absent. |
| **File Reading & Content Display** | 3 | **0** | Absent. |
| **Line Counting & File Appending/Copying** | 3 | **0** | Absent. |
| **File Handling, Execution & Output** | 3 | **0** | Absent. |

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

**Dear Khawaja,** your Lab 10 submission is missing from your repository. Please upload your complete Lab 10 File Handling tasks to receive evaluation.

<br>

---
---

<br>

# Lab 11 Evaluation Report (Friend Functions & Static Members)

**Student Roll Number:** 2025-SE-31
**Student Name:** Khawaja Absar Ali
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

**Dear Khawaja,** your Lab 11 submission is missing from your repository. Please upload your complete Lab 11 tasks to receive evaluation.

<br>

---
---

<br>

# Lab 12 Evaluation Report (Pure Virtual Functions & Abstract Classes)

**Student Roll Number:** 2025-SE-31
**Student Name:** Khawaja Absar Ali
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

**Dear Khawaja,** your Lab 12 submission is missing from your repository. Please upload your complete Lab 12 tasks to receive evaluation.

<br>

---
---

<br>

# Lab 13 Evaluation Report (C++ Templates)

**Student Roll Number:** 2025-SE-31
**Student Name:** Khawaja Absar Ali
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

**Dear Khawaja,** your Lab 13 submission is missing from your repository. Please upload your complete Lab 13 Templates tasks to receive evaluation.

<br>

---
---

<br>

# Lab 14 Evaluation Report (In-Class Lab: Vehicle Rental System)

**Student Roll Number:** 2025-SE-31  
**Student Name:** Khawaja Absar Ali  
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

**Dear Khawaja,** your Lab 14 (Vehicle Rental System) submission is missing from your repository. Please upload your complete Lab 14 files to receive evaluation.
