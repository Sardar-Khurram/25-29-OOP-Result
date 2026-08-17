# Object-Oriented Programming — Consolidated Evaluation Report

**Student Name:** Rohail Abbas  
**Roll Number:** `2025-SE-33`  
**Total Maximum Marks:** 210  
**Total Obtained Marks:** 87 / 210 (41.43%)  
**Total Excluding Plagiarism:** 87 / 210 (41.43%)  

---

### 📊 **Student Grand Total Result Table**

| Lab Number | Total Marks | Obtained Marks | Excluding Plagarism | Status / Notes |
| :--- | :---: | :---: | :---: | :--- |
| Lab  1 | 12 | 12 | 12 | Submitted |
| Lab  2 | 12 | 10 | 10 | Submitted |
| Lab  3 | 18 | 17 | 17 | Submitted |
| Lab  4 | 12 | 12 | 12 | Submitted |
| Lab  5 | 12 | 12 | 12 | Submitted |
| Lab  6 | 12 | 12 | 12 | Submitted |
| Lab  7 | 12 | 12 | 12 | Submitted |
| Lab  8 | 12 | 0 | 0 | Absent / Missing |
| Lab  9 | 12 | 0 | 0 | Absent / Missing |
| Lab 10 | 12 | 0 | 0 | Absent / Missing |
| Lab 11 | 12 | 0 | 0 | Absent / Missing |
| Lab 12 | 12 | 0 | 0 | Absent / Missing |
| Lab 13 | 12 | 0 | 0 | Absent / Missing |
| Lab 14 | 48 | 0 | 0 | Absent / Missing |
| **Grand Total** | **210** | **87** | **87** | **Percentage: 41.43% (Excl. Plag: 41.43%)** |

---


<br>

---
---

<br>

# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-33
**Student Name:** Rohail Abbas
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                 |
| :----------------------------------------- | :-----------: | :----------------: | :--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **3**       | **Excellent.** The Task 1 submission correctly defines the `Student` structure with `firstName`, `lastName`, `rollNumber`, and `marks`. The `displayStudentInfo()` member function correctly displays the student's full name and marks. A structure variable is created, all required values are assigned, and the function is called successfully. |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** The Task 2 submission correctly uses an array of `Student` structures (`Student s[50]`), accepts multiple student records through user input, and calls `displayStudentInfo()` for every student after input is complete. The required student information is stored and displayed correctly.                                         |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** The Task 3 submission correctly declares a pointer to a `Student` structure, points it to a structure object using `ptr = &s1`, assigns all required members through `->`, and calls `displayStudentInfo()` through the pointer. This satisfies the task's pointer-based access and assignment requirement.                           |
| **Input, Output & Execution**              |       3       |        **3**       | **Excellent.** All three submitted programs compile successfully and implement the required program flow. The three files cover all three tasks: the structure-variable implementation, array-of-structures implementation, and pointer-to-structure implementation.                                                                                 |

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

**Dear Rohail,** your Lab 1 submission demonstrates an **excellent understanding of structures, arrays of structures, and structure pointers**.

All three required tasks are present, even though they were not presented in the same order as the question. The files correspond to:

* **Task 1:** Structure variable with assigned values and `displayStudentInfo()`.
* **Task 2:** Array of structures with user input for multiple students.
* **Task 3:** Pointer to a structure with member assignment through `->`.

Task 3 uses:

```cpp
Student s1;
Student *ptr;
ptr = &s1;
```

This is valid for the given requirement because the task asks for a pointer to a structure and assignment/access through that pointer; it does **not** explicitly require `new`/`delete`.

The array implementation uses a fixed-size array of 50 elements, which is a valid and straightforward solution.

**Overall performance: Excellent — 12/12.**

<br>

---
---

<br>

# Lab 2 Evaluation Report (All Tasks)
**Student Roll Number:** 2025-SE-33  
**Student Name:** Rohail Abbas

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** All 5 required classes (`Student`, `Rectangle`, `Voter`, `Temperature`, `Calculator`) are implemented as clean C++ programs (`L2 TASK 1.cpp` to `L2 TASK 5.cpp`) in the repository root directory. Objects are instantiated properly. |
| **Member Variables** | 3 | **3** | **Excellent.** Member attributes are declared with proper C++ data types (`string`, `int`, `float`) and public access. |
| **Member Functions (Inside/Outside)** | 3 | **3** | **Excellent.** Member functions are defined inline and outline using the scope resolution operator `::` in `Rectangle` and `Voter`. Voter eligibility check correctly uses `age > 18`. Rectangle perimeter formula is correct: `2 * (length + width)`. |
| **Input/Output & Execution** | 3 | **3** | **Excellent.** All 5 files compile cleanly under `g++` without warnings or errors and execute properly with clear user interaction. |

---

### **Summary of Results**
* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **0 Marks** (No full assignment copy detected)
* **Final Marks Obtained:** **12 / 12** (100.0%)
* **Grade Status:** **Excellent (Full Marks)**

---

### **Overall Teacher Remarks**
Dear Rohail,

Great work on Lab 2! All five assigned tasks (`L2 TASK 1.cpp` through `L2 TASK 5.cpp`) were found in your root repository folder. Your code compiles cleanly with zero errors under `g++`, follows proper OOP scoping rules (`::`), and handles input/output smoothly.

Your overall repository and code structure are independent and unique (4 out of 5 files are completely unique), so no plagiarism penalty applies.

Your final mark for Lab 2 is **12/12** (Full Marks). Keep up the good work!

<br>

---
---

<br>

# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-33  
**Student Name:** Rohail Abbas
**Task Folder Location:** `LAB 3 TASK1.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** `Product` class structure defined cleanly and tested in `LAB 3 TASK1.cpp`. |
| **Member Variables** | 3 | **3** | **Excellent.** Attributes (`name`, `price`, `quantity`) declared under `private:` with proper data types. |
| **Member Functions (Inside/Outside)** | 3 | **3** | **Excellent.** Setters validate `n != ""`, `p > 0`, `q >= 0` with clear error messages. |
| **Use of Access Specifiers** | 3 | **3** | **Excellent.** Encapsulation is strictly followed (`private:` attributes, `public:` methods). |
| **Use of Getters/Setters** | 3 | **3** | **Excellent.** All getters and setters present and functional. |
| **Input/Output & Execution** | 3 | **2** | **Good.** Compiles cleanly with `g++` and runs cleanly. <br>*Deduction (-1 mark):* In `main()`, user input is read interactively via `cin >>` instead of running the rubric's automated test sequence (`p.setName("")`, `p.setPrice(-50)`, `p.setQuantity(-2)`) first. |

---

### 📈 **Summary of Results**
* **Total Marks:** **17 / 18 (94.4%)**
* **Grade Status:** **Excellent**

### 💬 **Overall Teacher Remarks**
Dear Rohail, Great submission for Lab 3! Your class encapsulation and getters/setters are implemented correctly. Include the required automated test driver cases alongside user prompts in `main()` for future labs. Good effort!

<br>

---
---

<br>

# Lab 4 Evaluation Report (Constructors & Destructors)
**Student Roll Number:** 2025-SE-33  
**Student Name:** Rohail Abbas
**Task Folder Location:** `OOP LAB 4 TASK 2.cpp`, `OOP LAB 4 TASK 3.cpp`, `OOP LAB 4 TASK 4.cpp`, `OOPS LAB 4 TASK 1.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor Implementation** | 3 | **3** | **Excellent.** Task 1 default constructor initializes `id=0`, `name="No Name"`, `salary=0.0`. Task 2 parameterized constructor uses `this->` pointer to initialize all banking attributes cleanly. |
| **Constructor Overloading** | 3 | **3** | **Excellent.** Task 3 `Rectangle` class overloads default (1.0), 2-parameter (`length`, `width`), and 1-parameter (square) constructors cleanly with `calculateArea()` method. |
| **Destructor & Object Management** | 3 | **3** | **Excellent.** Task 4 `Locker` class destructor correctly prints deallocation message. Demonstrates both scoped stack allocation `{}` and dynamic heap allocation via `new`/`delete`. |
| **Output & Execution** | 3 | **3** | **Excellent.** All 4 C++ files compile 100% cleanly with `g++` and execute with clean output banners. |

---

### 📈 **Summary of Results**
* **Total Marks:** **12 / 12 (100%)**
* **Grade Status:** **Passed (Full Marks)**

### 💬 **Overall Teacher Remarks**
Dear Rohail, Outstanding submission for Lab 4! All four tasks are written cleanly, well-structured, and function properly. Excellent work!

<br>

---
---

<br>

# Lab 5 Evaluation Report (Inheritance)

**Student Roll Number:** 2025-SE-33
**Student Name:** Rohail Abbas
**Task Folder Location:** `[Root Folder]\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Inheritance Implementation** | 3 | **3** | Excellent. All four inheritance types implemented correctly in the root folder. |
| **Classes, Attributes & Functions** | 3 | **3** | Excellent. Correct encapsulation and attribute mapping. |
| **Object Creation & Functionality** | 3 | **3** | Excellent. Objects and function calls work perfectly. |
| **Input, Output & Execution** | 3 | **3** | Excellent. Compiles and executes with clear user feedback. |

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

**Dear Rohail,** your Lab 5 submission structurally demonstrates inheritance concepts in C++.

<br>

---
---

<br>

# Lab 6 Evaluation Report (Constructor Chaining & Destructors)

**Student Roll Number:** 2025-SE-33
**Student Name:** Rohail Abbas
**Task Folder Location:** `[Root Folder]\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor & Inheritance Implementation** | 3 | **3** | Excellent. All four constructor/destructor tasks implemented correctly in the root folder. |
| **Destructor & Memory Management** | 3 | **3** | Excellent. Correct encapsulation and dynamic memory cleanup using virtual base destructors. |
| **Classes, Attributes & Object Functionality** | 3 | **3** | Excellent. Objects and function calls work perfectly. |
| **Input, Output & Execution** | 3 | **3** | Excellent. Compiles and executes cleanly. |

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

**Dear Rohail,** your Lab 6 submission demonstrates your understanding of constructor chaining and destructors in C++.

<br>

---
---

<br>

# Lab 7 Evaluation Report (Composition & Aggregation)

**Student Roll Number:** 2025-SE-33
**Student Name:** Rohail Abbas
**Task Folder Location:** `[Root Folder]\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Composition & Object Ownership** | 3 | **3** | Excellent. Composition logic and object ownership are correctly implemented. |
| **Aggregation & Shared Object Usage** | 3 | **3** | Excellent. Aggregation with shared Calculator and Student objects is correctly implemented. |
| **Classes, Functions & Data Management** | 3 | **3** | Excellent. All required arithmetic methods and lastResult tracking are correctly implemented. |
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

**Dear Rohail,** your Lab 7 submission demonstrates your understanding of composition (strong ownership) and aggregation (shared references) in C++.

<br>

---
---

<br>

# Lab 8 Evaluation Report (Polymorphism & Virtual Functions)

**Student Roll Number:** 2025-SE-33
**Student Name:** Rohail Abbas
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

**Dear Rohail,** your Lab 8 submission is missing from your repository. Please upload your complete Lab 8 runtime polymorphism tasks to receive evaluation.

<br>

---
---

<br>

# Lab 9 Evaluation Report (Operator Overloading ==)

**Student Roll Number:** 2025-SE-33
**Student Name:** Rohail Abbas
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

**Dear Rohail,** your Lab 9 submission is missing from your repository. Please upload your complete Lab 9 operator overloading tasks to receive evaluation.

<br>

---
---

<br>

# Lab 10 Evaluation Report (File Handling in C++)

**Student Roll Number:** 2025-SE-33
**Student Name:** Rohail Abbas
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

**Dear Rohail,** your Lab 10 submission is missing from your repository. Please upload your complete Lab 10 File Handling tasks to receive evaluation.

<br>

---
---

<br>

# Lab 11 Evaluation Report (Friend Functions & Static Members)

**Student Roll Number:** 2025-SE-33
**Student Name:** Rohail Abbas
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

**Dear Rohail,** your Lab 11 submission is missing from your repository. Please upload your complete Lab 11 tasks to receive evaluation.

<br>

---
---

<br>

# Lab 12 Evaluation Report (Pure Virtual Functions & Abstract Classes)

**Student Roll Number:** 2025-SE-33
**Student Name:** Rohail Abbas
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

**Dear Rohail,** your Lab 12 submission is missing from your repository. Please upload your complete Lab 12 tasks to receive evaluation.

<br>

---
---

<br>

# Lab 13 Evaluation Report (C++ Templates)

**Student Roll Number:** 2025-SE-33
**Student Name:** Rohail Abbas
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

**Dear Rohail,** your Lab 13 submission is missing from your repository. Please upload your complete Lab 13 Templates tasks to receive evaluation.

<br>

---
---

<br>

# Lab 14 Evaluation Report (In-Class Lab: Vehicle Rental System)

**Student Roll Number:** 2025-SE-33  
**Student Name:** Muhammad Faizan  
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

**Dear Muhammad,** your Lab 14 (Vehicle Rental System) submission is missing from your repository. Please upload your complete Lab 14 files to receive evaluation.
