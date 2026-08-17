# Object-Oriented Programming — Consolidated Evaluation Report

**Student Name:** Noor Ul Ain Abbasi  
**Roll Number:** `2025-SE-22`  
**Total Maximum Marks:** 210  
**Total Obtained Marks:** 101 / 210 (48.10%)  
**Total Excluding Plagiarism:** 119 / 210 (56.67%)  

---

### 📊 **Student Grand Total Result Table**

| Lab Number | Total Marks | Obtained Marks | Excluding Plagarism | Status / Notes |
| :--- | :---: | :---: | :---: | :--- |
| Lab  1 | 12 | 9 | 9 | Submitted |
| Lab  2 | 12 | 12 | 12 | Submitted |
| Lab  3 | 18 | 17 | 17 | Submitted |
| Lab  4 | 12 | 6 | 9 | Submitted (Plag Penalty: -3) |
| Lab  5 | 12 | 9 | 12 | Submitted (Plag Penalty: -3) |
| Lab  6 | 12 | 9 | 12 | Submitted (Plag Penalty: -3) |
| Lab  7 | 12 | 9 | 12 | Submitted (Plag Penalty: -3) |
| Lab  8 | 12 | 12 | 12 | Submitted |
| Lab  9 | 12 | 9 | 12 | Submitted (Plag Penalty: -3) |
| Lab 10 | 12 | 9 | 12 | Submitted (Plag Penalty: -3) |
| Lab 11 | 12 | 0 | 0 | Absent / Missing |
| Lab 12 | 12 | 0 | 0 | Absent / Missing |
| Lab 13 | 12 | 0 | 0 | Absent / Missing |
| Lab 14 | 48 | 0 | 0 | Absent / Missing |
| **Grand Total** | **210** | **101** | **119** | **Percentage: 48.10% (Excl. Plag: 56.67%)** |

---


<br>

---
---

<br>

# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-22
**Student Name:** Noor Ul Ain Abbasi
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                                  |
| :----------------------------------------- | :-----------: | :----------------: | :-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **2**       | **Good.** Task 1 defines a `student` structure with all four required data members and includes a member function that displays the student's name and marks. However, `displayStudentInfo()` is declared with return type `student` even though it does not return a `student` object, producing a compiler warning. Tasks 2 and 3 also omit the required `roll_no/rollNumber` member entirely.                      |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** Task 2 correctly creates an array of three `student` structures, accepts multiple student records through input, and displays each record using a member function. The array and loop logic work correctly. However, the required roll number field is missing from this implementation.                                                                                                               |
| **Structure Pointer & Dynamic Access**     |       3       |        **2**       | **Good.** Task 3 correctly declares a structure pointer (`student *sPtr = s`) and uses pointer arithmetic with `->` to assign and access the structure members. However, the required `displayStudentInfo()` function is replaced with `DisplayStudentInfo()`, and the `rollNumber` member is missing. The pointer is used for access, but the implementation does not fully match the specified structure/interface. |
| **Input, Output & Execution**              |       3       |        **2**       | **Good.** All three programs compile successfully under C++17. Task 2 and Task 3 execute correctly for their implemented functionality. Task 1 compiles but produces a warning because `displayStudentInfo()` is declared to return `student` without returning a value. The overall submission also fails to handle the required roll number in Tasks 2 and 3.                                                       |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **9 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Good**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> The submitted files were evaluated against the Lab 1 requirements. No comparison submission was provided for this evaluation, so a 100% code-match determination cannot be established from the available materials. The Lab 1 policy specifies a **-3 mark penalty** when a student's code is found to be plagiarized or matching 100% with another student's code.

---

### 💬 **Overall Teacher Remarks**

**Dear Noor,** your submission demonstrates a **good understanding of structures, arrays of structures, and structure pointers**, and all three programs are broadly functional.

The main issues are related to following the specification precisely.

In **Task 1**, the function is declared as:

```cpp
student displayStudentInfo()
```

but it does not return a `student` object. Since the function is only intended to display information, it should be declared as:

```cpp
void displayStudentInfo()
```

The compiler reports a **missing return statement warning** for the current implementation.

More importantly, **Tasks 2 and 3 omit the required `rollNumber` member** from the structure. The assignment explicitly requires First Name, Last Name, Roll Number, and Marks in the `Student` structure.

Task 3 also uses:

```cpp
DisplayStudentInfo()
```

instead of the required:

```cpp
displayStudentInfo()
```

While C++ is case-sensitive, the functionality is otherwise similar.

I compiled all three programs using **C++17 with warnings enabled**. All three compile, but Task 1 generates the non-void return warning described above.

**Overall performance: Good — 9/12.**

<br>

---
---

<br>

# Lab 2 Evaluation Report (All Tasks)
**Student Roll Number:** 2025-SE-22  
**Student Name:** Noor Ul Ain Abbasi

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** Correct class structure. Separates interface declarations in `.h` headers and client drivers in `.cpp` source files. Objects are instantiated correctly. |
| **Member Variables** | 3 | **2** | **Good.** attributes are defined clearly, but with two design flaws: <br>1. **Task 4 (Temperature):** Temperature attributes are defined as `int`, causing decimal truncation during division. <br>2. **Task 5 (Calculator):** Class attributes `num1` and `num2` are declared inside the `Calculator` class but are completely unused (functions take them as arguments instead). |
| **Member Functions (Inside/Outside)** | 3 | **2** | **Good.** Scoping rules are followed (inline vs outside). <br><br> *Deduction Reasons:* <br>1. **Task 2 (Rectangle):** `area()` and `perimeter()` are declared as returning `int` but contain no `return` statements, which triggers compiler warnings: `warning: no return statement in function returning non-void`. <br>2. **Task 3 (Voter):** Used condition `age >= 18` instead of `age > 18` as requested. <br>3. **Task 5 (Calculator):** Division function lacks safety validation check for division by zero. |
| **Input/Output & Execution** | 3 | **3** | **Excellent.** All files compile successfully under `g++` and run cleanly. Console outputs are clear. |

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
Dear Noor Ul Ain,
While the logic of the C++ code files compiles successfully, this entire submission is a direct, **100% duplicate** of student **2025-SE-04**'s code files across all 5 tasks. 

Plagiarism is strictly prohibited. You must write and run your own code to master class structures and programming logic. Copying other students' submissions has resulted in a flat penalty deduction of 3 marks, bringing your final score to 7/12. Please make sure that all future labs are done independently.

<br>

---
---

<br>

# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-22  
**Student Name:** Noor Ul Ain Abbasi
**Task Folder Location:** `Lab 03\header.h.h & 1.cpp.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** Class declaration separated into `header.h.h` and driver into `1.cpp.cpp` with preprocessor guards (`#ifndef PRODUCT_H`). |
| **Member Variables** | 3 | **2** | **Good.** Attributes defined under `private:` access specifier. <br>*Deduction (-1 mark):* Used `float price` instead of `double price` specified in rubric requirements. |
| **Member Functions (Inside/Outside)** | 3 | **3** | **Excellent.** Setters validate empty string (`!n.empty()`), positive price (`p > 0`), and non-negative quantity (`q >= 0`). |
| **Use of Access Specifiers** | 3 | **3** | **Excellent.** Encapsulation is strictly followed (`private:` attributes, `public:` methods). |
| **Use of Getters/Setters** | 3 | **3** | **Excellent.** Proper getters and setters implemented with validation messages. |
| **Input/Output & Execution** | 3 | **3** | **Excellent.** Compiles cleanly with `g++` and formats currency output cleanly using `<iomanip>` (`fixed` & `setprecision(2)`). |

---

### 📈 **Summary of Results**
* **Total Marks:** **17 / 18 (94.4%)**
* **Grade Status:** **Excellent**

### 💬 **Overall Teacher Remarks**
Dear Noor Ul Ain, Great submission for Lab 3! Your modular design, input validation, and formatted output using `<iomanip>` compile cleanly and run perfectly. Be mindful of file extension double-naming (`header.h.h`) and use `double` for price attributes as specified in the rubric. Good job!

<br>

---
---

<br>

# Lab 4 Evaluation Report (Constructors & Destructors)
**Student Roll Number:** 2025-SE-22  
**Student Name:** Noor Ul Ain Abbasi
**Task Folder Location:** `Lab 04 (Constructor)\`  

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
* **Plagiarism Penalty:** **-3 Marks** *(100% identical code match with student `2025-SE-31` & `2025-SE-04`)*
* **Final Marks:** **6 / 12 (50.0%)**
* **Grade Status:** **Plagiarism Penalty (-3)**

---

### ⚠️ **Plagiarism Audit Detail**
> [!WARNING]
> Manual inspection detected a **100% character-for-character code match** across all 4 tasks between your `Lab 04 (Constructor)` files and student `2025-SE-31` (Khawaja Absar Ali) & `2025-SE-04` (Wajeeha Batool)'s submission files. Per course policy, a flat **-3 marks penalty** has been applied to all submissions.

### 💬 **Overall Teacher Remarks**
Dear Noor Ul Ain, Your core implementation is working, but please write your code independently. Duplicate submissions result in heavy plagiarism penalties. Also, implement stack scope `{}` blocks and dynamic heap `new`/`delete` in Task 4, and capitalize class names (`Employee`, `BankAccount`) following standard C++ conventions.

<br>

---
---

<br>

# Lab 5 Evaluation Report (Inheritance)

**Student Roll Number:** 2025-SE-22
**Student Name:** Noor Ul Ain Abbasi
**Task Folder Location:** `Lab 05 (Inheritance)\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Inheritance Implementation** | 3 | **3** | Excellent. Single inheritance implemented correctly (Person -> Student). |
| **Classes, Attributes & Functions** | 3 | **3** | Excellent. Multilevel inheritance implemented correctly (Person -> Employee -> Manager). |
| **Object Creation & Functionality** | 3 | **3** | Excellent. Hierarchical inheritance implemented correctly (Employee -> Developer/Designer). |
| **Input, Output & Execution** | 3 | **3** | Excellent. Multiple inheritance implemented correctly (Printer + Scanner -> Photocopier). |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **-3 Marks**
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Passed (Good)**

---

### ⚠️ **Plagiarism Audit Detail**

> **Plagiarism Penalty of **-3 marks** applied.**
> All 4 task files are 100% identical matches (excluding spacing/comments) with student `2025-SE-04` (Wajeeha Batool) and student `2025-SE-31` (Khawaja Absar Ali).

---

### 💬 **Overall Teacher Remarks**

**Dear Noor,** your Lab 5 submission structurally demonstrates a very good understanding of inheritance concepts in C++.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 6 Evaluation Report (Constructor Chaining & Destructors)

**Student Roll Number:** 2025-SE-22
**Student Name:** Noor Ul Ain Abbasi
**Task Folder Location:** `Lab 06\`

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
> All 4 task files are 100% identical copy-matches (excluding spacing/comments) with student `2025-SE-13` (Areeba Taqdees Mir).

---

### 💬 **Overall Teacher Remarks**

**Dear Noor,** your Lab 6 submission demonstrates your understanding of constructor chaining and destructors in C++.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 7 Evaluation Report (Composition & Aggregation)

**Student Roll Number:** 2025-SE-22
**Student Name:** Noor Ul Ain Abbasi
**Task Folder Location:** `Lab 07\`

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
> Both task files are 100% identical copy-matches (excluding spacing/comments) with student `2025-SE-02` (Shahnza Munir).

---

### 💬 **Overall Teacher Remarks**

**Dear Noor,** your Lab 7 submission demonstrates your understanding of composition (strong ownership) and aggregation (shared references) in C++.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 8 Evaluation Report (Polymorphism & Virtual Functions)

**Student Roll Number:** 2025-SE-22
**Student Name:** Noor Ul Ain Abbasi
**Task Folder Location:** `Lab 08\`

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

**Dear Noor,** your Lab 8 submission demonstrates your understanding of runtime polymorphism and virtual functions in C++.

<br>

---
---

<br>

# Lab 9 Evaluation Report (Operator Overloading ==)

**Student Roll Number:** 2025-SE-22
**Student Name:** Noor Ul Ain Abbasi
**Task Folder Location:** `Lab 09(operator overloding)\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Data Members** | 3 | **3** | Excellent. Distance class encapsulates private feet and inches data members. |
| **Constructor Implementation** | 3 | **3** | Excellent. Parameterized constructor correctly initializes dimensions. |
| **`==` Operator Overloading** | 3 | **3** | Excellent. bool operator==(Distance d) overloaded as a member function. |
| **Object Usage, Output & Execution** | 3 | **3** | Excellent. Objects created and compared via if-else; compiles and executes cleanly. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **-3 Marks**
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Passed (Good)**

---

### ⚠️ **Plagiarism Audit Detail**

> **Plagiarism Penalty of **-3 marks** applied.**
> Source code file is an exact raw byte-for-byte copy-match (including exact whitespace, comments, and variable naming) with student `2025-SE-04` (Wajeeha Batool).

---

### 💬 **Overall Teacher Remarks**

**Dear Noor,** your Lab 9 submission demonstrates your understanding of C++ operator overloading and member function comparison.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 10 Evaluation Report (File Handling in C++)

**Student Roll Number:** 2025-SE-22
**Student Name:** Noor Ul Ain Abbasi
**Task Folder Location:** `Lab 10(File handling)\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **File Creation & Writing** | 3 | **3** | Excellent. File creation and writing for notes.txt and students.txt correctly implemented. |
| **File Reading & Content Display** | 3 | **3** | Excellent. File reading and console output display implemented cleanly. |
| **Line Counting & File Appending/Copying** | 3 | **3** | Excellent. Line counting, append mode, and stream copying to copy.txt all implemented. |
| **File Handling, Execution & Output** | 3 | **3** | Excellent. All 4 programs compile cleanly and execute properly. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **-3 Marks**
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Passed (Good)**

---

### ⚠️ **Plagiarism Audit Detail**

> **Plagiarism Penalty of **-3 marks** applied.**
> All 4 source code files are 100% exact raw byte-for-byte copy-matches (including comments and variable naming) with student `2025-SE-04` (Wajeeha Batool).

---

### 💬 **Overall Teacher Remarks**

**Dear Noor,** your Lab 10 submission demonstrates your understanding of C++ file stream handling, reading, writing, and resource management.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 11 Evaluation Report (Friend Functions & Static Members)

**Student Roll Number:** 2025-SE-22
**Student Name:** Noor Ul Ain Abbasi
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

**Dear Noor,** your Lab 11 submission is missing from your repository. Please upload your complete Lab 11 tasks to receive evaluation.

<br>

---
---

<br>

# Lab 12 Evaluation Report (Pure Virtual Functions & Abstract Classes)

**Student Roll Number:** 2025-SE-22
**Student Name:** Noor Ul Ain Abbasi
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

**Dear Noor,** your Lab 12 submission is missing from your repository. Please upload your complete Lab 12 tasks to receive evaluation.

<br>

---
---

<br>

# Lab 13 Evaluation Report (C++ Templates)

**Student Roll Number:** 2025-SE-22
**Student Name:** Noor Ul Ain Abbasi
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

**Dear Noor,** your Lab 13 submission is missing from your repository. Please upload your complete Lab 13 Templates tasks to receive evaluation.

<br>

---
---

<br>

# Lab 14 Evaluation Report (In-Class Lab: Vehicle Rental System)

**Student Roll Number:** 2025-SE-22  
**Student Name:** Noor Ul Ain Abbasi  
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

**Dear Noor,** your Lab 14 (Vehicle Rental System) submission is missing from your repository. Please upload your complete Lab 14 files to receive evaluation.
