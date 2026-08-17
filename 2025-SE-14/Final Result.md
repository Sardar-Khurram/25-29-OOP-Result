# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-14
**Student Name:** Komal Shafique
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                                                                         |
| :----------------------------------------- | :-----------: | :----------------: | :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **3**       | **Excellent.** Task 1 correctly defines the `Student` structure with `firstName`, `lastName`, `rollNumber`, and `marks`. The `displayStudentInfo()` member function correctly displays the student's full name and marks. A structure variable is created, all required members are assigned, and the function is called successfully.                                                                                                                       |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** Task 2 correctly creates an array of `Student` structures, accepts multiple student records through user input, and displays each student's full name and marks using `displayStudentInfo()`. I tested it with two student records and both were displayed correctly. The only technical issue is that `Student students[n]` is a variable-length array, which is not part of standard C++ and produced a compiler warning under `-pedantic`. |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** Task 3 correctly dynamically allocates a `Student` using `new Student()`, assigns all structure members through the pointer using `->`, calls `displayStudentInfo()` through the pointer, and correctly releases the allocated memory using `delete`.                                                                                                                                                                                         |
| **Input, Output & Execution**              |       3       |        **3**       | **Excellent.** All three tasks compiled successfully with `g++ -std=c++17 -Wall -Wextra -pedantic`. Task 1 and Task 3 executed correctly. Task 2 also executed correctly with multiple student records; it produced only a non-fatal warning because of the non-standard variable-length array.                                                                                                                                                              |

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

**Dear Komal,** your Lab 1 submission demonstrates an **excellent understanding of structures, arrays of structures, and structure pointers**. All three tasks satisfy the required functionality.

Task 1 correctly implements the basic structure and member function. Task 2 correctly handles multiple student records through an array of structures and displays each record. Task 3 demonstrates proper pointer-based structure access with `->`, dynamic allocation using `new`, and proper memory cleanup using `delete`.

All three programs were **compiled and executed successfully**. Task 2 generated a compiler warning because `Student students[n]` is a variable-length array. This is accepted by GCC as an extension but is **not standard C++**; `vector<Student>` or dynamic allocation would be preferable in a fully standard C++ solution.

**Overall performance: Excellent — 12/12.**

<br>

---
---

<br>

# Lab 2 Evaluation Report (All Tasks)
**Student Roll Number:** 2025-SE-14  
**Student Name:** Komal Shafique

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** All tasks are implemented cleanly with correct class structure. The `Task 06` directory shows high structural quality, re-organizing all files into custom header files (`student.h`, `rectangle.h`, `Voter.h`, `Temperature.h`, `calculator.h`) and an integrated `main.cpp` driver. |
| **Member Variables** | 3 | **3** | **Excellent.** attributes (like `name`, `rollNumber`, `marks`, `length`, `width`, `age`, `celsius`, `num1`, `num2`) are defined clearly with proper data types. |
| **Member Functions (Inside/Outside)** | 3 | **2** | **Good.** Separated inside/outside definitions correctly (inline inside the class for Task 1, outside the class using scope resolution `::` for Tasks 2 & 3). The Voter check strictly uses `age > 18`. <br><br> *Deduction Reason (Task 4):* <br>In `Task 4.cpp` (line 8) and `Task 06/Temperature.h` (line 10), your conversion formula has an integer division bug: `float fahrenheit = celsius * (9/5) + 32;`. Because `9` and `5` are both integers, `9/5` evaluates to `1` in C++. This means the code computes `celsius + 32` instead of `(celsius * 1.8) + 32`. |
| **Input/Output & Execution** | 3 | **3** | **Excellent.** All standalone tasks compile cleanly using `g++` and execute. The menu-driven calculator task handles division-by-zero check correctly in `divide()`. |

---

### **Summary of Results**
* **Total Marks:** **11 / 12** (91.7%)
* **Grade Status:** **Passed with feedback**

### **Overall Teacher Remarks**
Dear Komal,
Outstanding performance on Lab 2! Your code is highly organized, and Task 6 is structured beautifully with clear custom headers and driver executables.

The only issue in your submission is a classic C++ logical error in Task 4's temperature conversion: you wrote `celsius * (9/5) + 32`. Because both `9` and `5` are integers, the compiler performs integer division and truncates `9/5` to `1`. Writing it as `celsius * (9.0 / 5.0) + 32` or `celsius * 1.8 + 32` will solve this and give accurate results. Excellent job otherwise!

<br>

---
---

<br>

# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-14  
**Student Name:** Komal Shafique
**Task Folder Location:** `Lab 3\Product.h & Main.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** Class declaration separated into `Product.h` and driver into `Main.cpp` with preprocessor guards (`#ifndef PRODUCT_H`). |
| **Member Variables** | 3 | **3** | **Excellent.** Attributes (`name`, `price`, `quantity`) correctly typed (`string`, `double`, `int`). |
| **Member Functions (Inside/Outside)** | 3 | **3** | **Excellent.** Setter validation handles empty strings (`!n.empty()`), zero/negative prices (`p > 0`), and negative quantities (`q >= 0`). |
| **Use of Access Specifiers** | 3 | **3** | **Excellent.** Proper access specifiers (`private:`, `public:`). |
| **Use of Getters/Setters** | 3 | **3** | **Excellent.** All setters and getters functional with clear error messages. |
| **Input/Output & Execution** | 3 | **3** | **Excellent.** Compiles cleanly with `g++` and outputs correct product information. |

---

### 📈 **Summary of Results**
* **Total Marks:** **18 / 18 (100%)**
* **Grade Status:** **Excellent (Full Marks)**

### 💬 **Overall Teacher Remarks**
Dear Komal, Outstanding work on Lab 3! Your code is modular, robust, and handles input validation cleanly. Keep up the excellent work!

<br>

---
---

<br>

# Lab 4 Evaluation Report (Constructors & Destructors)
**Student Roll Number:** 2025-SE-14  
**Student Name:** Komal Shafique
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
* **Plagiarism Penalty:** **-3 Marks** *(100% identical code match with student `2025-SE-06`)*
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Plagiarism Penalty (-3)**

---

### ⚠️ **Plagiarism Audit Detail**
> [!WARNING]
> Manual inspection detected a **100% character-for-character code match** across all 4 tasks between your `Lab 4` files and student `2025-SE-06` (Maryam Jamil)'s submission files. Per course policy, a flat **-3 marks penalty** has been applied to both submissions.

### 💬 **Overall Teacher Remarks**
Dear Komal, Your core implementation is fully working, but please write your code independently. Duplicate submissions result in heavy plagiarism penalties.

<br>

---
---

<br>

# Lab 5 Evaluation Report (Inheritance)

**Student Roll Number:** 2025-SE-14
**Student Name:** Komal Shafique
**Task Folder Location:** `Lab 5\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Inheritance Implementation** | 3 | **3** | **Excellent.** All four inheritance types—single, multilevel, hierarchical, and multiple—are implemented correctly according to the requirements. |
| **Classes, Attributes & Functions** | 3 | **3** | **Excellent.** All required classes, inherited attributes, additional attributes, and functions are correctly defined and used. |
| **Object Creation & Functionality** | 3 | **3** | **Excellent.** Objects are created correctly and all required display/operation functions are called and work as intended in `main()`. |
| **Input, Output & Execution** | 3 | **3** | **Excellent.** All four files compiled and executed cleanly. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **-3 Marks**
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Passed**

---

### ⚠️ **Plagiarism Audit Detail**

> **Plagiarism Penalty of **-3 marks** applied.**
> All 4 task files are 100% identical matches (excluding spacing/comments) with student `2025-SE-06` (Maryam Jamil).

---

### 💬 **Overall Teacher Remarks**

**Dear Komal,** your Lab 5 submission structurally demonstrates an excellent understanding of single, multilevel, hierarchical, and multiple inheritance in C++. 
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 6 Evaluation Report (Constructor Chaining & Destructors)

**Student Roll Number:** 2025-SE-14
**Student Name:** Komal Shafique
**Task Folder Location:** `Lab 6\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor & Inheritance Implementation** | 3 | **3** | Excellent. Constructor chaining and multilevel constructor prints demonstrating call order are correct. |
| **Destructor & Memory Management** | 3 | **3** | Excellent. Correct destructor implementations freeing dynamic memory. |
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
> All 4 task files are 100% identical copy-matches (excluding spacing/comments) with student `2025-SE-06` (Maryam Jamil).

---

### 💬 **Overall Teacher Remarks**

**Dear Komal,** your Lab 6 submission demonstrates your understanding of constructor chaining and destructors in C++.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 7 Evaluation Report (Composition & Aggregation)

**Student Roll Number:** 2025-SE-14
**Student Name:** Komal Shafique
**Task Folder Location:** `Lab 7\`

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
> Both task files are 100% identical copy-matches (excluding spacing/comments) with student `2025-SE-06` (Maryam Jamil).

---

### 💬 **Overall Teacher Remarks**

**Dear Komal,** your Lab 7 submission demonstrates your understanding of composition (strong ownership) and aggregation (shared references) in C++.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 8 Evaluation Report (Polymorphism & Virtual Functions)

**Student Roll Number:** 2025-SE-14
**Student Name:** Komal Shafique
**Task Folder Location:** `Lab 8\`

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

**Dear Komal,** your Lab 8 submission demonstrates your understanding of runtime polymorphism and virtual functions in C++.

<br>

---
---

<br>

# Lab 9 Evaluation Report (Operator Overloading ==)

**Student Roll Number:** 2025-SE-14
**Student Name:** Komal Shafique
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
> Source code file is an exact raw byte-for-byte copy-match (including formatting, display helper function, multiple test cases, and comments) with student `2025-SE-06` (Maryam Jamil).

---

### 💬 **Overall Teacher Remarks**

**Dear Komal,** your Lab 9 submission demonstrates your understanding of C++ operator overloading and member function comparison.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 10 Evaluation Report (File Handling in C++)

**Student Roll Number:** 2025-SE-14
**Student Name:** Komal Shafique
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
> All 4 source code files are 100% exact raw byte-for-byte copy-matches with student `2025-SE-06` (Maryam Jamil), including Maryam Jamil's name and roll number inside the append file logic.

---

### 💬 **Overall Teacher Remarks**

**Dear Komal,** your Lab 10 submission demonstrates your understanding of C++ file stream handling, reading, writing, and resource management.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 11 Evaluation Report (Friend Functions & Static Members)

**Student Roll Number:** 2025-SE-14
**Student Name:** Komal Shafique
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
> 100% exact raw byte match detected with student 2025-SE-06 (Maryam Jamil) across all tasks (Task 1 to Task 5). Symmetrical -3 marks penalty applied.

---

### 💬 **Overall Teacher Remarks**

**Dear Komal,** your Lab 11 submission demonstrates a solid understanding of friend functions and static members in C++.

<br>

---
---

<br>

# Lab 12 Evaluation Report (Pure Virtual Functions & Abstract Classes)

**Student Roll Number:** 2025-SE-14
**Student Name:** Komal Shafique
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
> 100% exact raw byte match detected with student 2025-SE-06 (Maryam Jamil) on Task 5.cpp. Symmetrical -3 marks penalty applied.

---

### 💬 **Overall Teacher Remarks**

**Dear Komal,** your Lab 12 submission demonstrates an excellent understanding of abstract classes and pure virtual functions in C++.

<br>

---
---

<br>

# Lab 13 Evaluation Report (C++ Templates)

**Student Roll Number:** 2025-SE-14
**Student Name:** Komal Shafique
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

**Dear Komal,** your Lab 13 submission is missing from your repository. Please upload your complete Lab 13 Templates tasks to receive evaluation.

<br>

---
---

<br>

# Lab 14 Evaluation Report (In-Class Lab: Vehicle Rental System)

**Student Roll Number:** 2025-SE-14  
**Student Name:** Komal Shafique  
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

**Dear Komal,** your Lab 14 (Vehicle Rental System) submission is missing from your repository. Please upload your complete Lab 14 files to receive evaluation.
