# Object-Oriented Programming — Consolidated Evaluation Report

**Student Name:** Momna Imran  
**Roll Number:** `2024-SE-33`  
**Total Maximum Marks:** 210  
**Total Obtained Marks:** 89 / 210 (42.38%)  
**Total Excluding Plagiarism:** 98 / 210 (46.67%)  

---

### 📊 **Student Grand Total Result Table**

| Lab Number | Total Marks | Obtained Marks | Excluding Plagarism | Status / Notes |
| :--- | :---: | :---: | :---: | :--- |
| Lab  1 | 12 | 11 | 11 | Submitted |
| Lab  2 | 12 | 12 | 12 | Submitted |
| Lab  3 | 18 | 0 | 0 | Absent / Missing |
| Lab  4 | 12 | 7 | 10 | Submitted (Plag Penalty: -3) |
| Lab  5 | 12 | 10 | 10 | Submitted |
| Lab  6 | 12 | 7 | 10 | Submitted (Plag Penalty: -3) |
| Lab  7 | 12 | 10 | 10 | Submitted |
| Lab  8 | 12 | 12 | 12 | Submitted |
| Lab  9 | 12 | 9 | 12 | Submitted (Plag Penalty: -3) |
| Lab 10 | 12 | 11 | 11 | Submitted |
| Lab 11 | 12 | 0 | 0 | Absent / Missing |
| Lab 12 | 12 | 0 | 0 | Absent / Missing |
| Lab 13 | 12 | 0 | 0 | Absent / Missing |
| Lab 14 | 48 | 0 | 0 | Absent / Missing |
| **Grand Total** | **210** | **89** | **98** | **Percentage: 42.38% (Excl. Plag: 46.67%)** |

---


<br>

---
---

<br>

# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2024-SE-33
**Student Name:** Momna Imran
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                          |
| :----------------------------------------- | :-----------: | :----------------: | :-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **2**       | **Good.** A correct `Student` structure with all four required data members and `displayStudentInfo()` is present in the active code. However, the original standalone Task 1 implementation is completely commented out, so the required Task 1 demonstration using a single structure variable, assigning values directly, and calling the function is not active in the submitted program. |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** The active program correctly creates an array of `Student` structures, accepts multiple student records, and displays every record. The input and display loops are correctly implemented.                                                                                                                                                                                     |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** The active program correctly declares a `Student*`, assigns it to each array element, uses the `->` operator to assign/access all structure members, and calls `displayStudentInfo()` through the pointer. This successfully demonstrates pointer-to-structure access.                                                                                                         |
| **Input, Output & Execution**              |       3       |        **3**       | **Excellent.** The active program contains complete input and output logic and should compile and execute correctly. It successfully combines array and pointer access for multiple student records. The only technical issue is that `Student students[numStudents]` is a variable-length array, which GCC may accept as an extension but which is not standard C++.                         |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **11 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **11 / 12 (91.67%)**
* **Grade Status:** **Excellent**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> The submitted material was evaluated against the Lab 1 requirements. No comparison submission was provided for this evaluation, so a 100% code-match determination cannot be established from the available materials. The Lab 1 policy specifies a **-3 mark penalty** when a student's code is found to be plagiarized or matching 100% with another student's code.

---

### 💬 **Overall Teacher Remarks**

**Dear Momna,** your submission demonstrates a **strong understanding of structures, arrays of structures, and structure pointers**.

The active implementation correctly defines the `Student` structure and `displayStudentInfo()` function, stores multiple students in an array, and uses a structure pointer to access and display the records.

The main issue is that your original **Task 1 solution is commented out completely**:

```cpp
/* ... Task 1 implementation ... */
```

Therefore, although the required structure and member function are present in the active program, the standalone Task 1 requirement of creating one structure variable, assigning its values, and directly calling the member function is not actually executed in the submitted code.

The active program successfully demonstrates both the array and pointer concepts. One technical improvement would be replacing:

```cpp
Student students[numStudents];
```

with a standard C++ container such as `vector<Student>` or standard dynamic allocation, since variable-length arrays are not part of standard C++.

**Overall performance: Excellent — 11/12.**

<br>

---
---

<br>

# Lab 2 Evaluation Report (All Tasks)
**Student Roll Number:** 2024-SE-33  
**Student Name:** Momna Imran

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** All 5 required classes are implemented cleanly in header files (`student.h`, `Rectangle.h`, `Voter.h`, `temp.h`, `cal.h`) with driver `.cpp` files (`Main.cpp`, `main.cpppp.cpp`). Objects are instantiated properly. Header guards (`#ifndef`) are used correctly. |
| **Member Variables** | 3 | **3** | **Excellent.** Member variables are declared with `private` access and proper C++ data types (`float`, `int`, `string`). Temperature class uses `float` for both Celsius and Fahrenheit values. |
| **Member Functions (Inside/Outside)** | 3 | **3** | **Excellent.** Calculator (`cal.h`) defines arithmetic functions outside the class using `::` scope resolution. Division-by-zero check is implemented in `divide()`. Voter uses `age >= 18`. Temperature conversion uses correct formula `(celsius * 9.0 / 5.0) + 32.0`. Rectangle perimeter formula is correct: `2 * (length + width)`. |
| **Input/Output & Execution** | 3 | **3** | **Excellent.** All files compile cleanly under `g++` without any warnings or errors. Output formatting is well-structured with clear section dividers. |

---

### **Summary of Results**
* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **0 Marks** (No full assignment copy detected)
* **Final Marks Obtained:** **12 / 12** (100.0%)
* **Grade Status:** **Excellent (Full Marks)**

---

### **Overall Teacher Remarks**
Dear Momna,

Outstanding work on Lab 2! Your repository contains 16 original C++ files across multiple lab topics. All 5 required Lab 2 classes compile cleanly, use proper encapsulation (`private` attributes), and your code formatting is clean and professional. The temperature conversion uses the correct floating-point formula `(celsius * 9.0 / 5.0) + 32.0`, and your calculator includes a proper division-by-zero check.

Since your overall repository structure and code are distinct and independent, no plagiarism penalty applies. 

Your final score for Lab 2 is **12/12** (Full Marks). Keep up the excellent work!

<br>

---
---

<br>

# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2024-SE-33  
**Student Name:** Momna Imran
**Task Folder Location:** `N/A (No Submission)`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **0** | **Absent.** Lab 3 task submission is missing from the student repository. |
| **Member Variables** | 3 | **0** | **Absent.** Lab 3 task submission is missing from the student repository. |
| **Member Functions (Inside/Outside)** | 3 | **0** | **Absent.** Lab 3 task submission is missing from the student repository. |
| **Use of Access Specifiers** | 3 | **0** | **Absent.** Lab 3 task submission is missing from the student repository. |
| **Use of Getters/Setters** | 3 | **0** | **Absent.** Lab 3 task submission is missing from the student repository. |
| **Input/Output & Execution** | 3 | **0** | **Absent.** Lab 3 task submission is missing from the student repository. |

---

### 📈 **Summary of Results**
* **Total Marks:** **0 / 18 (0%)**
* **Grade Status:** **Absent / Not Submitted**

### 💬 **Overall Teacher Remarks**
Dear Momna, Lab 3 submission for the Encapsulated Product task is missing from your repository. Please upload your work to receive evaluation.

<br>

---
---

<br>

# Lab 4 Evaluation Report (Constructors & Destructors)
**Student Roll Number:** 2024-SE-33  
**Student Name:** Momna Imran
**Task Folder Location:** `Lab 04.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor Implementation** | 3 | **3** | **Excellent.** Tasks 1 & 2 constructors (`Employee`, `BankAccount`) are implemented cleanly. |
| **Constructor Overloading** | 3 | **3** | **Excellent.** Task 3 `Rectangle` class overloads default (1.0), 2-parameter, and 1-parameter constructors. |
| **Destructor & Object Management** | 3 | **3** | **Excellent.** Task 4 `Locker` class destructor correctly implemented with block `{}` scoping and `new`/`delete` heap allocation. |
| **Output & Execution** | 3 | **1** | **Need Improvement.** <br>*Deduction (-2 marks):* Tasks 1, 2, and 3 were commented out with `/* ... */` inside `Lab 04.cpp`, so only Task 4 executed. |

---

### 📈 **Summary of Results**
* **Core Rubric Score:** **10 / 12**
* **Plagiarism Penalty:** **-3 Marks** *(100% identical code match with student `2025-SE-05`, `2024-SE-18`, `2024-SE-27`)*
* **Final Marks:** **7 / 12 (58.3%)**
* **Grade Status:** **Plagiarism Penalty (-3)**

---

### ⚠️ **Plagiarism Audit Detail**
> [!WARNING]
> Manual inspection detected a **100% character-for-character code match** across all 4 tasks between your `Lab 04.cpp` file and student `2025-SE-05` (Ali Zain-Ul-Abdin), `2024-SE-18` (Syed Abdul Rehman), and `2024-SE-27` (Muhammad Arslan)'s submission files. Per course policy, a flat **-3 marks penalty** has been applied to all submissions.

### 💬 **Overall Teacher Remarks**
Dear Momna, Your core implementation is working, but please write your code independently. Duplicate submissions result in heavy plagiarism penalties. Also, uncomment Tasks 1, 2, and 3 so all tasks execute properly.

<br>

---
---

<br>

# Lab 5 Evaluation Report (Inheritance)

**Student Roll Number:** 2024-SE-33
**Student Name:** Momna Imran
**Task Folder Location:** `Lab 05.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Inheritance Implementation** | 3 | **3** | **Excellent.** All four inheritance types—single, multilevel, hierarchical, and multiple—are written correctly. |
| **Classes, Attributes & Functions** | 3 | **3** | **Excellent.** Classes, attributes, and methods are defined correctly. |
| **Object Creation & Functionality** | 3 | **2** | **Good.** Deducted 1 mark because object creation and test runs for Tasks 1, 2, and 3 are commented out in the final submission. |
| **Input, Output & Execution** | 3 | **2** | **Good.** Deducted 1 mark because Tasks 1, 2, and 3 must be manually uncommented to execute. |

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

**Dear Momna,** your Lab 5 submission demonstrates a very good understanding of inheritance concepts in C++. In the future, please make sure all tasks remain uncommented and active in the final submission so that they run directly.

<br>

---
---

<br>

# Lab 6 Evaluation Report (Constructor Chaining & Destructors)

**Student Roll Number:** 2024-SE-33
**Student Name:** Momna Imran
**Task Folder Location:** `Lab 06.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor & Inheritance Implementation** | 3 | **3** | Excellent. Constructor chaining and multilevel constructors are structurally written correctly (commented out). |
| **Destructor & Memory Management** | 3 | **3** | Excellent. Destructor order and dynamically allocated memory (using new/delete and virtual destructor) are written correctly. |
| **Classes, Attributes & Object Functionality** | 3 | **2** | Good. Deducted 1 mark because object creation and runs for Tasks 1, 2, and 3 are commented out in the final submission. |
| **Input, Output & Execution** | 3 | **2** | Good. Deducted 1 mark because Tasks 1, 2, and 3 must be manually uncommented to compile and execute. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **10 / 12**
* **Plagiarism Penalty:** **-3 Marks**
* **Final Marks:** **7 / 12 (58.3%)**
* **Grade Status:** **Passed with feedback**

---

### ⚠️ **Plagiarism Audit Detail**

> **Plagiarism Penalty of **-3 marks** applied.**
> Task 4 source code is a 100% identical copy-match (excluding spacing/comments) with student `2024-SE-18` (Syed Abdul Rehman) and `2024-SE-27` (Muhammad Arslan).

---

### 💬 **Overall Teacher Remarks**

**Dear Momna,** your Lab 6 submission demonstrates your understanding of constructor chaining and destructors in C++.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 7 Evaluation Report (Composition & Aggregation)

**Student Roll Number:** 2024-SE-33
**Student Name:** Momna Imran
**Task Folder Location:** `Lab07.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Composition & Object Ownership** | 3 | **3** | Excellent. Composition logic and object ownership are correctly implemented. |
| **Aggregation & Shared Object Usage** | 3 | **3** | Excellent. Aggregation with shared Calculator and Student objects is correctly implemented. |
| **Classes, Functions & Data Management** | 3 | **2** | Good. Deducted 1 mark because Task 1 source code was left commented out in the file. |
| **Object Creation, Output & Execution** | 3 | **2** | Good. Deducted 1 mark because Task 1 requires manual uncommenting to compile and execute. |

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

**Dear Momna,** your Lab 7 submission demonstrates your understanding of composition (strong ownership) and aggregation (shared references) in C++.

<br>

---
---

<br>

# Lab 8 Evaluation Report (Polymorphism & Virtual Functions)

**Student Roll Number:** 2024-SE-33
**Student Name:** Momna Imran
**Task Folder Location:** `Lab 08.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Polymorphism & Virtual Function** | 3 | **3** | Excellent. Base GeomForm defines virtual calculateArea() with override in Box and RoundForm. |
| **Derived Classes & Area Calculation** | 3 | **3** | Excellent. Both derived classes calculate their areas accurately. |
| **Shape Pointer & Object Access** | 3 | **3** | Excellent. Base pointer GeomForm* is used to reference heap objects dynamically and invoke calculateArea(). |
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

**Dear Momna,** your Lab 8 submission demonstrates your understanding of runtime polymorphism and virtual functions in C++.

<br>

---
---

<br>

# Lab 9 Evaluation Report (Operator Overloading ==)

**Student Roll Number:** 2024-SE-33
**Student Name:** Momna Imran
**Task Folder Location:** `Task 02.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Data Members** | 3 | **3** | Excellent. Distance class correctly encapsulates private feet and inches data members. |
| **Constructor Implementation** | 3 | **3** | Excellent. Parameterized constructor initializes feet and inches values properly. |
| **`==` Operator Overloading** | 3 | **3** | Excellent. bool operator==(Distance d) correctly overloaded as a member function. |
| **Object Usage, Output & Execution** | 3 | **3** | Excellent. Objects created and compared; compiles and executes cleanly. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **-3 Marks**
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Passed (Good)**

---

### ⚠️ **Plagiarism Audit Detail**

> **Plagiarism Penalty of **-3 marks** applied.**
> Source code file is an exact raw byte-for-byte copy-match (including formatting, tab indentations, checkEqual helper method, and comments) with students `2024-SE-18` and `2024-SE-27`.

---

### 💬 **Overall Teacher Remarks**

**Dear Momna,** your Lab 9 submission demonstrates your understanding of C++ operator overloading and member function comparison.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 10 Evaluation Report (File Handling in C++)

**Student Roll Number:** 2024-SE-33
**Student Name:** Momna Imran
**Task Folder Location:** `LAB 10 oop.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **File Creation & Writing** | 3 | **3** | Excellent. notes.txt and students.txt created and written using ofstream. |
| **File Reading & Content Display** | 3 | **3** | Excellent. ifstream reading and clean output display implemented properly. |
| **Line Counting & File Appending/Copying** | 3 | **3** | Excellent. Line counting, appending, and copy.txt copying correctly implemented. |
| **File Handling, Execution & Output** | 3 | **2** | Good. Deducted 1 mark under execution because Tasks 1-3 were commented out in the single merged LAB 10 oop.cpp file. |

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

**Dear Momna,** your Lab 10 submission demonstrates your understanding of C++ file stream handling, reading, writing, and resource management.

<br>

---
---

<br>

# Lab 11 Evaluation Report (Friend Functions & Static Members)

**Student Roll Number:** 2024-SE-33
**Student Name:** Momna Imran
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

**Dear Momna,** your Lab 11 submission is missing from your repository. Please upload your complete Lab 11 tasks to receive evaluation.

<br>

---
---

<br>

# Lab 12 Evaluation Report (Pure Virtual Functions & Abstract Classes)

**Student Roll Number:** 2024-SE-33
**Student Name:** Momna Imran
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

**Dear Momna,** your Lab 12 submission is missing from your repository. Please upload your complete Lab 12 HospitalStaff tasks to receive evaluation.

<br>

---
---

<br>

# Lab 13 Evaluation Report (C++ Templates)

**Student Roll Number:** 2024-SE-33
**Student Name:** Momna Imran
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

**Dear Momna,** your Lab 13 submission is missing from your repository. Please upload your complete Lab 13 Templates tasks to receive evaluation.

<br>

---
---

<br>

# Lab 14 Evaluation Report (In-Class Lab: Vehicle Rental System)

**Student Roll Number:** 2024-SE-33  
**Student Name:** Momna Imran  
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

**Dear Momna,** your Lab 14 (Vehicle Rental System) submission is missing from your repository. Please upload your complete Lab 14 files to receive evaluation.
