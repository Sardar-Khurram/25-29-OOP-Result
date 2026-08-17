# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-38
**Student Name:** Ammar Yasir
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                  |
| :----------------------------------------- | :-----------: | :----------------: | :-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **3**       | **Excellent.** The submission correctly defines a `student` structure containing first name, last name, roll number, and marks. The required `displayStudentInfo()` function correctly displays the student's name and marks. The single-object implementation creates a structure variable, assigns all required values, and calls the member function successfully. |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** The array implementation correctly creates an array of two `student` structures, accepts the required details for multiple students through input, and then calls `displayStudentInfo()` for every record. The input and display loops are correctly separated.                                                                                        |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** The pointer implementation correctly declares a structure pointer, points it to a structure object using `ptr = &std`, assigns all required members through the `->` operator, and calls `displayStudentInfo()` through the pointer. This satisfies the pointer-based access requirement.                                                              |
| **Input, Output & Execution**              |       3       |        **3**       | **Excellent.** The three required implementations are logically complete and compile successfully. The array version handles multiple records, the single-structure version displays an assigned record, and the pointer version accepts and displays data through the structure pointer.                                                                             |

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

**Dear Ammar,** your submission demonstrates an **excellent understanding of structures, arrays of structures, and structure pointers**.

All three required implementations are present. The single-structure implementation correctly assigns and displays a student record. The array implementation correctly accepts multiple students and displays all records. The pointer implementation correctly demonstrates structure-pointer access using the `->` operator.

The files were presented in a different order than the task sequence, but the required three concepts are all present and correctly implemented, so **no marks are deducted for file ordering**.

An additional fourth code snippet was also provided. It appears to be another attempt at Task 1/Task 2, but it is not needed because the required three implementations are already complete. It should not affect the core rubric score.

One minor technical observation is that the structure is named `student` rather than `Student`. This does not affect functionality and does not warrant a deduction under the supplied rubric.

**Overall performance: Excellent — 12/12.**

<br>

---
---

<br>

# Lab 2 Evaluation Report (All Tasks)

**Student Roll Number:** 2025-SE-38  
**Student Name:** Ammar Yasir

---

### Evaluation Rubric Table

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** All classes (`Student`, `Rectangle`, `Voter`, `Temperature`, `Calculator`) are defined correctly and objects are instantiated properly in `main()`. |
| **Member Variables** | 3 | **3** | **Excellent.** Attributes for all classes are declared with appropriate C++ data types across all 5 tasks. |
| **Member Functions (Inside/Outside)** | 3 | **1** | **Needs Improvement.** Followed scoping conventions (inside for Task 1 & Task 4; outside using `::` for Task 2, Task 3, & Task 5), but several critical logic and syntax errors exist:<br>1. **Task 2 (`Rectangle.cpp`):** `area()` uses `area = length + width` (addition instead of multiplication). Perimeter function named `parameter()` (typo) uses wrong formula `2 * (length * width)` (multiplication instead of addition).<br>2. **Task 4 (`Temperature.cpp`):** `covertor()` function declared with `double` return type but lacks a `return` statement.<br>3. **Task 5 (`Calculator.cpp`):** `divide()` function lacks a division-by-zero validation check. |
| **Input/Output & Execution** | 3 | **2** | **Good.** All 5 tasks compile, but with runtime/output issues:<br>1. **Task 2 (`Rectangle.cpp`):** Produces incorrect area output due to formula error; `parameter()` function is never called in `main()`.<br>2. **Task 4 (`Temperature.cpp`):** Triggers compiler warning (`warning: no return statement in function returning non-void`). |

---

### Summary of Results

* **Core Score:** **9 / 12**
* **Plagiarism Penalty:** **0 Marks** (No full assignment copy detected)
* **Final Marks Obtained:** **9 / 12** (75.0%)
* **Grade Status:** **Passed with feedback**

---

### Overall Teacher Remarks

Dear Ammar,

Your Lab 2 submission demonstrates a solid understanding of object-oriented concepts, including class definitions, attribute declarations, and function scoping rules (inline inside definitions vs. outside definitions using the `::` scope resolution operator). All 5 tasks compile successfully and no plagiarism was detected.

However, several mathematical, syntactic, and structural errors affected your score:
1. **Task 2 (`Rectangle.cpp`):** 
   - `area()` calculates `length + width` instead of `length * width`.
   - `parameter()` (typo for perimeter) calculates `2 * (length * width)` instead of `2 * (length + width)`.
   - The perimeter function is defined but never invoked in `main()`.
2. **Task 4 (`Temperature.cpp`):**
   - The `covertor()` method is declared with return type `double` but contains no `return` statement, generating compiler warnings. Either return the calculated value or change the return type to `void`.
3. **Task 5 (`Calculator.cpp`):**
   - Missing validation check for division by zero (`num2 == 0`) inside the `divide()` function.

Please double-check mathematical formulas, ensure non-void functions always return values, and test all functions in `main()`. Keep up the hard work!

<br>

---
---

<br>

# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-38  
**Student Name:** Ammar Yasir
**Task Folder Location:** `Lab No 03\Product.h & main.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** Class declaration separated into `Product.h` and driver into `main.cpp`. |
| **Member Variables** | 3 | **3** | **Excellent.** Attributes (`name`, `price`, `quantity`) declared under `private:` with proper data types. |
| **Member Functions (Inside/Outside)** | 3 | **2** | **Good.** Setters implement validation (`!n.empty()`, `p > 0`). <br>*Deduction (-1 mark):* Setter validation condition `if(q > 0)` rejects quantity of `0` (rubric specifies `q >= 0`, as zero stock is a valid quantity level). |
| **Use of Access Specifiers** | 3 | **3** | **Excellent.** Encapsulation is strictly followed. |
| **Use of Getters/Setters** | 3 | **3** | **Excellent.** Getters and setters present and fully functional. |
| **Input/Output & Execution** | 3 | **3** | **Excellent.** Compiles cleanly with `g++` and executes test driver sequence perfectly. |

---

### 📈 **Summary of Results**
* **Total Marks:** **17 / 18 (94.4%)**
* **Grade Status:** **Excellent**

### 💬 **Overall Teacher Remarks**
Dear Ammar, Great job on Lab 3! Your modular header design, test driver execution, and validation error messages are implemented well. Note that quantity can validly be `0` (empty stock), so use `q >= 0` in `setQuantity`. Good effort!

<br>

---
---

<br>

# Lab 4 Evaluation Report (Constructors & Destructors)
**Student Roll Number:** 2025-SE-38  
**Student Name:** Ammar Yasir
**Task Folder Location:** `Lab No 04\`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor Implementation** | 3 | **3** | **Excellent.** Task 1 default constructor initializes `id=0`, `name="Ammar Yasir"`, `salary=0.0`. Task 2 parameterized constructor initializes all banking attributes cleanly. |
| **Constructor Overloading** | 3 | **2** | **Good.** Task 3 `Rectangle` class overloads default (1.0), 2-parameter (`leng`, `wid`), and 1-parameter (square) constructors. <br>*Deduction (-1 mark):* `arae()` method was defined but not printed in `display()`. |
| **Destructor & Object Management** | 3 | **2** | **Good.** Task 4 `Locker` class destructor correctly prints deallocation message. Heap object `new`/`delete` is used. <br>*Deduction (-1 mark):* Stack object was created without `{}` block scoping in `main()`. |
| **Output & Execution** | 3 | **3** | **Excellent.** All 4 C++ files compile 100% cleanly with `g++` and execute without errors. |

---

### 📈 **Summary of Results**
* **Total Marks:** **10 / 12 (83.3%)**
* **Grade Status:** **Passed with feedback**

### 💬 **Overall Teacher Remarks**
Dear Ammar Yasir, Good effort on Lab 4! All four tasks compile cleanly. To improve, include the area output inside `display()` in Task 3, and enclose stack objects in a `{}` block in Task 4 to observe automatic destruction scope. Good work!

<br>

---
---

<br>

# Lab 5 Evaluation Report (Inheritance)

**Student Roll Number:** 2025-SE-38
**Student Name:** Ammar Yasir
**Task Folder Location:** `Lab No 05\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Inheritance Implementation** | 3 | **3** | Excellent. All four inheritance types implemented correctly. |
| **Classes, Attributes & Functions** | 3 | **3** | Excellent. Required attributes and functions defined. |
| **Object Creation & Functionality** | 3 | **3** | Excellent. Objects created and functions called. |
| **Input, Output & Execution** | 3 | **2** | Good. Deducted 1 mark under Input, Output & Execution because the program hardcodes inputs in Task 2 and Task 3 instead of accepting them from the user as required by the questions. |

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

**Dear Ammar,** your Lab 5 submission structurally demonstrates inheritance concepts in C++.

<br>

---
---

<br>

# Lab 6 Evaluation Report (Constructor Chaining & Destructors)

**Student Roll Number:** 2025-SE-38
**Student Name:** Ammar Yasir
**Task Folder Location:** `Lab No 06\ (Named as .cpp.txt)`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor & Inheritance Implementation** | 3 | **3** | **Excellent.** Constructor chaining and multilevel constructor delegation are correctly written in all tasks. |
| **Destructor & Memory Management** | 3 | **3** | **Excellent.** Destructors are correctly implemented and dynamic heap memory is properly deallocated with `delete`. |
| **Classes, Attributes & Object Functionality** | 3 | **2** | **Good.** Deducted 1 mark because task files were incorrectly saved with a `.cpp.txt` double extension instead of standard `.cpp` source files. |
| **Input, Output & Execution** | 3 | **2** | **Good.** Deducted 1 mark due to the non-standard `.txt` file extension requiring manual override/renaming for standard compilation. The C++ logic compiles cleanly once read as source code. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **10 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **10 / 12 (83.3%)**
* **Grade Status:** **Passed (Excellent)**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> No matching code patterns found in other repositories.

---

### 💬 **Overall Teacher Remarks**

**Dear Ammar,** your C++ logic for constructor chaining and destructors is completely correct. Please ensure that in future labs, your files are saved strictly as `.cpp` source files rather than `.cpp.txt`.

<br>

---
---

<br>

# Lab 7 Evaluation Report (Composition & Aggregation)

**Student Roll Number:** 2025-SE-38
**Student Name:** Ammar Yasir
**Task Folder Location:** `Lab No 07\ (Named as .cpp.txt)`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Composition & Object Ownership** | 3 | **3** | Excellent. Proper composition and aggregation logic implemented in both tasks. |
| **Aggregation & Shared Object Usage** | 3 | **3** | Excellent. Shared Calculator reference and Display ownership are demonstrated. |
| **Classes, Functions & Data Management** | 3 | **2** | Good. Deducted 1 mark because task files were incorrectly saved with a `.cpp.txt` double extension instead of standard `.cpp` source files. |
| **Object Creation, Output & Execution** | 3 | **2** | Good. Deducted 1 mark due to non-standard `.txt` extension requiring manual renaming for standard build systems. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **10 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **10 / 12 (83.3%)**
* **Grade Status:** **Passed (Excellent)**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> No similarity matches found.

---

### 💬 **Overall Teacher Remarks**

**Dear Ammar,** your Lab 7 submission demonstrates your understanding of composition (strong ownership) and aggregation (shared references) in C++.

<br>

---
---

<br>

# Lab 8 Evaluation Report (Polymorphism & Virtual Functions)

**Student Roll Number:** 2025-SE-38
**Student Name:** Ammar Yasir
**Task Folder Location:** `Lab No 08\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Polymorphism & Virtual Function** | 3 | **2** | Good. Deducted 1 mark because `virtual double area()` and overridden functions return void/no return statement despite declared `double` return type. |
| **Derived Classes & Area Calculation** | 3 | **1** | Needs Improvement. Deducted 2 marks because area formulas are mathematically incorrect (`2*(length*width)` and `2*(pie*r*r)`) and attributes are hardcoded rather than passed via constructor. |
| **Shape Pointer & Object Access** | 3 | **0** | Poor. Deducted 3 marks because base class `Shape*` pointer was not used in main() (concrete objects called directly, bypassing polymorphism). |
| **Object Creation, Output & Execution** | 3 | **2** | Good. Deducted 1 mark for compiler warnings and inaccurate output. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **5 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **5 / 12 (41.7%)**
* **Grade Status:** **Passed with feedback**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> As per standard course grading policy for single-structure tasks, code similarity is expected and no plagiarism penalty is assessed.

---

### 💬 **Overall Teacher Remarks**

**Dear Ammar,** your Lab 8 submission demonstrates your understanding of runtime polymorphism and virtual functions in C++.

<br>

---
---

<br>

# Lab 9 Evaluation Report (Operator Overloading ==)

**Student Roll Number:** 2025-SE-38
**Student Name:** Ammar Yasir
**Task Folder Location:** `Lab No 09\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Data Members** | 3 | **3** | Excellent. Distance class correctly defines private double feet and inches data members. |
| **Constructor Implementation** | 3 | **3** | Excellent. Parameterized constructor with this pointer correctly initializes members. |
| **`==` Operator Overloading** | 3 | **3** | Excellent. bool operator==(Distance d) correctly overloaded as a member function. |
| **Object Usage, Output & Execution** | 3 | **3** | Excellent. Multiple Distance objects compared in main(); compiles and executes cleanly. |

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

**Dear Ammar,** your Lab 9 submission demonstrates your understanding of C++ operator overloading and member function comparison.

<br>

---
---

<br>

# Lab 10 Evaluation Report (File Handling in C++)

**Student Roll Number:** 2025-SE-38
**Student Name:** Ammar Yasir
**Task Folder Location:** `Lab No 10\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **File Creation & Writing** | 3 | **3** | Excellent. notes.txt and students.txt correctly created and written with ofstream. |
| **File Reading & Content Display** | 3 | **3** | Excellent. Clean reading loops using ifstream and getline with console display. |
| **Line Counting & File Appending/Copying** | 3 | **3** | Excellent. Line counting, append mode with personal credentials, and stream copying all correctly implemented. |
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

**Dear Ammar,** your Lab 10 submission demonstrates your understanding of C++ file stream handling, reading, writing, and resource management.

<br>

---
---

<br>

# Lab 11 Evaluation Report (Friend Functions & Static Members)

**Student Roll Number:** 2025-SE-38
**Student Name:** Ammar Yasir
**Task Folder Location:** `Lab No 11&12\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Friend Function Implementation** | 3 | **3** | Excellent. Both Box displayLength() and Distance addDistance() friend functions are properly declared and implemented with accurate parameter passing. |
| **Static Data Member Implementation** | 3 | **3** | Excellent. Bankaccount correctly defines static int totalAccount, increments counter in constructor, and displays total accounts created. |
| **Static Member Function & Shared Data** | 3 | **3** | Excellent. Employee class correctly defines static string companyName and static void displayCompany(), accessed via Employee::displayCompany(). |
| **Object Creation, Output & Execution** | 3 | **3** | Excellent. All 4 tasks compile cleanly with zero errors and produce accurate output. |

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

**Dear Ammar,** your Lab 11 submission demonstrates a clear understanding of friend functions and static members in C++.

<br>

---
---

<br>

# Lab 12 Evaluation Report (Pure Virtual Functions & Abstract Classes)

**Student Roll Number:** 2025-SE-38
**Student Name:** Ammar Yasir
**Task Folder Location:** `Lab No 11&12\Lab 11&12 Task 05.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Abstract Base Class & Pure Virtual Function** | 3 | **1** | Needs improvement. Base class declared virtual void PerformDuty(); without = 0;, failing to make HospitalStaff a pure abstract class. |
| **Derived Classes & Function Overriding** | 3 | **3** | Excellent. Doctor, Nurse, and Receptionist classes properly inherit from HospitalStaff and implement PerformDuty(). |
| **Object Creation & Polymorphic Call** | 3 | **3** | Excellent. Objects of all 3 derived classes created and PerformDuty() invoked on each in main(). |
| **Execution, Output & Clean Compilation** | 3 | **1** | Needs improvement. Compilation failed at linking stage due to missing pure virtual syntax (= 0;) on base class PerformDuty(). Adding = 0; resolves all errors. |

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

**Dear Ammar,** your code logic is very solid, but ensure to add `= 0;` to pure virtual declarations in abstract base classes to avoid linker errors.

<br>

---
---

<br>

# Lab 13 Evaluation Report (C++ Templates)

**Student Roll Number:** 2025-SE-38
**Student Name:** Ammar Yasir
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

**Dear Ammar,** your Lab 13 submission is missing from your repository. Please upload your complete Lab 13 Templates tasks to receive evaluation.

<br>

---
---

<br>

# Lab 14 Evaluation Report (In-Class Lab: Vehicle Rental System)

**Student Roll Number:** 2025-SE-38  
**Student Name:** Ammar Yasir  
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

**Dear Ammar,** your Lab 14 (Vehicle Rental System) submission is missing from your repository. Please upload your complete Lab 14 files to receive evaluation.
