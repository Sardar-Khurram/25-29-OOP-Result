# Object-Oriented Programming — Consolidated Evaluation Report

**Student Name:** Danish Iqbal  
**Roll Number:** `2025-SE-40`  
**Total Maximum Marks:** 210  
**Total Obtained Marks:** 138 / 210 (65.71%)  
**Total Excluding Plagiarism:** 155 / 210 (73.81%)  

---

### 📊 **Student Grand Total Result Table**

| Lab Number | Total Marks | Obtained Marks | Excluding Plagarism | Status / Notes |
| :--- | :---: | :---: | :---: | :--- |
| Lab  1 | 12 | 11 | 11 | Submitted |
| Lab  2 | 12 | 12 | 12 | Submitted |
| Lab  3 | 18 | 9 | 14 | Submitted (Plag Penalty: -5) |
| Lab  4 | 12 | 8 | 11 | Submitted (Plag Penalty: -3) |
| Lab  5 | 12 | 9 | 12 | Submitted (Plag Penalty: -3) |
| Lab  6 | 12 | 9 | 12 | Submitted (Plag Penalty: -3) |
| Lab  7 | 12 | 9 | 12 | Submitted (Plag Penalty: -3) |
| Lab  8 | 12 | 12 | 12 | Submitted |
| Lab  9 | 12 | 12 | 12 | Submitted |
| Lab 10 | 12 | 12 | 12 | Submitted |
| Lab 11 | 12 | 12 | 12 | Submitted |
| Lab 12 | 12 | 12 | 12 | Submitted |
| Lab 13 | 12 | 11 | 11 | Submitted |
| Lab 14 | 48 | 0 | 0 | Absent / Missing |
| **Grand Total** | **210** | **138** | **155** | **Percentage: 65.71% (Excl. Plag: 73.81%)** |

---


<br>

---
---

<br>

# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-40
**Student Name:** Danish Iqbal
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| :----------------------------------------- | :-----------: | :----------------: | :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **2**       | **Good.** Task 1 correctly defines the required four structure members and the member function displays the student's name and marks. However, the required function is `displayStudentInfo()`, while the submission uses `displaystudentinfo(student S)`. The function also unnecessarily takes a `student` object as a parameter instead of using the object's own members. The functionality works, but the required member-function specification is not followed exactly. |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** Task 2 correctly creates an array of `student` structures, accepts multiple student records through user input, and calls the display function for every record after input is complete. I tested it with two students and both records were displayed correctly. The only technical issue is that `student s[n]` is a variable-length array, which GCC accepts as an extension but which is not standard C++.                                                  |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** Task 3 correctly creates a structure object, points a `student*` to it using `student *ptr = &s1`, assigns all required members through the pointer using `->`, and calls the display function through the pointer. This satisfies the pointer-access requirement. The task does not explicitly require `new`/`delete`, so stack allocation with a structure pointer is acceptable.                                                                             |
| **Input, Output & Execution**              |       3       |        **3**       | **Excellent.** All three programs compiled successfully under C++17. Task 1 executed correctly. Task 2 was tested with two student records and displayed both correctly. Task 3 was also tested with user input and displayed the expected information. Task 2 generated only a non-fatal warning for its variable-length array.                                                                                                                                               |

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

**Dear Danish,** your Lab 1 submission demonstrates a **strong understanding of structures, arrays of structures, and structure pointers**.

Task 1 is functionally correct, but the member function does not follow the required interface exactly. The assignment specifies:

```cpp
displayStudentInfo()
```

whereas the submission defines:

```cpp
displaystudentinfo(student S)
```

The capitalization is different, and the function unnecessarily receives a complete `student` object as an argument. A cleaner implementation would use the current object's members directly.

Task 2 correctly implements an array of structures with separate input and display loops. I compiled and tested it with two student records, and both were displayed correctly.

Task 3 correctly demonstrates pointer-to-structure access using:

```cpp
student *ptr = &s1;
```

and the `->` operator. The student did **not** need to use `new`/`delete` here because the task only requires a pointer to a structure for member access and assignment.

I compiled all three programs using **C++17 with `-Wall -Wextra -pedantic`** and executed them with test data. All three programs compiled and ran successfully. Task 2 produced a warning because `student s[n]` is a variable-length array and is not standard C++.

**Overall performance: Excellent — 11/12.**

<br>

---
---

<br>

# Lab 2 Evaluation Report

**Student Roll Number:** 2025-SE-40  
**Student Name:** Danish Iqbal

---

### **Evaluation Rubric Table**

| Criteria | Max Marks | Obtained Marks | Remarks |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | 3 | Correct `.h` header and `.cpp` source file separation with header guards across tasks. |
| **Member Variables** | 3 | 3 | Data members defined with appropriate access specifiers and data types. |
| **Member Functions (Inside/Outside)** | 3 | 2 | Deduction (-1): Task 3 uses `age >= 18` instead of `age > 18`; Task 4 `displayResult()` is declared returning `double` but lacks a `return` statement; Task 5 division-by-zero check prints warning but still executes division. |
| **Input/Output & Execution** | 3 | 3 | All 5 tasks compile successfully and execute. |
| **Subtotal / Core Score** | **12** | **11** | **Core marks before plagiarism penalty** |
| **Plagiarism Penalty** | - | **-5** | Flat deduction applied due to plagiarized task files. |
| **Final Total** | **12** | **6** | **Final score after all deductions** |

---

### **Summary of Results**

- **Core Score:** 11 / 12
- **Plagiarism Penalty:** -5 Marks
- **Final Marks:** 6 / 12

---

### **Plagiarism Analysis Detail**

> [!WARNING]
> **Plagiarism Detected**  
> Tasks 1, 2, and 3 (`header1.h`, `project1.cpp.cpp`, `header2.h`, `project2.cpp.cpp`, `header3.h`, `project3.cpp.cpp`) are 100% identical matches with student **2025-SE-42**'s files. A flat penalty of -3 marks has been deducted from the core score in accordance with course policy.

---

### **Overall Teacher Remarks**

- **Task 1 (Student):** Member functions defined inside class in `header1.h`. Correct implementation. Plagiarized from 2025-SE-42.
- **Task 2 (Rectangle):** Member functions defined outside class using `::` scope resolution operator in `header2.h`. Perimeter formula `2 * (length + width)` is correct. `area()` and `perimeter()` return `void` and print directly. Plagiarized from 2025-SE-42.
- **Task 3 (Voter):** `isEligible()` defined outside class using `::` in `header3.h`. Deducted for using condition `age >= 18` instead of strict `age > 18`. Plagiarized from 2025-SE-42.
- **Task 4 (Temperature):** Functions defined inside class in `header4.h`. Floating-point conversion formula `celcius * 9.0 / 5.0 + 32.0` is correct. However, `displayResult()` is declared with return type `double` but missing a `return` statement, generating compiler warnings.
- **Task 5 (Calculator):** Functions defined inside class in `header5.h`. Division-by-zero check (`if num2 == 0`) is flawed as it prints a warning but still proceeds to execute `return num1 / num2`, which will cause undefined behavior on zero division.
- **Academic Integrity:** Plagiarism was detected for Tasks 1–3 with 2025-SE-42. Please ensure all future work is submitted independently.

<br>

---
---

<br>

# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-40  
**Student Name:** Danish Iqbal
**Task Folder Location:** `LAB 03 Encapsulation\Product.h & main.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** Modular `Product.h` interface with guards (`#ifndef PRODUCT_H`) and `main.cpp` driver. |
| **Member Variables** | 3 | **3** | **Excellent.** Attributes (`name`, `price`, `quantity`) declared under `private:`. |
| **Member Functions (Inside/Outside)** | 3 | **1** | **Needs Improvement.** Inverted setter validation logic: attributes are assigned invalid values unconditionally (`name = a; price = b; quantity = c;`), and error messages are printed when inputs ARE valid (`if (!a.empty()) cout << "Error...";`). |
| **Use of Access Specifiers** | 3 | **3** | **Excellent.** Encapsulation is strictly followed (`private:` attributes, `public:` methods). |
| **Use of Getters/Setters** | 3 | **2** | **Good.** Getters and setters present. |
| **Input/Output & Execution** | 3 | **2** | **Good.** Compiles cleanly with `g++`, but outputs inverted error messages during execution. |

---

### 📈 **Summary of Results**
* **Core Rubric Score:** **14 / 18**
* **Plagiarism Penalty:** **-5 Marks** *(100% identical code match with student `2025-SE-42`)*
* **Final Marks:** **9 / 18 (50.0%)**
* **Grade Status:** **Plagiarism Penalty (-5)**

---

### ⚠️ **Plagiarism Audit Detail**
> [!WARNING]
> Manual inspection detected a **100% character-for-character code match** between your `LAB 03 Encapsulation\Product.h` & `main.cpp` and student `2025-SE-42` (Abdullah Khan)'s submission files in `LAB 03`. Per course policy, a flat **-5 marks penalty** has been applied to both submissions.

### 💬 **Overall Teacher Remarks**
Dear Danish, Please write your code independently. Submitting duplicate code results in heavy plagiarism penalties. Also, fix your setter validation logic: do not assign values unconditionally before checking `if(condition)`, and print error messages when inputs are invalid (`if (a.empty())`), not when they are valid.

<br>

---
---

<br>

# Lab 4 Evaluation Report (Constructors & Destructors)
**Student Roll Number:** 2025-SE-40  
**Student Name:** Danish Iqbal
**Task Folder Location:** `LAB 04 Constructor\`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor Implementation** | 3 | **2** | **Good.** Task 1 default constructor initializes `ID=0`, `name="Not Assign"`, `salary=0.01`. Task 2 parameterized constructor uses `this->` pointer. <br>*Deduction (-1 mark):* Task 2 attributes were declared `public:` instead of `private:` as specified in rubric requirements. |
| **Constructor Overloading** | 3 | **3** | **Excellent.** Task 3 `Rectangle` class overloads default (1.0), 2-parameter (`length`, `width`), and 1-parameter (square) constructors cleanly with `area()` method. |
| **Destructor & Object Management** | 3 | **3** | **Excellent.** Task 4 `Locker` class destructor correctly prints deallocation message. Demonstrates both scoped stack allocation `{}` and dynamic heap allocation via `new`/`delete`. |
| **Output & Execution** | 3 | **3** | **Excellent.** All 4 C++ files compile 100% cleanly with `g++` and execute with clear output formatting. |

---

### 📈 **Summary of Results**
* **Total Marks:** **11 / 12**
* **Plagiarism Penalty:** **-3 Marks** *(100% identical code match with student `2025-SE-42`)*
* **Final Marks:** **8 / 12 (66.7%)**
* **Grade Status:** **Plagiarism Penalty (-3)**

---

### ⚠️ **Plagiarism Audit Detail**
> [!WARNING]
> Manual inspection detected a **100% character-for-character code match** across all 4 tasks between your `LAB 04 Constructor` files and student `2025-SE-42` (Muhammad Arif)'s submission files. Per course policy, a flat **-3 marks penalty** has been applied to both submissions.

### 💬 **Overall Teacher Remarks**
Dear Danish Iqbal, Your core implementation is working, but please write your code independently. Duplicate submissions result in heavy plagiarism penalties. Also, keep data members `private` to maintain proper encapsulation in Task 2.

<br>

---
---

<br>

# Lab 5 Evaluation Report (Inheritance)

**Student Roll Number:** 2025-SE-40
**Student Name:** Danish Iqbal
**Task Folder Location:** `LAB 05 Inheritance\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Inheritance Implementation** | 3 | **3** | Excellent. Single, multilevel, hierarchical, and multiple inheritance structurally implemented correctly. |
| **Classes, Attributes & Functions** | 3 | **3** | Excellent. Correct encapsulation and member definition. |
| **Object Creation & Functionality** | 3 | **3** | Excellent. Objects created and photocopy() successfully calls print and scan methods. |
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
> All 4 task files are 100% identical copy-matches (excluding spacing/comments) with student `2025-SE-42` (Wajiha batool).

---

### 💬 **Overall Teacher Remarks**

**Dear Danish,** your Lab 5 submission structurally demonstrates inheritance concepts in C++.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 6 Evaluation Report (Constructor Chaining & Destructors)

**Student Roll Number:** 2025-SE-40
**Student Name:** Danish Iqbal
**Task Folder Location:** `LAB 06 Inheritance Using Constructor\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor & Inheritance Implementation** | 3 | **3** | Excellent. Clean constructor chaining and multilevel constructor execution prints are correct. |
| **Destructor & Memory Management** | 3 | **3** | Excellent. Destructors correctly release dynamically allocated memory on the heap with virtual destructors. |
| **Classes, Attributes & Object Functionality** | 3 | **3** | Excellent. Classes, attributes, and object relationships are correctly demonstrated. |
| **Input, Output & Execution** | 3 | **3** | Excellent. All files compile and execute successfully. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **-3 Marks**
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Passed (Good)**

---

### ⚠️ **Plagiarism Audit Detail**

> **Plagiarism Penalty of **-3 marks** applied.**
> All 4 task files are 100% identical copy-matches (excluding spacing/comments) with student `2025-SE-42` (Wajiha batool).

---

### 💬 **Overall Teacher Remarks**

**Dear Danish,** your Lab 6 submission demonstrates your understanding of constructor chaining and destructors in C++.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 7 Evaluation Report (Composition & Aggregation)

**Student Roll Number:** 2025-SE-40
**Student Name:** Danish Iqbal
**Task Folder Location:** `LAB 07 Composition And Aggregation\`

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
> Both task files are 100% identical copy-matches (excluding spacing/comments) with student `2025-SE-42` (Wajiha batool).

---

### 💬 **Overall Teacher Remarks**

**Dear Danish,** your Lab 7 submission demonstrates your understanding of composition (strong ownership) and aggregation (shared references) in C++.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 8 Evaluation Report (Polymorphism & Virtual Functions)

**Student Roll Number:** 2025-SE-40
**Student Name:** Danish Iqbal
**Task Folder Location:** `LAB 08 Polymorphism (Dynmaic Binding)\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Polymorphism & Virtual Function** | 3 | **3** | Excellent. Base Shape defines virtual double area() and derived classes properly override it. |
| **Derived Classes & Area Calculation** | 3 | **3** | Excellent. Derived classes Rectangle and Circle accurately compute their areas. |
| **Shape Pointer & Object Access** | 3 | **3** | Excellent. Base pointer Shape* is used to reference derived instances dynamically. |
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

**Dear Danish,** your Lab 8 submission demonstrates your understanding of runtime polymorphism and virtual functions in C++.

<br>

---
---

<br>

# Lab 9 Evaluation Report (Operator Overloading ==)

**Student Roll Number:** 2025-SE-40
**Student Name:** Danish Iqbal
**Task Folder Location:** `LAB 09 Polymorphism (Static Binding)\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Data Members** | 3 | **3** | Excellent. Distance class correctly defines private feet and inches data members. |
| **Constructor Implementation** | 3 | **3** | Excellent. Parameterized constructor initializes values properly. |
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

**Dear Danish,** your Lab 9 submission demonstrates your understanding of C++ operator overloading and member function comparison.

<br>

---
---

<br>

# Lab 10 Evaluation Report (File Handling in C++)

**Student Roll Number:** 2025-SE-40
**Student Name:** Danish Iqbal
**Task Folder Location:** `LAB 10 File Handling\`

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

**Dear Danish,** your Lab 10 submission demonstrates your understanding of C++ file stream handling, reading, writing, and resource management.

<br>

---
---

<br>

# Lab 11 Evaluation Report (Friend Functions & Static Members)

**Student Roll Number:** 2025-SE-40
**Student Name:** Danish Iqbal
**Task Folder Location:** `LAB 11 & 12 Static Members & Functions\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Friend Function Implementation** | 3 | **3** | Excellent. Proper friend functions for Box and Distance with friend declarations and private member access. |
| **Static Data Member Implementation** | 3 | **3** | Excellent. BankAccount static account counter properly initialized and incremented in constructor. |
| **Static Member Function & Shared Data** | 3 | **3** | Excellent. Employee static company name and static function displayCompanyInfo() invoked properly via Employee::displayCompanyInfo(). |
| **Object Creation, Output & Execution** | 3 | **3** | Excellent. Well-structured standalone files with clean compilation and execution. |

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

**Dear Danish,** your Lab 11 submission demonstrates a clear understanding of friend functions and static members in C++.

<br>

---
---

<br>

# Lab 12 Evaluation Report (Pure Virtual Functions & Abstract Classes)

**Student Roll Number:** 2025-SE-40
**Student Name:** Danish Iqbal
**Task Folder Location:** `LAB 11 & 12 Static Members & Functions\Task-05 Using Pure Virtual Function.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Abstract Base Class & Pure Virtual Function** | 3 | **3** | Excellent. HospitalStaff correctly defined as an abstract base class with a pure virtual function virtual void performDuty() = 0;. |
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

**Dear Danish,** your Lab 12 submission demonstrates an excellent understanding of abstract classes and pure virtual functions in C++.

<br>

---
---

<br>

# Lab 13 Evaluation Report (C++ Templates)

**Student Roll Number:** 2025-SE-40
**Student Name:** Danish Iqbal
**Task Folder Location:** `LAB 13 File Handling\ (Folder name typo)`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Function Templates (`printTwice` & `findMin`)** | 3 | **3** | Excellent. printTwice() and fMin() function templates are properly implemented with generic types. |
| **Required Type Testing & Results** | 3 | **2** | Good. Deducted 1 mark because Task 2 (fMin) was only tested with integers; testing with doubles and characters was omitted. |
| **Class Templates (`Pair<T>` & `Calculator<T>`)** | 3 | **3** | Excellent. Pair<T> and Calculate<T> class templates are properly designed with private members, getters, and arithmetic methods returning T. |
| **Object Creation, `main()` Usage & Execution** | 3 | **3** | Excellent. Object creation inside main() is clean, compiles with zero warnings, and executes flawlessly. |

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

**Dear Danish,** your Lab 13 submission demonstrates your understanding of generic programming, function templates, and class templates in C++.

<br>

---
---

<br>

# Lab 14 Evaluation Report (In-Class Lab: Vehicle Rental System)

**Student Roll Number:** 2025-SE-40  
**Student Name:** Danish Iqbal  
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

**Dear Danish,** your Lab 14 (Vehicle Rental System) submission is missing from your repository. Please upload your complete Lab 14 files to receive evaluation.
