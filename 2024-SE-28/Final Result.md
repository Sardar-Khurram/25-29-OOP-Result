# Object-Oriented Programming — Consolidated Evaluation Report

**Student Name:** Raja Wajihullah Khan  
**Roll Number:** `2024-SE-28`  
**Total Maximum Marks:** 210  
**Total Obtained Marks:** 19 / 210 (9.05%)  
**Total Excluding Plagiarism:** 19 / 210 (9.05%)  

---

### 📊 **Student Grand Total Result Table**

| Lab Number | Total Marks | Obtained Marks | Excluding Plagarism | Status / Notes |
| :--- | :---: | :---: | :---: | :--- |
| Lab  1 | 12 | 11 | 11 | Submitted |
| Lab  2 | 12 | 8 | 8 | Submitted |
| Lab  3 | 18 | 0 | 0 | Absent / Missing |
| Lab  4 | 12 | 0 | 0 | Absent / Missing |
| Lab  5 | 12 | 0 | 0 | Absent / Missing |
| Lab  6 | 12 | 0 | 0 | Absent / Missing |
| Lab  7 | 12 | 0 | 0 | Absent / Missing |
| Lab  8 | 12 | 0 | 0 | Absent / Missing |
| Lab  9 | 12 | 0 | 0 | Absent / Missing |
| Lab 10 | 12 | 0 | 0 | Absent / Missing |
| Lab 11 | 12 | 0 | 0 | Absent / Missing |
| Lab 12 | 12 | 0 | 0 | Absent / Missing |
| Lab 13 | 12 | 0 | 0 | Absent / Missing |
| Lab 14 | 48 | 0 | 0 | Absent / Missing |
| **Grand Total** | **210** | **19** | **19** | **Percentage: 9.05% (Excl. Plag: 9.05%)** |

---


<br>

---
---

<br>

# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2024-SE-28
**Student Name:** Raja Wajihullah Khan
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                   |
| :----------------------------------------- | :-----------: | :----------------: | :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **2**       | **Good.** Task 1 correctly defines the required student attributes and displays the student's full name and marks. However, the required function is `displayStudentInfo()`, while the submission defines `displayStudentInfo(Student student)` and passes the complete structure object as an argument. The implementation is valid, but it does not follow the specified function interface exactly. |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** Task 2 correctly creates an array of `Student` structures, accepts details for multiple students through user input, and calls `displayStudentInfo()` for each student. The input and display loops are correctly implemented.                                                                                                                                                          |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** Task 3 correctly declares structure pointers, uses the `->` operator to assign structure members, and calls `displayStudentInfo()` through the pointers. This satisfies the required pointer-to-structure access.                                                                                                                                                                       |
| **Input, Output & Execution**              |       3       |        **3**       | **Excellent.** All three task implementations are syntactically valid and the logic is correct. Task 1 displays two assigned records, Task 2 accepts and displays two student records, and Task 3 assigns and displays two records through structure pointers.                                                                                                                                         |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **11 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **11 / 12 (91.67%)**
* **Grade Status:** **Excellent**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> The submitted files were evaluated against the Lab 1 requirements. No comparison submission was provided for this evaluation, so a 100% code-match determination cannot be established from the available materials. The Lab 1 policy specifies a **-3 mark penalty** for code found to be plagiarized or matching 100% with another student's code.

---

### 💬 **Overall Teacher Remarks**

**Dear Raja,** your submission demonstrates a **strong understanding of structures, arrays of structures, and structure pointers**.

Task 1 is functionally correct, but the member-function design differs slightly from the required specification. The assignment asks for:

```cpp
void displayStudentInfo()
```

whereas the submission uses:

```cpp
void displayStudentInfo(Student student)
```

and calls it by passing the same structure object. This is valid C++, but the parameter is unnecessary because the member function can directly access the object's own members.

Task 2 correctly implements the array-of-structures requirement, including user input for multiple students and a separate display loop.

Task 3 correctly demonstrates pointer-to-structure access using `Student *ptr1` and `Student *ptr2`, with the `->` operator used for member assignment and function invocation.

The additional `Age` member is not required by the task, but it does not interfere with the required functionality.

**Overall performance: Excellent — 11/12.**

<br>

---
---

<br>

# Lab 2 Evaluation Report (All Tasks)
**Student Roll Number:** 2024-SE-28  
**Student Name:** Raja Wajihullah Khan

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **2** | **Good.** 3 out of 5 required tasks (`Student`, `Rectangle`, `Voter`) were attempted inside `Lab#02`. Header files include proper header guards (`#ifndef`). Tasks 4 (`Temperature`) and 5 (`Calculator`) were omitted. |
| **Member Variables** | 3 | **2** | **Good.** Data members are declared with appropriate C++ types (`string`, `int`, `float`). |
| **Member Functions (Inside/Outside)** | 3 | **2** | **Good.** Member functions are defined outside the classes using the scope resolution operator `::`. Voter check correctly uses `age > 18`. |
| **Input/Output & Execution** | 3 | **2** | **Good.** Code logic for the 3 attempted tasks compiles and executes properly. Deductions applied because header files were saved with `.cpp` extensions (`Header.cpp` and `Header.2h.cpp` instead of `.h`), causing include lookup issues. Tasks 4 and 5 were not submitted. |

---

### **Summary of Results**
* **Core Score:** **8 / 12**
* **Plagiarism Penalty:** **-3 marks** (100% full assignment copy detected)
* **Final Marks Obtained:** **5 / 12** (41.7%)
* **Grade Status:** **Failed (Plagiarism & Incomplete Submission)**

---

### **Plagiarism Analysis Detail**
> [!NOTE]
> **Plagiarism Note:** Partial or single file matches detected in scanning, but no plagiarism penalty was applied as your overall repository structure and code are distinct.

---

### **Overall Teacher Remarks**
Dear Raja,

Your Lab 2 submission in `Lab#02` contains implementations for Tasks 1 (`Student`), 2 (`Rectangle`), and 3 (`Voter`). 

Key areas to address:
1. **Missing Tasks:** Tasks 4 (`Temperature`) and 5 (`Calculator`) were not included in `Lab#02`.
2. **Header File Extensions:** Save header files with `.h` extension rather than `.cpp` (e.g., `header1.h` instead of `Header.cpp`) so `#include "header1.h"` resolves correctly.
3. **Plagiarism:** Your code and Dev-C++ project files are 100% identical copies with students **2024-SE-08**, **2024-SE-18**, and **2024-SE-27**. A flat penalty of 3 marks applies.

After applying the deduction to your core score of 8/12, your final score for Lab 2 is **5/12**.

<br>

---
---

<br>

# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2024-SE-28  
**Student Name:** Raja Wajihullah Khan
**Task Folder Location:** `N/A (Empty Task File)`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **0** | **Absent.** Lab 3 task submission is missing from the student repository (`Lab#03 file` is 1 byte empty). |
| **Member Variables** | 3 | **0** | **Absent.** Lab 3 task submission is missing from the student repository. |
| **Member Functions (Inside/Outside)** | 3 | **0** | **Absent.** Lab 3 task submission is missing from the student repository. |
| **Use of Access Specifiers** | 3 | **0** | **Absent.** Lab 3 task submission is missing from the student repository. |
| **Use of Getters/Setters** | 3 | **0** | **Absent.** Lab 3 task submission is missing from the student repository. |
| **Input/Output & Execution** | 3 | **0** | **Absent.** Lab 3 task submission is missing from the student repository. |

---

### 📈 **Summary of Results**
* **Total Marks:** **0 / 18 (0%)**
* **Grade Status:** **Absent / Empty Task File**

### 💬 **Overall Teacher Remarks**
Dear Raja Wajihullah, Your `Lab#03` folder contains an empty 1-byte file. Please upload your complete Lab 3 code to receive evaluation.

<br>

---
---

<br>

# Lab 4 Evaluation Report (Constructors & Destructors)
**Student Roll Number:** 2024-SE-28  
**Student Name:** Raja Wajihullah Khan
**Task Folder Location:** `Lab#04\`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor Implementation** | 3 | **0** | **Absent.** Lab 4 task submission is missing from the student repository (`Lab#04` contains only an empty 1-byte file). |
| **Constructor Overloading** | 3 | **0** | **Absent.** Lab 4 task submission is missing from the student repository. |
| **Destructor & Object Management** | 3 | **0** | **Absent.** Lab 4 task submission is missing from the student repository. |
| **Output & Execution** | 3 | **0** | **Absent.** Lab 4 task submission is missing from the student repository. |

---

### 📈 **Summary of Results**
* **Total Marks:** **0 / 12 (0%)**
* **Grade Status:** **Absent / Empty Task Folder**

### 💬 **Overall Teacher Remarks**
Dear Raja Wajihullah, Your `Lab#04` folder contains an empty 1-byte file. Please upload your complete Lab 4 constructor/destructor code to receive evaluation.

<br>

---
---

<br>

# Lab 5 Evaluation Report (Inheritance)

**Student Roll Number:** 2024-SE-28
**Student Name:** Raja Wajihullah Khan
**Task Folder Location:** `N/A`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Inheritance Implementation** | 3 | **0** | **Absent.** Lab 5 task submission is missing from the student repository. |
| **Classes, Attributes & Functions** | 3 | **0** | **Absent.** Lab 5 task submission is missing from the student repository. |
| **Object Creation & Functionality** | 3 | **0** | **Absent.** Lab 5 task submission is missing from the student repository. |
| **Input, Output & Execution** | 3 | **0** | **Absent.** Lab 5 task submission is missing from the student repository. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **0 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **0 / 12 (0.0%)**
* **Grade Status:** **Absent / Empty Task Folder**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> No code was submitted to evaluate.

---

### 💬 **Overall Teacher Remarks**

**Dear Raja,** your Lab 5 submission is missing from your repository. Please upload your complete Lab 5 inheritance tasks to receive evaluation.

<br>

---
---

<br>

# Lab 6 Evaluation Report (Constructor Chaining & Destructors)

**Student Roll Number:** 2024-SE-28
**Student Name:** Raja Wajihullah Khan
**Task Folder Location:** `N/A`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor & Inheritance Implementation** | 3 | **0** | Absent. |
| **Destructor & Memory Management** | 3 | **0** | Absent. |
| **Classes, Attributes & Object Functionality** | 3 | **0** | Absent. |
| **Input, Output & Execution** | 3 | **0** | Absent. |

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

**Dear Raja,** your Lab 6 submission is missing from your repository. Please upload your complete Lab 6 constructor/destructor tasks to receive evaluation.

<br>

---
---

<br>

# Lab 7 Evaluation Report (Composition & Aggregation)

**Student Roll Number:** 2024-SE-28
**Student Name:** Raja Wajihullah Khan
**Task Folder Location:** `N/A`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Composition & Object Ownership** | 3 | **0** | Absent. |
| **Aggregation & Shared Object Usage** | 3 | **0** | Absent. |
| **Classes, Functions & Data Management** | 3 | **0** | Absent. |
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

**Dear Raja,** your Lab 7 submission is missing from your repository. Please upload your complete Lab 7 composition and aggregation tasks to receive evaluation.

<br>

---
---

<br>

# Lab 8 Evaluation Report (Polymorphism & Virtual Functions)

**Student Roll Number:** 2024-SE-28
**Student Name:** Raja Wajihullah Khan
**Task Folder Location:** `N/A`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Polymorphism & Virtual Function** | 3 | **0** | Absent. |
| **Derived Classes & Area Calculation** | 3 | **0** | Absent. |
| **Shape Pointer & Object Access** | 3 | **0** | Absent. |
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
> As per standard course grading policy for single-structure tasks, code similarity is expected and no plagiarism penalty is assessed.

---

### 💬 **Overall Teacher Remarks**

**Dear Raja,** your Lab 8 submission is missing from your repository. Please upload your complete Lab 8 runtime polymorphism tasks to receive evaluation.

<br>

---
---

<br>

# Lab 9 Evaluation Report (Operator Overloading ==)

**Student Roll Number:** 2024-SE-28
**Student Name:** Raja Wajihullah Khan
**Task Folder Location:** `N/A`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Data Members** | 3 | **0** | Absent. |
| **Constructor Implementation** | 3 | **0** | Absent. |
| **`==` Operator Overloading** | 3 | **0** | Absent. |
| **Object Usage, Output & Execution** | 3 | **0** | Absent. |

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

**Dear Raja,** your Lab 9 submission is missing from your repository. Please upload your complete Lab 9 operator overloading tasks to receive evaluation.

<br>

---
---

<br>

# Lab 10 Evaluation Report (File Handling in C++)

**Student Roll Number:** 2024-SE-28
**Student Name:** Raja Wajihullah Khan
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

**Dear Raja,** your Lab 10 submission is missing from your repository. Please upload your complete Lab 10 File Handling tasks to receive evaluation.

<br>

---
---

<br>

# Lab 11 Evaluation Report (Friend Functions & Static Members)

**Student Roll Number:** 2024-SE-28
**Student Name:** Raja Wajihullah Khan
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

**Dear Raja,** your Lab 11 submission is missing from your repository. Please upload your complete Lab 11 tasks to receive evaluation.

<br>

---
---

<br>

# Lab 12 Evaluation Report (Pure Virtual Functions & Abstract Classes)

**Student Roll Number:** 2024-SE-28
**Student Name:** Raja Wajihullah Khan
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

**Dear Raja,** your Lab 12 submission is missing from your repository. Please upload your complete Lab 12 HospitalStaff tasks to receive evaluation.

<br>

---
---

<br>

# Lab 13 Evaluation Report (C++ Templates)

**Student Roll Number:** 2024-SE-28
**Student Name:** Raja Wajihullah Khan
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

**Dear Raja,** your Lab 13 submission is missing from your repository. Please upload your complete Lab 13 Templates tasks to receive evaluation.

<br>

---
---

<br>

# Lab 14 Evaluation Report (In-Class Lab: Vehicle Rental System)

**Student Roll Number:** 2024-SE-28  
**Student Name:** Raja Wajihullah Khan  
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

**Dear Raja,** your Lab 14 (Vehicle Rental System) submission is missing from your repository. Please upload your complete Lab 14 files to receive evaluation.
