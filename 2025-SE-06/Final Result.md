# Object-Oriented Programming — Consolidated Evaluation Report

**Student Name:** Maryam Jamil  
**Roll Number:** `2025-SE-06`  
**Total Maximum Marks:** 210  
**Total Obtained Marks:** 133 / 210 (63.33%)  
**Total Excluding Plagiarism:** 157 / 210 (74.76%)  

---

### 📊 **Student Grand Total Result Table**

| Lab Number | Total Marks | Obtained Marks | Excluding Plagarism | Status / Notes |
| :--- | :---: | :---: | :---: | :--- |
| Lab  1 | 12 | 9 | 9 | Submitted |
| Lab  2 | 12 | 10 | 10 | Submitted |
| Lab  3 | 18 | 18 | 18 | Submitted |
| Lab  4 | 12 | 9 | 12 | Submitted (Plag Penalty: -3) |
| Lab  5 | 12 | 9 | 12 | Submitted (Plag Penalty: -3) |
| Lab  6 | 12 | 9 | 12 | Submitted (Plag Penalty: -3) |
| Lab  7 | 12 | 9 | 12 | Submitted (Plag Penalty: -3) |
| Lab  8 | 12 | 12 | 12 | Submitted |
| Lab  9 | 12 | 9 | 12 | Submitted (Plag Penalty: -3) |
| Lab 10 | 12 | 9 | 12 | Submitted (Plag Penalty: -3) |
| Lab 11 | 12 | 9 | 12 | Submitted (Plag Penalty: -3) |
| Lab 12 | 12 | 9 | 12 | Submitted (Plag Penalty: -3) |
| Lab 13 | 12 | 12 | 12 | Submitted |
| Lab 14 | 48 | 0 | 0 | Absent / Missing |
| **Grand Total** | **210** | **133** | **157** | **Percentage: 63.33% (Excl. Plag: 74.76%)** |

---


<br>

---
---

<br>

# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-06
**Student Name:** Maryam Jamil
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                         |
| :----------------------------------------- | :-----------: | :----------------: | :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **3**       | **Excellent.** Task 1 correctly defines the `Student` structure with first name, last name, roll number, and marks. The `displayStudentInfo()` member function correctly displays the student's full name and marks. A structure variable is created, all required values are assigned, and the member function is called. The program compiles and runs successfully.                                       |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** Task 2 correctly implements an array of `Student` structures, accepts multiple student records through user input, and calls `displayStudentInfo()` for each student. Testing with multiple student records produced the expected output. The use of `Student student[n]` is a **non-standard variable-length array in C++**; GCC accepts it as an extension, but it is not ISO C++ standard. |
| **Structure Pointer & Dynamic Access**     |       3       |        **1**       | **Need Improvement.** Task 3 correctly attempts to use a structure pointer and the `->` operator, but the statement `Student *student = &S1;` references **`S1`, which is never declared**. Compilation fails with an error that `S1` was not declared in this scope. Consequently, the pointer cannot actually be used to store/access the student record or call the member function.                      |
| **Input, Output & Execution**              |       3       |        **2**       | **Good.** Tasks 1 and 2 compile and execute successfully and produce the required student information. However, Task 3 fails to compile because of the undeclared `S1`, so the complete submission does not execute successfully.                                                                                                                                                                            |

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

**Dear Maryam,** your Lab 1 submission demonstrates a **good understanding of structures and arrays of structures**. Tasks 1 and 2 correctly implement the required structure, member function, structure variable, array, user input, and output functionality.

Task 1 was successfully compiled and executed, producing the required full name and marks. Task 2 was also compiled and tested with multiple student records and produced the expected results.

However, **Task 3 has a significant error**:

```cpp
Student *student = &S1;
```

`S1` has not been declared anywhere in the program. This causes a compilation error:

```text
error: 'S1' was not declared in this scope
```

A valid implementation would first create a structure object, for example:

```cpp
Student s1;
Student *student = &s1;
```

or dynamically allocate the structure if desired.

Task 2 also uses a variable-length array (`Student student[n]`), which GCC accepts as an extension but is **not standard C++**. A fixed-size array or dynamic allocation would be preferable.

**Overall performance: Good — 9/12.**

<br>

---
---

<br>

# Lab 2 Evaluation Report (All Tasks)
**Student Roll Number:** 2025-SE-06  
**Student Name:** Maryam Jamil

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** Correct class structure. Header guards are used properly. Class object instantiation is done correctly in all individual tasks, as well as inside the unified `Task 6/main.cpp` project. |
| **Member Variables** | 3 | **3** | **Excellent.** Attributes (e.g., `name`, `rollNumber`, `marks`, `length`, `width`, `age`, `celsius`, `fahrenheit`, `num1`, `num2`) are defined clearly with correct C++ data types. |
| **Member Functions (Inside/Outside)** | 3 | **2** | **Good.** Method locations follow instructions (inline vs outline). Excellent implementation of Voter eligibility logic (`age > 18`) and Calculator operations. <br><br> *Deduction Reasons:* <br>1. **Task 2.cpp (Perimeter Bug):** The formula used for perimeter in `Task 2.cpp` has a mathematical operator precedence bug: `2*length+width`. This evaluates to `(2 * length) + width`, which is incorrect. *(Note: This was fixed correctly as `2*(length+width)` in the refactored `Task 6/Rectangle.h`, but the bug remains in the standalone `Task 2.cpp`).* |
| **Input/Output & Execution** | 3 | **3** | **Excellent.** All 5 tasks and the Task 6 integrated driver compile successfully with `g++` without warnings or errors. Console execution is smooth, prompting the user clearly. |

---

### **Summary of Results**
* **Total Marks:** **11 / 12** (91.7%)
* **Grade Status:** **Passed with feedback**

### **Overall Teacher Remarks**
Dear Maryam,
Excellent work on Lab 2! All of your files compile and execute correctly, and your folder structure is very organized. You also did a great job re-organizing all 5 programs into the separate headers inside the Task 6 folder.

The only minor point to note is the mathematical logic error in the perimeter formula inside `Task 2.cpp` where you wrote `2*length+width` (omitting parentheses). While you correctly resolved this in `Task 6/Rectangle.h` by writing `2*(length+width)`, make sure that you check the standalone files for logical bugs as well. Keep up the high standard of your work!

<br>

---
---

<br>

# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-06  
**Student Name:** Maryam Jamil
**Task Folder Location:** `Lab 3\Product.h & Main.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** Modular `Product.h` header with guards (`#ifndef PRODUCT_H`) and `Main.cpp` driver. |
| **Member Variables** | 3 | **3** | **Excellent.** Private attributes (`name`, `price`, `quantity`) declared with correct data types (`string`, `double`, `int`). |
| **Member Functions (Inside/Outside)** | 3 | **3** | **Excellent.** Setters implement validation (`!n.empty()`, `p > 0`, `q >= 0`) with informative error messages. |
| **Use of Access Specifiers** | 3 | **3** | **Excellent.** Strict encapsulation followed (`private:` data members, `public:` methods). |
| **Use of Getters/Setters** | 3 | **3** | **Excellent.** All getters and setters fully functional. |
| **Input/Output & Execution** | 3 | **3** | **Excellent.** `Main.cpp` compiles cleanly with `g++` and executes test driver sequence perfectly. |

---

### 📈 **Summary of Results**
* **Total Marks:** **18 / 18 (100%)**
* **Grade Status:** **Excellent (Full Marks)**

### 💬 **Overall Teacher Remarks**
Dear Maryam, Flawless submission for Lab 3! Your code structure, validation logic, and test execution fully satisfy all rubric criteria. Excellent work!

<br>

---
---

<br>

# Lab 4 Evaluation Report (Constructors & Destructors)
**Student Roll Number:** 2025-SE-06  
**Student Name:** Maryam Jamil
**Task Folder Location:** `Lab 4\Task 1.cpp` to `Task 4.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor Implementation** | 3 | **3** | **Excellent.** Task 1 default constructor initializes `id=0`, `name="Not assigned."`, `salary=0.0`. Task 2 parameterized constructor correctly initializes all banking attributes. |
| **Constructor Overloading** | 3 | **3** | **Excellent.** Task 3 `Rectangle` class overloads default (1.0), 2-parameter (`length`, `width`), and 1-parameter (square) constructors with `area()` method returning calculated area. |
| **Destructor & Object Management** | 3 | **3** | **Excellent.** Task 4 `Locker` class destructor correctly prints deallocation message. Demonstrates both scoped stack allocation `{}` and dynamic heap allocation via `new`/`delete`. |
| **Output & Execution** | 3 | **3** | **Excellent.** All 4 C++ files compile 100% cleanly with `g++` and execute with correct output formatting. |

---

### 📈 **Summary of Results**
* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **-3 Marks** *(100% identical code match with student `2025-SE-14`)*
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Plagiarism Penalty (-3)**

---

### ⚠️ **Plagiarism Audit Detail**
> [!WARNING]
> Manual inspection detected a **100% character-for-character code match** across all 4 tasks between your `Lab 4` files and student `2025-SE-14` (Komal Shafique)'s submission files. Per course policy, a flat **-3 marks penalty** has been applied to both submissions.

### 💬 **Overall Teacher Remarks**
Dear Maryam, Your core implementation is fully working, but please write your code independently. Duplicate submissions result in heavy plagiarism penalties.

<br>

---
---

<br>

# Lab 5 Evaluation Report (Inheritance)

**Student Roll Number:** 2025-SE-06
**Student Name:** Maryam Jamil
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
* **Plagiarism Penalty:** **-3 Marks**
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Passed**

---

### ⚠️ **Plagiarism Audit Detail**

> **Plagiarism Penalty of **-3 marks** applied.**
> All 4 tasks are 100% identical matches with `2025-SE-14` (Komal Shafique).

---

### 💬 **Overall Teacher Remarks**

**Dear Maryam,** your Lab 5 submission structurally demonstrates an excellent understanding of single, multilevel, hierarchical, and multiple inheritance in C++. 
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 6 Evaluation Report (Constructor Chaining & Destructors)

**Student Roll Number:** 2025-SE-06
**Student Name:** Maryam Jamil
**Task Folder Location:** `Lab 6\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor & Inheritance Implementation** | 3 | **3** | Excellent. Clean constructor chaining and multilevel constructor call order prints. |
| **Destructor & Memory Management** | 3 | **3** | Excellent. Clean destructors releasing dynamic memory on the heap. |
| **Classes, Attributes & Object Functionality** | 3 | **3** | Excellent. Classes and objects correct. |
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
> All 4 task files are 100% identical copy-matches (excluding spacing/comments) with student `2025-SE-14` (Komal Shafique).

---

### 💬 **Overall Teacher Remarks**

**Dear Maryam,** your Lab 6 submission demonstrates your understanding of constructor chaining and destructors in C++.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 7 Evaluation Report (Composition & Aggregation)

**Student Roll Number:** 2025-SE-06
**Student Name:** Maryam Jamil
**Task Folder Location:** `Lab 7\`

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
* **Plagiarism Penalty:** **-3 Marks**
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Passed (Good)**

---

### ⚠️ **Plagiarism Audit Detail**

> **Plagiarism Penalty of **-3 marks** applied.**
> Both task files are 100% identical copy-matches (excluding spacing/comments) with student `2025-SE-14` (Komal Shafique).

---

### 💬 **Overall Teacher Remarks**

**Dear Maryam,** your Lab 7 submission demonstrates your understanding of composition (strong ownership) and aggregation (shared references) in C++.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 8 Evaluation Report (Polymorphism & Virtual Functions)

**Student Roll Number:** 2025-SE-06
**Student Name:** Maryam Jamil
**Task Folder Location:** `Lab 8\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Polymorphism & Virtual Function** | 3 | **3** | **Excellent.** Virtual double area() defined in base Shape and properly overridden in Rectangle and Circle. |
| **Derived Classes & Area Calculation** | 3 | **3** | **Excellent.** Accurate area calculation for both Rectangle and Circle. |
| **Shape Pointer & Object Access** | 3 | **3** | **Excellent.** Shape* base pointer dynamically allocates and accesses derived shape instances on heap. |
| **Object Creation, Output & Execution** | 3 | **3** | **Excellent.** Clean compilation and runtime execution. |

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

**Dear Maryam,** your Lab 8 submission demonstrates your understanding of runtime polymorphism and virtual functions in C++.

<br>

---
---

<br>

# Lab 9 Evaluation Report (Operator Overloading ==)

**Student Roll Number:** 2025-SE-06
**Student Name:** Maryam Jamil
**Task Folder Location:** `Lab 9\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Data Members** | 3 | **3** | Excellent. Distance class encapsulates private feet and inches data members. |
| **Constructor Implementation** | 3 | **3** | Excellent. Parameterized constructor correctly initializes dimensions. |
| **`==` Operator Overloading** | 3 | **3** | Excellent. bool operator==(Distance d) overloaded as a member function. |
| **Object Usage, Output & Execution** | 3 | **3** | Excellent. Multiple Distance objects created, displayed, and compared cleanly. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **-3 Marks**
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Passed (Good)**

---

### ⚠️ **Plagiarism Audit Detail**

> **Plagiarism Penalty of **-3 marks** applied.**
> Source code file is an exact raw byte-for-byte copy-match (including formatting, display helper function, multiple test cases, and comments) with student `2025-SE-14` (Komal Shafique).

---

### 💬 **Overall Teacher Remarks**

**Dear Maryam,** your Lab 9 submission demonstrates your understanding of C++ operator overloading and member function comparison.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 10 Evaluation Report (File Handling in C++)

**Student Roll Number:** 2025-SE-06
**Student Name:** Maryam Jamil
**Task Folder Location:** `Lab 10\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **File Creation & Writing** | 3 | **3** | Excellent. Proper creation and writing of text and student records. |
| **File Reading & Content Display** | 3 | **3** | Excellent. Reading loops with getline and clean console display. |
| **Line Counting & File Appending/Copying** | 3 | **3** | Excellent. Line counting, append mode, and stream copying all implemented. |
| **File Handling, Execution & Output** | 3 | **3** | Excellent. Clean compilation and execution across all tasks. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **-3 Marks**
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Passed (Good)**

---

### ⚠️ **Plagiarism Audit Detail**

> **Plagiarism Penalty of **-3 marks** applied.**
> All 4 source code files are 100% exact raw byte-for-byte copy-matches with student `2025-SE-14` (Komal Shafique).

---

### 💬 **Overall Teacher Remarks**

**Dear Maryam,** your Lab 10 submission demonstrates your understanding of C++ file stream handling, reading, writing, and resource management.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 11 Evaluation Report (Friend Functions & Static Members)

**Student Roll Number:** 2025-SE-06
**Student Name:** Maryam Jamil
**Task Folder Location:** `Lab 11 & 12\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Friend Function Implementation** | 3 | **3** | Excellent core logic. Friend functions implemented properly for Box and Distance. |
| **Static Data Member Implementation** | 3 | **3** | Excellent core logic. BankAccount static variable total_accounts implemented and tracked. |
| **Static Member Function & Shared Data** | 3 | **3** | Excellent core logic. Employee static company_name and show_companyInfo() implemented. |
| **Object Creation, Output & Execution** | 3 | **3** | Excellent execution. Clean compilation and formatted output. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **-3 Marks**
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Passed (Good)**

---

### ⚠️ **Plagiarism Audit Detail**

> **Plagiarism Penalty of **-3 marks** applied.**
> 100% exact raw byte match detected with student 2025-SE-14 (Komal Shafique) across all tasks (Task 1 to Task 5). Symmetrical -3 marks penalty applied.

---

### 💬 **Overall Teacher Remarks**

**Dear Maryam,** your Lab 11 submission demonstrates a clear understanding of friend functions and static members in C++.

<br>

---
---

<br>

# Lab 12 Evaluation Report (Pure Virtual Functions & Abstract Classes)

**Student Roll Number:** 2025-SE-06
**Student Name:** Maryam Jamil
**Task Folder Location:** `Lab 11 & 12\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Abstract Base Class & Pure Virtual Function** | 3 | **3** | Excellent core logic. HospitalStaff abstract base class defined with pure virtual perform_duty(). |
| **Derived Classes & Function Overriding** | 3 | **3** | Excellent core logic. Doctor, Nurse, Receptionist derived classes properly override perform_duty(). |
| **Object Creation & Polymorphic Call** | 3 | **3** | Excellent core logic. Objects created and duties displayed. |
| **Execution, Output & Clean Compilation** | 3 | **3** | Excellent execution. Clean compilation and output. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **-3 Marks**
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Passed (Good)**

---

### ⚠️ **Plagiarism Audit Detail**

> **Plagiarism Penalty of **-3 marks** applied.**
> 100% exact raw byte match detected with student 2025-SE-14 (Komal Shafique) on Task 5.cpp. Symmetrical -3 marks penalty applied.

---

### 💬 **Overall Teacher Remarks**

**Dear Maryam,** your Lab 12 submission demonstrates an excellent understanding of abstract classes and pure virtual functions in C++.

<br>

---
---

<br>

# Lab 13 Evaluation Report (C++ Templates)

**Student Roll Number:** 2025-SE-06
**Student Name:** Maryam Jamil
**Task Folder Location:** `Lab 13\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Function Templates (`printTwice` & `findMin`)** | 3 | **3** | Excellent. Function templates are properly structured and follow the exact required signatures. |
| **Required Type Testing & Results** | 3 | **3** | Excellent. Clean test cases for all required data types with formatted console output. |
| **Class Templates (`Pair<T>` & `Calculator<T>`)** | 3 | **3** | Excellent. Proper class template architecture for Pair<T> and Calculator<T> returning type T. |
| **Object Creation, `main()` Usage & Execution** | 3 | **3** | Excellent. Clean compilation with zero errors and flawless execution across all 4 tasks. |

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

**Dear Maryam,** your Lab 13 submission demonstrates a strong understanding of generic programming, function templates, and class templates in C++.

<br>

---
---

<br>

# Lab 14 Evaluation Report (In-Class Lab: Vehicle Rental System)

**Student Roll Number:** 2025-SE-06  
**Student Name:** Maryam Jamil  
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

**Dear Maryam,** your Lab 14 (Vehicle Rental System) submission is missing from your repository. Please upload your complete Lab 14 files to receive evaluation.
