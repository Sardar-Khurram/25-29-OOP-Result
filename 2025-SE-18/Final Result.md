# Object-Oriented Programming — Consolidated Evaluation Report

**Student Name:** Tahreem Rasheed  
**Roll Number:** `2025-SE-18`  
**Total Maximum Marks:** 210  
**Total Obtained Marks:** 133 / 210 (63.33%)  
**Total Excluding Plagiarism:** 133 / 210 (63.33%)  

---

### 📊 **Student Grand Total Result Table**

| Lab Number | Total Marks | Obtained Marks | Excluding Plagarism | Status / Notes |
| :--- | :---: | :---: | :---: | :--- |
| Lab  1 | 12 | 10 | 10 | Submitted |
| Lab  2 | 12 | 8 | 8 | Submitted |
| Lab  3 | 18 | 13 | 13 | Submitted |
| Lab  4 | 12 | 12 | 12 | Submitted |
| Lab  5 | 12 | 11 | 11 | Submitted |
| Lab  6 | 12 | 12 | 12 | Submitted |
| Lab  7 | 12 | 12 | 12 | Submitted |
| Lab  8 | 12 | 11 | 11 | Submitted |
| Lab  9 | 12 | 8 | 8 | Submitted |
| Lab 10 | 12 | 12 | 12 | Submitted |
| Lab 11 | 12 | 12 | 12 | Submitted |
| Lab 12 | 12 | 12 | 12 | Submitted |
| Lab 13 | 12 | 0 | 0 | Absent / Missing |
| Lab 14 | 48 | 0 | 0 | Absent / Missing |
| **Grand Total** | **210** | **133** | **133** | **Percentage: 63.33% (Excl. Plag: 63.33%)** |

---


<br>

---
---

<br>

# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-18
**Student Name:** Tahreem Rasheed
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                                                                                |
| :----------------------------------------- | :-----------: | :----------------: | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| **Structure Definition & Member Function** |       3       |        **3**       | **Excellent.** The Task 1 submission correctly defines the `Student` structure with `firstName`, `lastName`, `rollNumber`, and `marks`, and correctly implements `displayStudentInfo()` to display the student's full name and marks. A structure variable is created, values are assigned, and the member function is called successfully.                                                                                                                         |
| **Array of Structures**                    |       3       |        **2**       | **Good.** The Task 2 submission correctly uses an array of structures, accepts multiple student records, and calls `displayStudentInfo()`. However, the `return 0;` statement is placed **inside the display loop**, so the program terminates after displaying only the **first student**. When tested with two students, only the first student's record was displayed. It also uses `Student students[n]`, which is a non-standard variable-length array in C++. |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** The Task 3 submission correctly declares `Student *ptr`, dynamically allocates a `Student` using `new`, assigns all members using `->`, calls `displayStudentInfo()` through the pointer, and correctly releases memory using `delete`.                                                                                                                                                                                                              |
| **Input, Output & Execution**              |       3       |        **2**       | **Good.** All three required programs compile successfully under C++17. Task 1 and Task 3 execute correctly. Task 2 compiles and accepts multiple records, but its output is logically incorrect because `return 0;` is inside the display loop, causing premature termination after the first record.                                                                                                                                                              |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **10 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **10 / 12 (83.33%)**
* **Grade Status:** **Good**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> The submitted files were evaluated against the Lab 1 requirements. No comparison submission was provided for this evaluation, so a 100% code-match determination cannot be established from the available materials. The Lab 1 policy specifies a **-3 mark penalty** when a student's code is found to be plagiarized or matching 100% with another student's code.

---

### 💬 **Overall Teacher Remarks**

**Dear Tahreem,** your submission demonstrates a **good understanding of structures, member functions, arrays of structures, and pointers to structures**.

Task 1 is correctly implemented and executed successfully. Task 3 also correctly demonstrates dynamic structure allocation and pointer-based member access, including proper memory cleanup with `delete`.

The main issue is in **Task 2**. The following statement is inside the display loop:

```cpp
return 0;
```

As a result, the program exits during the **first iteration**. I tested the program with two students, and although both students' data were entered, only the first student's information was displayed.

The relevant section should instead have the `return 0;` **after** the display loop:

```cpp
for(int i = 0; i < n; i++)
{
    students[i].displayStudentInfo();
}

return 0;
```

There is also an unnecessary line:

```cpp
void displayStudentInfo();
```

inside `main()`. This is merely a function declaration and does not perform any display operation.

Additionally, `Student students[n]` is a variable-length array, which GCC accepts as an extension but is not standard C++.

The additional **file 4** also does not implement the required `Student` structure member function and appears to be an incomplete/alternative attempt; it was not needed to satisfy the three required tasks.

**Overall performance: Good — 10/12.**

<br>

---
---

<br>

# Lab 2 Evaluation Report (All Tasks)
**Student Roll Number:** 2025-SE-18  
**Student Name:** Tahreem Rasheed

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** All 5 tasks are successfully implemented in separate source files, containing well-defined class definitions and separate header files. Class objects are instantiated properly in the client code files and perform the required operations. |
| **Member Variables** | 3 | **3** | **Excellent.** Data members are defined clearly with correct C++ data types. Excellent use of encapsulation (`private` attributes) is demonstrated across the tasks. |
| **Member Functions (Inside/Outside)** | 3 | **2** | **Good.** Separated inside/outside definitions correctly (inline inside the class for Task 1, outside the class using scope resolution `::` for Tasks 2, 3, and 5). Voter eligibility check uses `age > 18`. <br><br> *Deduction Reason (Task 4):* <br>In `header_temprature.h` (line 13), your conversion formula has an integer division bug: `celsius * 9/5 + 32`. Because both `9` and `5` are integers, the compiler performs integer division and truncates `9/5` to `1`. This means the code calculates `celsius + 32` instead of `celsius * 1.8 + 32`. |
| **Input/Output & Execution** | 3 | **3** | **Excellent.** All C++ source files compile successfully under `g++` and execute cleanly. Console outputs are clear. Task 5 (`Calculator`) correctly includes a division-by-zero check. |

---

### **Summary of Results**
* **Total Marks:** **11 / 12** (91.7%)
* **Grade Status:** **Passed with feedback**

### **Overall Teacher Remarks**
Dear Tahreem,
Very good job on Lab 2! Your folder structure is organized cleanly, separating the header class templates (`header_info.h`, etc.) from their execution drivers. All of your C++ code compiles successfully and runs.

Please note the integer division logical bug in Task 4's temperature converter: you wrote `celsius * 9/5 + 32`. In C++, division between integers results in an integer, so `9/5` evaluates to `1`. Writing it as `celsius * 9.0/5.0 + 32` or `celsius * 1.8 + 32` will solve this and calculate the temperature conversion correctly. Aside from this minor error, your work is excellent!

<br>

---
---

<br>

# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-18  
**Student Name:** Tahreem Rasheed
**Task Folder Location:** `encapsulation\encapsulation.cpp & header.h`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **2** | **Good.** Class header structure defined with preprocessor guards (`#ifndef PRODUCT_H`). <br>*Deductions (-1 mark):* Used all-lowercase class name `product` instead of `Product`, and lacks a `main()` execution driver function in all `.cpp` files. |
| **Member Variables** | 3 | **2** | **Good.** Attributes defined under `private:` access specifier. <br>*Deduction (-1 mark):* Declared `float price` instead of `double price` specified in rubric requirements. |
| **Member Functions (Inside/Outside)** | 3 | **2** | **Good.** Setters implement input validation (`!n.empty()`, `p > 0`, `q >= 0`). <br>*Deduction (-1 mark):* Method names use all-lowercase (`setname`, `setprice`, `setquantity`) instead of standard C++ camelCase (`setName`, `setPrice`, `setQuantity`). |
| **Use of Access Specifiers** | 3 | **3** | **Excellent.** Encapsulation is strictly followed (`private:` attributes, `public:` methods). |
| **Use of Getters/Setters** | 3 | **3** | **Excellent.** Getters and setters present with validation messages. |
| **Input/Output & Execution** | 3 | **1** | **Needs Improvement.** All files in `encapsulation\` (`header.h`, `encapsulation.cpp`, `header file.cpp`) contain identical class header definitions without a `main()` function, causing compilation linker failure (`undefined reference to main`). |

---

### 📈 **Summary of Results**
* **Total Marks:** **13 / 18 (72.2%)**
* **Grade Status:** **Passed with feedback**

### 💬 **Overall Teacher Remarks**
Dear Tahreem, Good effort on implementing setter validation logic in your `product` class! Manual inspection shows that all 3 files in your `encapsulation\` folder (`header.h`, `encapsulation.cpp`, and `header file.cpp`) contain identical header class code without a `main()` function, which causes compilation to fail with `undefined reference to main`. To improve in future labs: 1) Include a `main()` function in your `.cpp` file to test your class, 2) Use `double` for price attributes, and 3) Follow standard C++ camelCase naming (`Product`, `setName`, `setPrice`).

<br>

---
---

<br>

# Lab 4 Evaluation Report (Constructors & Destructors)
**Student Roll Number:** 2025-SE-18  
**Student Name:** Tahreem Rasheed
**Task Folder Location:** `constructor\`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor Implementation** | 3 | **3** | **Excellent.** Task 1 default constructor initializes `id=0`, `name="Not assigned"`, `salary=0.0`. Task 2 parameterized constructor initializes all banking attributes cleanly. |
| **Constructor Overloading** | 3 | **3** | **Excellent.** Task 3 `Rectangle` class overloads default (1.0), 2-parameter (`length`, `width`), and 1-parameter (square) constructors with `area()` method. |
| **Destructor & Object Management** | 3 | **3** | **Excellent.** Task 4 `Locker` class destructor correctly prints deallocation message. Demonstrates both scoped stack allocation `{}` and dynamic heap allocation via `new`/`delete`. |
| **Output & Execution** | 3 | **3** | **Excellent.** All 4 C++ files compile 100% cleanly with `g++` and execute with clear output formatting. |

---

### 📈 **Summary of Results**
* **Total Marks:** **12 / 12 (100%)**
* **Grade Status:** **Passed (Full Marks)**

### 💬 **Overall Teacher Remarks**
Dear Tahreem, Outstanding work on Lab 4! All four tasks are structured cleanly in your `constructor` folder and execute flawlessly. Excellent job!

<br>

---
---

<br>

# Lab 5 Evaluation Report (Inheritance)

**Student Roll Number:** 2025-SE-18
**Student Name:** Tahreem Rasheed
**Task Folder Location:** `Inheritance\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Inheritance Implementation** | 3 | **3** | Excellent. Single inheritance implemented correctly (Person -> Student) with separate display calls. |
| **Classes, Attributes & Functions** | 3 | **3** | Excellent. Multilevel inheritance implemented correctly (Person -> Employee -> Manager) with correct attribute propagation. |
| **Object Creation & Functionality** | 3 | **3** | Excellent. Hierarchical inheritance implemented correctly (Employee -> Developer/Designer) with separate input/output functions. |
| **Input, Output & Execution** | 3 | **2** | Good. Multiple inheritance implemented, but the program fails to compile because of a missing semicolon after the class definition of `Scanner` on line 22 of `Multiple inheritance.cpp`. |

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

**Dear Tahreem,** your Lab 5 submission structurally demonstrates a very good understanding of inheritance concepts in C++.

<br>

---
---

<br>

# Lab 6 Evaluation Report (Constructor Chaining & Destructors)

**Student Roll Number:** 2025-SE-18
**Student Name:** Tahreem Rasheed
**Task Folder Location:** `Constructor chaining\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor & Inheritance Implementation** | 3 | **3** | Excellent. Outstanding implementation of constructor chaining and multilevel constructor print sequence. |
| **Destructor & Memory Management** | 3 | **3** | Excellent. Superb destructor implementation, using a virtual base destructor and override derived destructor to ensure clean cleanup. |
| **Classes, Attributes & Object Functionality** | 3 | **3** | Excellent. Correctly separation of concerns and modern C++17 conventions used. |
| **Input, Output & Execution** | 3 | **3** | Excellent. Compiles and executes flawlessly with clear logging. |

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

**Dear Tahreem,** your Lab 6 submission demonstrates your understanding of constructor chaining and destructors in C++.

<br>

---
---

<br>

# Lab 7 Evaluation Report (Composition & Aggregation)

**Student Roll Number:** 2025-SE-18
**Student Name:** Tahreem Rasheed
**Task Folder Location:** `Agregation compsition\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Composition & Object Ownership** | 3 | **3** | Excellent. Proper composition with Calculator owning Display object and delegating output. |
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

**Dear Tahreem,** your Lab 7 submission demonstrates your understanding of composition (strong ownership) and aggregation (shared references) in C++.

<br>

---
---

<br>

# Lab 8 Evaluation Report (Polymorphism & Virtual Functions)

**Student Roll Number:** 2025-SE-18
**Student Name:** Tahreem Rasheed
**Task Folder Location:** `Overloading\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Polymorphism & Virtual Function** | 3 | **3** | Excellent. Virtual function `virtual double calculateSalary()` and virtual destructor defined in base class and properly overridden in derived classes. |
| **Derived Classes & Area Calculation** | 3 | **2** | Good. Deducted 1 mark under Derived Classes for implementing an Employee/Salary polymorphism model instead of the assigned Shape Area (Rectangle/Circle) task. |
| **Shape Pointer & Object Access** | 3 | **3** | Excellent. Base class pointer `Employee*` is used to invoke overridden methods dynamically at runtime. |
| **Object Creation, Output & Execution** | 3 | **3** | Excellent. Flawless compilation and execution. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **11 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **11 / 12 (91.7%)**
* **Grade Status:** **Passed (Excellent)**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> As per standard course grading policy for single-structure tasks, code similarity is expected and no plagiarism penalty is assessed.

---

### 💬 **Overall Teacher Remarks**

**Dear Tahreem,** your Lab 8 submission demonstrates your understanding of runtime polymorphism and virtual functions in C++.

<br>

---
---

<br>

# Lab 9 Evaluation Report (Operator Overloading ==)

**Student Roll Number:** 2025-SE-18
**Student Name:** Tahreem Rasheed
**Task Folder Location:** `Friend function\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Data Members** | 3 | **3** | Excellent. Distance class encapsulates private feet and inches data members. |
| **Constructor Implementation** | 3 | **3** | Excellent. Parameterized constructor correctly initializes distance values. |
| **`==` Operator Overloading** | 3 | **0** | Poor. Deducted 3 marks because `==` operator overloading is not implemented (implemented a friend function `addDistance` for adding distances instead). |
| **Object Usage, Output & Execution** | 3 | **2** | Good. Deducted 1 mark because equality comparison output is missing. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **8 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **8 / 12 (66.7%)**
* **Grade Status:** **Passed (Good)**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> No similarity matches found.

---

### 💬 **Overall Teacher Remarks**

**Dear Tahreem,** your Lab 9 submission demonstrates your understanding of C++ operator overloading and member function comparison.

<br>

---
---

<br>

# Lab 10 Evaluation Report (File Handling in C++)

**Student Roll Number:** 2025-SE-18
**Student Name:** Tahreem Rasheed
**Task Folder Location:** `File handling\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **File Creation & Writing** | 3 | **3** | Excellent. File writing implemented correctly with distinct message lines and student records. |
| **File Reading & Content Display** | 3 | **3** | Excellent. ifstream reading and full console output display implemented cleanly. |
| **Line Counting & File Appending/Copying** | 3 | **3** | Excellent. Accurate line count, append mode, and stream copy functionality. |
| **File Handling, Execution & Output** | 3 | **3** | Excellent. All 4 programs compile with zero errors and execute cleanly. |

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

**Dear Tahreem,** your Lab 10 submission demonstrates your understanding of C++ file stream handling, reading, writing, and resource management.

<br>

---
---

<br>

# Lab 11 Evaluation Report (Friend Functions & Static Members)

**Student Roll Number:** 2025-SE-18
**Student Name:** Tahreem Rasheed
**Task Folder Location:** `Friend function\ & Static member\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Friend Function Implementation** | 3 | **3** | Excellent. Proper friend functions for Box and Distance with friend declarations and private member access. |
| **Static Data Member Implementation** | 3 | **3** | Excellent. BankAccount static account counter properly initialized and incremented in constructor. |
| **Static Member Function & Shared Data** | 3 | **3** | Excellent. Employee static company name and static function displayCompanyInfo() invoked properly via Employee::displayCompanyInfo(). |
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

**Dear Tahreem,** your Lab 11 submission demonstrates a clear understanding of friend functions and static members in C++.

<br>

---
---

<br>

# Lab 12 Evaluation Report (Pure Virtual Functions & Abstract Classes)

**Student Roll Number:** 2025-SE-18
**Student Name:** Tahreem Rasheed
**Task Folder Location:** `Static member\Hospital managment.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Abstract Base Class & Pure Virtual Function** | 3 | **3** | Excellent. HospitalStaff base abstract class properly constructed with virtual destructor and pure virtual performDuty(). |
| **Derived Classes & Function Overriding** | 3 | **3** | Excellent. Derived classes Doctor, Nurse, and Receptionist override performDuty() with detailed duty implementations. |
| **Object Creation & Polymorphic Call** | 3 | **3** | Excellent. Polymorphic vector of base pointers (vector<HospitalStaff*>) used to invoke performDuty() dynamically with proper memory cleanup. |
| **Execution, Output & Clean Compilation** | 3 | **3** | Excellent. Clean compilation and flawless execution. |

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

**Dear Tahreem,** your Lab 12 submission demonstrates an excellent understanding of abstract classes and pure virtual functions in C++.

<br>

---
---

<br>

# Lab 13 Evaluation Report (C++ Templates)

**Student Roll Number:** 2025-SE-18
**Student Name:** Tahreem Rasheed
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

**Dear Tahreem,** your Lab 13 submission is missing from your repository. Please upload your complete Lab 13 Templates tasks to receive evaluation.

<br>

---
---

<br>

# Lab 14 Evaluation Report (In-Class Lab: Vehicle Rental System)

**Student Roll Number:** 2025-SE-18  
**Student Name:** Tahreem Rasheed  
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

**Dear Tahreem,** your Lab 14 (Vehicle Rental System) submission is missing from your repository. Please upload your complete Lab 14 files to receive evaluation.
