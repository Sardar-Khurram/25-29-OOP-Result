# Object-Oriented Programming — Consolidated Evaluation Report

**Student Name:** Niqash Ali  
**Roll Number:** `2025-SE-34`  
**Total Maximum Marks:** 210  
**Total Obtained Marks:** 92 / 210 (43.81%)  
**Total Excluding Plagiarism:** 115 / 210 (54.76%)  

---

### 📊 **Student Grand Total Result Table**

| Lab Number | Total Marks | Obtained Marks | Excluding Plagarism | Status / Notes |
| :--- | :---: | :---: | :---: | :--- |
| Lab  1 | 12 | 11 | 11 | Submitted |
| Lab  2 | 12 | 10 | 10 | Submitted |
| Lab  3 | 18 | 9 | 14 | Submitted (Plag Penalty: -5) |
| Lab  4 | 12 | 8 | 11 | Submitted (Plag Penalty: -3) |
| Lab  5 | 12 | 7 | 10 | Submitted (Plag Penalty: -3) |
| Lab  6 | 12 | 8 | 11 | Submitted (Plag Penalty: -3) |
| Lab  7 | 12 | 9 | 12 | Submitted (Plag Penalty: -3) |
| Lab  8 | 12 | 12 | 12 | Submitted |
| Lab  9 | 12 | 9 | 12 | Submitted (Plag Penalty: -3) |
| Lab 10 | 12 | 9 | 12 | Submitted (Plag Penalty: -3) |
| Lab 11 | 12 | 0 | 0 | Absent / Missing |
| Lab 12 | 12 | 0 | 0 | Absent / Missing |
| Lab 13 | 12 | 0 | 0 | Absent / Missing |
| Lab 14 | 48 | 0 | 0 | Absent / Missing |
| **Grand Total** | **210** | **92** | **115** | **Percentage: 43.81% (Excl. Plag: 54.76%)** |

---


<br>

---
---

<br>

# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-34
**Student Name:** Niqash Ali
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                                    |
| :----------------------------------------- | :-----------: | :----------------: | :---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **2**       | **Good.** Task 1 correctly defines the structure with `name`, `last_name`, `roll_no`, and `marks`, and the `display()` function correctly displays the student's name and marks. However, the required member function is specifically named `displayStudentInfo()`, while the submission uses `display()`. The implementation is functionally correct but does not follow the required function specification exactly. |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** Task 2 correctly creates an array of `student` structures, accepts multiple student records through user input, and calls the display function for every student. I compiled and tested it with two student records, and both were displayed correctly. The only technical issue is that `student s[n]` is a variable-length array, which GCC accepts as an extension but which is not standard C++.     |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** Task 3 correctly dynamically allocates an array of `student` structures using `new student[n]`, accesses members through the pointer using `ptr[i].member`, and calls the member function for each record. The program correctly handles multiple students and displays their information.                                                                                                               |
| **Input, Output & Execution**              |       3       |        **3**       | **Excellent.** All three programs compiled successfully with C++17. Task 1 executed correctly, while Tasks 2 and 3 were tested with two student records and both produced the expected output. Task 2 generated only a non-fatal warning because of the variable-length array.                                                                                                                                          |

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

**Dear Niqash,** your Lab 1 submission demonstrates a **strong understanding of structures, arrays of structures, and dynamic structure allocation**.

Task 1 correctly implements the required student data members, creates a structure object, assigns values, and displays the student's name and marks. The only issue is that the assignment specifically requires a member function named **`displayStudentInfo()`**, while the submitted implementation uses **`display()`**.

Task 2 correctly handles multiple students using an array of structures. I compiled and tested the program with two student records, and both records were correctly displayed.

Task 3 demonstrates dynamic allocation using:

```cpp
student *ptr = new student[n];
```

and correctly stores and accesses multiple student records through the allocated structure array. The program was compiled and tested successfully.

One technical improvement is recommended for Task 2: `student s[n]` is a **variable-length array**, which GCC supports as an extension but which is not standard C++. A `vector<student>` or dynamic allocation would be preferable.

**Overall performance: Excellent — 11/12.**

<br>

---
---

<br>

# Lab 2 Evaluation Report (All Tasks)

**Student Roll Number:** 2025-SE-34  
**Student Name:** Niqash Ali

---

### **Evaluation Rubric Table**

| Assessment Category | Max Marks | Earned Marks | Detailed Feedback / Observations |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | 3 | Classes are defined correctly and instantiated appropriately in `main()` across all tasks. |
| **Member Variables** | 3 | 3 | Correct data types and appropriate scope used for member variables in all tasks. |
| **Member Functions (Inside/Outside)** | 3 | 3 | Functions defined inside class (Task 1, 4, 5) and outside using scope resolution operator `::` (Task 2, 3) as specified. Voter eligibility logic (`age > 18`) and division-by-zero check in Calculator are implemented correctly. |
| **Input/Output & Execution** | 3 | 3 | All 5 tasks compile successfully and produce expected output upon execution. |

---

### **Summary of Results**

- **Core Score:** 12 / 12
- **Plagiarism Penalty:** -5 Marks
- **Final Score:** 7 / 12

---

### **Plagiarism Analysis Detail**

> [!WARNING]
> **Plagiarism Warning:** All 5 submitted files (`Task1.cpp` through `Task5.cpp`) are a 100% identical match with the submissions of student **2025-SE-35**. As per lab policy, a flat deduction of **3 marks** has been applied to the final score.

---

### **Overall Teacher Remarks**

- **Technical Execution:** Excellent technical work. All 5 C++ programs compiled cleanly, implemented class methods both inside and outside class bodies per requirements, and handled conditional logic (such as temperature conversion formulas, voter age criteria, and division-by-zero checks) accurately.
- **Academic Integrity:** Plagiarism was detected due to exact file matches with student **2025-SE-35** across all tasks. Please ensure all future submissions represent your own independent work to avoid further academic penalties.

<br>

---
---

<br>

# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-34  
**Student Name:** Niqash Ali
**Task Folder Location:** `OOP\Week 3\Task 1.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **2** | **Good.** Class defined cleanly in `OOP\Week 3\Task 1.cpp`. <br>*Deduction (-1 mark):* Used all-lowercase class name `product` instead of `Product`. |
| **Member Variables** | 3 | **3** | **Excellent.** Attributes (`name`, `price`, `quantity`) declared under `private:` with proper data types. |
| **Member Functions (Inside/Outside)** | 3 | **2** | **Good.** Setters implement validation. <br>*Deduction (-1 mark):* Validation condition in `setname` checks single space `" "` instead of empty string `""`, and `setprice` condition `p < 0` allows zero price. |
| **Use of Access Specifiers** | 3 | **3** | **Excellent.** Encapsulation is strictly followed (`private:` data members, `public:` methods). |
| **Use of Getters/Setters** | 3 | **2** | **Good.** Getters and setters present. <br>*Deduction (-1 mark):* All-lowercase method names (`setname`, `setprice`, `setquantity`, `getname`, `getprice`, `getquantity`). |
| **Input/Output & Execution** | 3 | **2** | **Good.** Compiles cleanly with `g++`. <br>*Deduction (-1 mark):* In `main()`, completely skipped testing invalid inputs (`p.setname("")`, `p.setprice(-50)`, `p.setquantity(-2)`). |

---

### 📈 **Summary of Results**
* **Core Rubric Score:** **14 / 18**
* **Plagiarism Penalty:** **-5 Marks** *(100% identical code match with student `2025-SE-35`)*
* **Final Marks:** **9 / 18 (50.0%)**
* **Grade Status:** **Plagiarism Penalty (-5)**

---

### ⚠️ **Plagiarism Audit Detail**
> [!WARNING]
> Manual inspection detected a **100% character-for-character code match** between your `OOP\Week 3\Task 1.cpp` and student `2025-SE-35` (Muhammad Zakarya)'s submission file `Week 3\Task 1.cpp`. Per course policy, a flat **-5 marks penalty** has been applied to both submissions.

### 💬 **Overall Teacher Remarks**
Dear Niqash, Your core implementation is mostly working, but please write your code independently. Duplicate submissions result in heavy plagiarism penalties. Ensure to follow standard C++ camelCase naming (`Product`, `setName`, `setPrice`) and check empty strings `n.empty()` inside setters.

<br>

---
---

<br>

# Lab 4 Evaluation Report (Constructors & Destructors)
**Student Roll Number:** 2025-SE-34  
**Student Name:** Niqash Ali
**Task Folder Location:** `OOP\Week 4\`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor Implementation** | 3 | **2** | **Good.** Default constructor in Task 1 and parameterized constructor in Task 2 are implemented with proper initializations. <br>*Deduction (-1 mark):* Used all-lowercase class names (`employee`, `bank_account`) instead of standard C++ PascalCase (`Employee`, `BankAccount`). |
| **Constructor Overloading** | 3 | **3** | **Excellent.** Task 3 `rectangle` class overloads default (1.0), 2-parameter (`length`, `width`), and 1-parameter (square) constructors cleanly. |
| **Destructor & Object Management** | 3 | **3** | **Excellent.** Task 4 `locker` class destructor correctly prints deallocation message. Demonstrates both scoped stack allocation `{}` and dynamic heap allocation via `new`/`delete`. |
| **Output & Execution** | 3 | **3** | **Excellent.** All 4 C++ files compile 100% cleanly with `g++` and execute with correct output formatting. |

---

### 📈 **Summary of Results**
* **Core Rubric Score:** **11 / 12**
* **Plagiarism Penalty:** **-3 Marks** *(100% identical code match with student `2025-SE-35`)*
* **Final Marks:** **8 / 12 (66.7%)**
* **Grade Status:** **Plagiarism Penalty (-3)**

---

### ⚠️ **Plagiarism Audit Detail**
> [!WARNING]
> Manual inspection detected a **100% character-for-character code match** across all 4 tasks between your `OOP\Week 4` files and student `2025-SE-35` (Muhammad Zakarya)'s submission files. Per course policy, a flat **-3 marks penalty** has been applied to both submissions.

### 💬 **Overall Teacher Remarks**
Dear Niqash, Your core implementation is working, but please write your code independently. Duplicate submissions result in heavy plagiarism penalties. Also, capitalize class names (`Employee`, `BankAccount`) following standard C++ conventions.

<br>

---
---

<br>

# Lab 5 Evaluation Report (Inheritance)

**Student Roll Number:** 2025-SE-34
**Student Name:** Niqash Ali
**Task Folder Location:** `OOP\Week 5\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Inheritance Implementation** | 3 | **2** | Good. Deducted 1 mark under Inheritance Implementation for using lowercase class names (person, student, employee, developer, designer, printer, scanner, photocopier) across all tasks. |
| **Classes, Attributes & Functions** | 3 | **3** | Excellent. Required attributes and functions are defined. |
| **Object Creation & Functionality** | 3 | **2** | Good. Deducted 1 mark under Object Creation & Functionality: Photocopy function is empty (does not call print/scan), and there is a typo in scanner method name (scan_documenta). |
| **Input, Output & Execution** | 3 | **3** | Excellent. All files compile and execute successfully. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **10 / 12**
* **Plagiarism Penalty:** **-3 Marks**
* **Final Marks:** **7 / 12 (58.3%)**
* **Grade Status:** **Passed with feedback**

---

### ⚠️ **Plagiarism Audit Detail**

> **Plagiarism Penalty of **-3 marks** applied.**
> All 4 task files are 100% identical copy-matches (excluding spacing/comments) with student `2025-SE-35` (Muhammad Zakarya).

---

### 💬 **Overall Teacher Remarks**

**Dear Niqash,** your Lab 5 submission structurally demonstrates inheritance concepts in C++. 
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 6 Evaluation Report (Constructor Chaining & Destructors)

**Student Roll Number:** 2025-SE-34
**Student Name:** Niqash Ali
**Task Folder Location:** `OOP\Week 6\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor & Inheritance Implementation** | 3 | **2** | Good. Deducted 1 mark under Constructor & Inheritance Implementation for using lowercase class names (product, electronics, vehicle, car, electriccar, file, textfile, device, sensor) across all tasks. |
| **Destructor & Memory Management** | 3 | **3** | Excellent. Required attributes and destructor functions are defined correctly. |
| **Classes, Attributes & Object Functionality** | 3 | **3** | Excellent. Object creation and dynamic memory allocation/deallocation check is correct. |
| **Input, Output & Execution** | 3 | **3** | Excellent. All files compile and execute successfully. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **11 / 12**
* **Plagiarism Penalty:** **-3 Marks**
* **Final Marks:** **8 / 12 (66.7%)**
* **Grade Status:** **Passed (Good)**

---

### ⚠️ **Plagiarism Audit Detail**

> **Plagiarism Penalty of **-3 marks** applied.**
> All 4 task files are 100% identical copy-matches (excluding spacing/comments) with student `2025-SE-35` (Muhammad Zakarya).

---

### 💬 **Overall Teacher Remarks**

**Dear Niqash,** your Lab 6 submission demonstrates your understanding of constructor chaining and destructors in C++.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 7 Evaluation Report (Composition & Aggregation)

**Student Roll Number:** 2025-SE-34
**Student Name:** Niqash Ali
**Task Folder Location:** `OOP\Week 7\`

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
> Both task files are 100% identical copy-matches (excluding spacing/comments) with student `2025-SE-35` (Muhammad Zakarya).

---

### 💬 **Overall Teacher Remarks**

**Dear Niqash,** your Lab 7 submission demonstrates your understanding of composition (strong ownership) and aggregation (shared references) in C++.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 8 Evaluation Report (Polymorphism & Virtual Functions)

**Student Roll Number:** 2025-SE-34
**Student Name:** Niqash Ali
**Task Folder Location:** `OOP\Week 8\`

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

**Dear Niqash,** your Lab 8 submission demonstrates your understanding of runtime polymorphism and virtual functions in C++.

<br>

---
---

<br>

# Lab 9 Evaluation Report (Operator Overloading ==)

**Student Roll Number:** 2025-SE-34
**Student Name:** Niqash Ali
**Task Folder Location:** `OOP\Week 9\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Data Members** | 3 | **3** | Excellent. Distance class correctly encapsulates private feet and inches data members. |
| **Constructor Implementation** | 3 | **3** | Excellent. Parameterized constructor initializes values accurately. |
| **`==` Operator Overloading** | 3 | **3** | Excellent. bool operator==(Distance d) overloaded as a member function. |
| **Object Usage, Output & Execution** | 3 | **3** | Excellent. Objects created and compared via if-else; clean compilation and execution. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **-3 Marks**
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Passed (Good)**

---

### ⚠️ **Plagiarism Audit Detail**

> **Plagiarism Penalty of **-3 marks** applied.**
> Source code file is an exact raw byte-for-byte copy-match (including formatting, comments, and variable naming) with student `2025-SE-35` (Muhammad Zakarya).

---

### 💬 **Overall Teacher Remarks**

**Dear Niqash,** your Lab 9 submission demonstrates your understanding of C++ operator overloading and member function comparison.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 10 Evaluation Report (File Handling in C++)

**Student Roll Number:** 2025-SE-34
**Student Name:** Niqash Ali
**Task Folder Location:** `OOP\Week 10\`

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
> Source code files for Task 2 and Task 3 are 100% exact raw byte-for-byte copy-matches with student `2025-SE-35` (Muhammad Zakarya).

---

### 💬 **Overall Teacher Remarks**

**Dear Niqash,** your Lab 10 submission demonstrates your understanding of C++ file stream handling, reading, writing, and resource management.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 11 Evaluation Report (Friend Functions & Static Members)

**Student Roll Number:** 2025-SE-34
**Student Name:** Niqash Ali
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

**Dear Niqash,** your Lab 11 submission is missing from your repository. Please upload your complete Lab 11 tasks to receive evaluation.

<br>

---
---

<br>

# Lab 12 Evaluation Report (Pure Virtual Functions & Abstract Classes)

**Student Roll Number:** 2025-SE-34
**Student Name:** Niqash Ali
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

**Dear Niqash,** your Lab 12 submission is missing from your repository. Please upload your complete Lab 12 tasks to receive evaluation.

<br>

---
---

<br>

# Lab 13 Evaluation Report (C++ Templates)

**Student Roll Number:** 2025-SE-34
**Student Name:** Niqash Ali
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

**Dear Niqash,** your Lab 13 submission is missing from your repository. Please upload your complete Lab 13 Templates tasks to receive evaluation.

<br>

---
---

<br>

# Lab 14 Evaluation Report (In-Class Lab: Vehicle Rental System)

**Student Roll Number:** 2025-SE-34  
**Student Name:** Niqash Ali  
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

**Dear Niqash,** your Lab 14 (Vehicle Rental System) submission is missing from your repository. Please upload your complete Lab 14 files to receive evaluation.
