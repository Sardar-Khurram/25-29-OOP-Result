# Object-Oriented Programming — Consolidated Evaluation Report

**Student Name:** Laiba Imtiaz  
**Roll Number:** `2025-SE-32`  
**Total Maximum Marks:** 210  
**Total Obtained Marks:** 91 / 210 (43.33%)  
**Total Excluding Plagiarism:** 91 / 210 (43.33%)  

---

### 📊 **Student Grand Total Result Table**

| Lab Number | Total Marks | Obtained Marks | Excluding Plagarism | Status / Notes |
| :--- | :---: | :---: | :---: | :--- |
| Lab  1 | 12 | 12 | 12 | Submitted |
| Lab  2 | 12 | 7 | 7 | Submitted |
| Lab  3 | 18 | 17 | 17 | Submitted |
| Lab  4 | 12 | 1 | 1 | Submitted |
| Lab  5 | 12 | 6 | 6 | Submitted |
| Lab  6 | 12 | 12 | 12 | Submitted |
| Lab  7 | 12 | 12 | 12 | Submitted |
| Lab  8 | 12 | 12 | 12 | Submitted |
| Lab  9 | 12 | 0 | 0 | Absent / Missing |
| Lab 10 | 12 | 12 | 12 | Submitted |
| Lab 11 | 12 | 0 | 0 | Absent / Missing |
| Lab 12 | 12 | 0 | 0 | Absent / Missing |
| Lab 13 | 12 | 0 | 0 | Absent / Missing |
| Lab 14 | 48 | 0 | 0 | Absent / Missing |
| **Grand Total** | **210** | **91** | **91** | **Percentage: 43.33% (Excl. Plag: 43.33%)** |

---


<br>

---
---

<br>

# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-32
**Student Name:** Laiba Imtiaz
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                                                                |
| :----------------------------------------- | :-----------: | :----------------: | :-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **3**       | **Excellent.** Task 1 correctly defines the `Student` structure with `firstName`, `lastName`, `rollNumber`, and `marks`. The required `displayStudentInfo()` function correctly displays the student's full name and marks. A structure variable is created, all required values are assigned, and the member function is called successfully.                                                                                                      |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** Task 2 correctly implements an array of `Student` structures, accepts multiple student records through user input, and calls `displayStudentInfo()` for every student. I tested it with two student records, and both records were entered and displayed correctly. The only technical issue is the use of `Student students[n]`, which is a variable-length array and is not standard C++, although GCC accepts it as an extension. |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** Task 3 correctly dynamically allocates a `Student` using `new Student`, assigns all required members through the pointer using `->`, calls `displayStudentInfo()` through the pointer, and properly releases the memory using `delete`.                                                                                                                                                                                              |
| **Input, Output & Execution**              |       3       |        **3**       | **Excellent.** All three programs compiled successfully with `g++ -std=c++17 -Wall -Wextra -pedantic`. Task 1 executed correctly. Task 2 was tested with two student records and displayed both records correctly. Task 3 also executed correctly with user-provided student information. Task 2 generated only a non-fatal warning for its non-standard variable-length array.                                                                     |

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

**Dear Laiba,** your Lab 1 submission demonstrates an **excellent understanding of structures, arrays of structures, and structure pointers**. All three tasks satisfy the required functionality.

Task 1 correctly implements the required `Student` structure, member function, structure variable, and data assignment. Task 2 correctly handles multiple student records through an array and separate input and display loops. Task 3 demonstrates proper dynamic allocation, pointer-based access using `->`, invocation of `displayStudentInfo()` through the pointer, and correct memory cleanup with `delete`.

I **compiled and executed all three programs using C++17 with warnings enabled**. All three compiled successfully. Task 2 produced one compiler warning because `Student students[n]` is a variable-length array, which GCC permits as an extension but which is **not standard C++**. This did not prevent the program from executing correctly.

For a standard C++ solution, Task 2 should use `vector<Student>` or standard dynamic allocation instead of a variable-length array.

**Overall performance: Excellent — 12/12.**

<br>

---
---

<br>

# Lab 2 Evaluation Report (All Tasks)

**Student Roll Number:** 2025-SE-32  
**Student Name:** Laiba Imtiaz

---

### **Evaluation Rubric Table**

| Criteria | Max Marks | Obtained Marks | Remarks |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | 3 | All 5 classes defined correctly and objects instantiated properly in `main()`. |
| **Member Variables** | 3 | 3 | Data members correctly defined with appropriate access specifiers and data types. |
| **Member Functions (Inside/Outside)** | 3 | 2 | Deduction (-1): Task 4 has an integer division bug (`9/5` evaluates to `1` instead of `9.0/5.0`), and Task 5 `divide()` lacks a division-by-zero check. |
| **Input/Output & Execution** | 3 | 3 | All 5 tasks compile cleanly and execute properly. |
| **Subtotal / Core Score** | **12** | **11** | **Core marks before plagiarism penalty** |
| **Plagiarism Penalty** | - | **-5** | Flat deduction applied due to plagiarized task code. |
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
> `Lab02Task04.cpp` (Temperature conversion class) is a 100% code match with **2025-SE-13**'s `WEEK 2 Task 5.cpp`. A flat penalty of -3 marks has been applied in accordance with the lab grading policy.

---

### **Overall Teacher Remarks**

- **Task 1 (Student):** Functions defined inside class correctly. Good structure.
- **Task 2 (Rectangle):** Functions defined outside class using scope resolution operator `::`. Perimeter formula `2 * (length + width)` is correct.
- **Task 3 (Voter):** Functions defined outside class using `::`. Age check condition (`age > 18`) implemented correctly.
- **Task 4 (Temperature):** Code plagiarized from student 2025-SE-13. Contains logic bug: expression `celsius * 9/5 + 32` performs integer division (`9/5` = 1), causing incorrect Fahrenheit conversion calculations. Should use `9.0 / 5.0` or floating-point literals.
- **Task 5 (Calculator):** Functions defined outside using `::`. Missing guard/validation for division by zero in `divide()`.

<br>

---
---

<br>

# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-32  
**Student Name:** Laiba Imtiaz
**Task Folder Location:** `Lab 3\Lab03Task05.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** `Product` class defined cleanly and instantiated in `Lab03Task05.cpp`. |
| **Member Variables** | 3 | **3** | **Excellent.** Private attributes (`name`, `price`, `quantity`) correctly declared with proper data types (`string`, `double`, `int`). |
| **Member Functions (Inside/Outside)** | 3 | **3** | **Excellent.** Setters validate non-empty string (`n != ""`), positive price (`p > 0`), and non-negative quantity (`q >= 0`). |
| **Use of Access Specifiers** | 3 | **3** | **Excellent.** Encapsulation is strictly followed (`private:` attributes, `public:` methods). |
| **Use of Getters/Setters** | 3 | **3** | **Excellent.** Getters and setters present and fully functional. |
| **Input/Output & Execution** | 3 | **2** | **Good.** Compiles cleanly with `g++` and executes test cases cleanly. <br>*Deduction (-1 mark):* In `main()`, completely skipped testing invalid inputs (`p.setName("")`, `p.setPrice(-50)`, `p.setQuantity(-2)`). |

---

### 📈 **Summary of Results**
* **Total Marks:** **17 / 18 (94.4%)**
* **Grade Status:** **Excellent**

### 💬 **Overall Teacher Remarks**
Dear Laiba, Great work on Lab 3! Your `Product` class structure and setter validation logic are implemented cleanly. Remember to include the invalid input test driver calls (`setName("")`, `setPrice(-50)`, `setQuantity(-2)`) in `main()` for future labs. Well done!

<br>

---
---

<br>

# Lab 4 Evaluation Report (Constructors & Destructors)
**Student Roll Number:** 2025-SE-32  
**Student Name:** Laiba Imtiaz
**Task Folder Location:** `Lab 4\`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor Implementation** | 3 | **0** | **Missing.** Submitted Inheritance tasks under `Lab 4` instead of the required Constructor & Destructor tasks (`Employee` & `BankAccount`). |
| **Constructor Overloading** | 3 | **0** | **Missing.** `Rectangle` constructor overloading task is missing from submission. |
| **Destructor & Object Management** | 3 | **0** | **Missing.** `Locker` destructor task is missing from submission. |
| **Output & Execution** | 3 | **1** | **Need Improvement.** Submitted C++ files compile but belong to the Inheritance lab, not the assigned Constructor/Destructor lab rubrics. |

---

### 📈 **Summary of Results**
* **Total Marks:** **1 / 12 (8.3%)**
* **Grade Status:** **Passed with feedback**

### 💬 **Overall Teacher Remarks**
Dear Laiba, Your `Lab 4` folder contains Inheritance code instead of the required Constructor & Destructor lab tasks. Please upload the correct Lab 4 task files (`Employee`, `BankAccount`, `Rectangle`, `Locker`) to receive full evaluation.

<br>

---
---

<br>

# Lab 5 Evaluation Report (Inheritance)

**Student Roll Number:** 2025-SE-32
**Student Name:** Laiba Imtiaz
**Task Folder Location:** `Lab5\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Inheritance Implementation** | 3 | **1** | Needs Improvement. Only single and multilevel inheritance types implemented. Hierarchical and Multiple inheritance tasks completely omitted. |
| **Classes, Attributes & Functions** | 3 | **1** | Needs Improvement. Omitted major classes like Employee (Developer/Designer) and Printer/Scanner/Photocopier. |
| **Object Creation & Functionality** | 3 | **1** | Needs Improvement. Omitted object creation and calling for two entire tasks. |
| **Input, Output & Execution** | 3 | **3** | Excellent. Submitted files compile and execute cleanly. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **6 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **6 / 12 (50.0%)**
* **Grade Status:** **Passed with feedback**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> No similarity matches found.

---

### 💬 **Overall Teacher Remarks**

**Dear Laiba,** your Lab 5 submission structurally demonstrates inheritance concepts in C++.

<br>

---
---

<br>

# Lab 6 Evaluation Report (Constructor Chaining & Destructors)

**Student Roll Number:** 2025-SE-32
**Student Name:** Laiba Imtiaz
**Task Folder Location:** `Lab5\ (Swapped folder)`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor & Inheritance Implementation** | 3 | **3** | Excellent. Clean constructor chaining and multilevel constructor delegation implementation in Lab 5 folder. |
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

**Dear Laiba,** your Lab 6 submission demonstrates your understanding of constructor chaining and destructors in C++.

<br>

---
---

<br>

# Lab 7 Evaluation Report (Composition & Aggregation)

**Student Roll Number:** 2025-SE-32
**Student Name:** Laiba Imtiaz
**Task Folder Location:** `lab7\`

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

**Dear Laiba,** your Lab 7 submission demonstrates your understanding of composition (strong ownership) and aggregation (shared references) in C++.

<br>

---
---

<br>

# Lab 8 Evaluation Report (Polymorphism & Virtual Functions)

**Student Roll Number:** 2025-SE-32
**Student Name:** Laiba Imtiaz
**Task Folder Location:** `Lab08\`

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

**Dear Laiba,** your Lab 8 submission demonstrates your understanding of runtime polymorphism and virtual functions in C++.

<br>

---
---

<br>

# Lab 9 Evaluation Report (Operator Overloading ==)

**Student Roll Number:** 2025-SE-32
**Student Name:** Laiba Imtiaz
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

**Dear Laiba,** your Lab 9 submission is missing from your repository. Please upload your complete Lab 9 operator overloading tasks to receive evaluation.

<br>

---
---

<br>

# Lab 10 Evaluation Report (File Handling in C++)

**Student Roll Number:** 2025-SE-32
**Student Name:** Laiba Imtiaz
**Task Folder Location:** `Lab9-3\ (Swapped folder)`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **File Creation & Writing** | 3 | **3** | Excellent. Proper creation and writing of text and student records in Lab9-3 folder. |
| **File Reading & Content Display** | 3 | **3** | Excellent. Clean reading loops using ifstream and getline with stream opening error checks. |
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

**Dear Laiba,** your Lab 10 submission demonstrates your understanding of C++ file stream handling, reading, writing, and resource management.

<br>

---
---

<br>

# Lab 11 Evaluation Report (Friend Functions & Static Members)

**Student Roll Number:** 2025-SE-32
**Student Name:** Laiba Imtiaz
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

**Dear Laiba,** your Lab 11 submission is missing from your repository. Please upload your complete Lab 11 tasks to receive evaluation.

<br>

---
---

<br>

# Lab 12 Evaluation Report (Pure Virtual Functions & Abstract Classes)

**Student Roll Number:** 2025-SE-32
**Student Name:** Laiba Imtiaz
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

**Dear Laiba,** your Lab 12 submission is missing from your repository. Please upload your complete Lab 12 tasks to receive evaluation.

<br>

---
---

<br>

# Lab 13 Evaluation Report (C++ Templates)

**Student Roll Number:** 2025-SE-32
**Student Name:** Laiba Imtiaz
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

**Dear Laiba,** your Lab 13 submission is missing from your repository. Please upload your complete Lab 13 Templates tasks to receive evaluation.

<br>

---
---

<br>

# Lab 14 Evaluation Report (In-Class Lab: Vehicle Rental System)

**Student Roll Number:** 2025-SE-32  
**Student Name:** Laiba Imtiaz  
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

**Dear Laiba,** your Lab 14 (Vehicle Rental System) submission is missing from your repository. Please upload your complete Lab 14 files to receive evaluation.
