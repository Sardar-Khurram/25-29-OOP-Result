# Object-Oriented Programming — Consolidated Evaluation Report

**Student Name:** Syed Abdul Rehman Naseem  
**Roll Number:** `2024-SE-18`  
**Total Maximum Marks:** 210  
**Total Obtained Marks:** 148 / 210 (70.48%)  
**Total Excluding Plagiarism:** 166 / 210 (79.05%)  

---

### 📊 **Student Grand Total Result Table**

| Lab Number | Total Marks | Obtained Marks | Excluding Plagarism | Status / Notes |
| :--- | :---: | :---: | :---: | :--- |
| Lab  1 | 12 | 11 | 11 | Submitted |
| Lab  2 | 12 | 9 | 12 | Submitted (Plag Penalty: -3) |
| Lab  3 | 18 | 17 | 17 | Submitted |
| Lab  4 | 12 | 9 | 12 | Submitted (Plag Penalty: -3) |
| Lab  5 | 12 | 9 | 12 | Submitted (Plag Penalty: -3) |
| Lab  6 | 12 | 9 | 12 | Submitted (Plag Penalty: -3) |
| Lab  7 | 12 | 9 | 12 | Submitted (Plag Penalty: -3) |
| Lab  8 | 12 | 12 | 12 | Submitted |
| Lab  9 | 12 | 9 | 12 | Submitted (Plag Penalty: -3) |
| Lab 10 | 12 | 12 | 12 | Submitted |
| Lab 11 | 12 | 0 | 0 | Absent / Missing |
| Lab 12 | 12 | 0 | 0 | Absent / Missing |
| Lab 13 | 12 | 0 | 0 | Absent / Missing |
| Lab 14 | 48 | 42 | 42 | Submitted |
| **Grand Total** | **210** | **148** | **166** | **Percentage: 70.48% (Excl. Plag: 79.05%)** |

---


<br>

---
---

<br>

# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2024-SE-18
**Student Name:** Syed Abdul Rehman Naseem
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                                     |
| :----------------------------------------- | :-----------: | :----------------: | :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **2**       | **Good.** Task 1 correctly defines the required student fields and implements a member function that displays the student's full name and marks. However, the required function is `displayStudentInfo()`, whereas the submission defines `displayStudentInfo(Student student)` and passes the complete structure object as a parameter. The code is valid, but the required function interface is not followed exactly. |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** Task 2 correctly creates an array of `Student` structures, accepts input for multiple students, and calls `displayStudentInfo()` for every record. The input and display loops are correctly separated, and the required student information is stored and displayed.                                                                                                                                     |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** Task 3 correctly declares structure pointers, points them to existing `Student` objects, assigns the structure members through `->`, and calls `displayStudentInfo()` through the pointers. This satisfies the pointer-based access and assignment requirement.                                                                                                                                           |
| **Input, Output & Execution**              |       3       |        **3**       | **Excellent.** All three programs are valid C++ implementations and the control flow is correct. Task 1 displays two assigned records, Task 2 accepts and displays two student records, and Task 3 assigns and displays two records through structure pointers. The spacing in `#include <iostream >` is unusual but is valid preprocessing syntax.                                                                      |

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

**Dear Syed,** your Lab 1 submission demonstrates a **strong understanding of structures, arrays of structures, and structure pointers**.

Task 1 is functionally correct, but the member function does not follow the specified interface exactly. The assignment asks for:

```cpp
void displayStudentInfo()
```

whereas the submission uses:

```cpp
void displayStudentInfo(Student student)
```

and calls it as:

```cpp
s1.displayStudentInfo(s1);
```

This is valid C++, but the extra parameter is unnecessary because a member function can directly access the current object's members.

Task 2 correctly implements an array of structures with user input and a separate display loop. Task 3 correctly demonstrates pointer-to-structure access using:

```cpp
Student *ptr1 = &s1;
Student *ptr2 = &s2;
```

followed by the `->` operator for member assignment and function invocation.

The task does not explicitly require dynamic heap allocation with `new` and `delete`, so using pointers to existing structure objects in Task 3 is acceptable.

The `#include <iostream >` form is unconventional, but it is not itself a compilation error.

**Overall performance: Excellent — 11/12.**

<br>

---
---

<br>

# Lab 2 Evaluation Report (All Tasks)
**Student Roll Number:** 2024-SE-18  
**Student Name:** Syed Abdul Rehman Naseem

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** All 5 tasks are implemented with custom headers (`header1.h` to `header5.h`) and driver source files (`Project01.cpp` to `Project05.cpp`) inside `LAB#02`. Objects are instantiated cleanly. |
| **Member Variables** | 3 | **2** | **Good.** Attributes are defined, but in Task 4 (Temperature), attributes are defined as `int`, causing decimal truncation during division. In Task 5 (Calculator), attributes `num1` and `num2` are declared but unused inside member methods. |
| **Member Functions (Inside/Outside)** | 3 | **3** | **Excellent.** Scoping rules are followed (inline vs outline using `::`). Voter check uses `age >= 18`. |
| **Input/Output & Execution** | 3 | **3** | **Excellent.** All 5 tasks compile cleanly under `g++` and execute properly. |

---

### **Summary of Results**
* **Core Rubric Score:** **11 / 12**
* **Plagiarism Penalty:** **-3 marks** (100% full assignment copy detected)
* **Final Marks Obtained:** **8 / 12** (66.7%)
* **Grade Status:** **Failed (Plagiarism)**

---

### **Plagiarism Analysis Detail**
> [!NOTE]
> **Plagiarism Note:** Partial or single file matches detected in scanning, but no plagiarism penalty was applied as your overall repository structure and code are distinct.

---

### **Overall Teacher Remarks**
Dear Syed Abdul Rehman,

Your Lab 2 code is well-structured and compiles cleanly for all five tasks. 

However, automated plagiarism analysis confirmed that your entire repository (across all lab tasks) is shared 100% identically with student **2024-SE-27**. As per course policy, we cannot determine who authored the original code, so the flat plagiarism deduction of 3 marks applies equally to both matching submissions.

After applying the deduction to your core score of 11/12, your final mark for Lab 2 is **8/12**.

<br>

---
---

<br>

# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2024-SE-18  
**Student Name:** Syed Abdul Rehman Naseem
**Task Folder Location:** `LAB#03\product.h & main.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** Modular `product.h` header with guards (`#ifndef PRODUCT_H`) and `main.cpp` driver. |
| **Member Variables** | 3 | **3** | **Excellent.** All 3 attributes (`name`, `price`, `quantity`) declared under `private:` with proper data types (`string`, `double`, `int`). |
| **Member Functions (Inside/Outside)** | 3 | **2** | **Good.** Setters validate `!n.empty()`, `p > 0`, `q >= 0` with clear warning messages. <br>*Deduction (-1 mark):* Used all-lowercase method names (`setname`, `setprice`, `setquantity`, `getname`, `getprice`, `getquantity`) instead of standard C++ camelCase (`setName`, `setPrice`, `setQuantity`). |
| **Use of Access Specifiers** | 3 | **3** | **Excellent.** Encapsulation is strictly followed. |
| **Use of Getters/Setters** | 3 | **3** | **Excellent.** Getters and setters fully functional. |
| **Input/Output & Execution** | 3 | **3** | **Excellent.** Compiles 100% cleanly with `g++` and executes test sequence perfectly. |

---

### 📈 **Summary of Results**
* **Total Marks:** **17 / 18 (94.4%)**
* **Grade Status:** **Excellent**

### 💬 **Overall Teacher Remarks**
Dear Syed Abdul Rehman, Great work on Lab 3! Your `Product` class in `LAB#03\product.h` is clean, robust, and handles input validation gracefully. Use standard C++ camelCase naming conventions (`setName`, `setPrice`, `setQuantity`) in future labs. Well done!

<br>

---
---

<br>

# Lab 4 Evaluation Report (Constructors & Destructors)
**Student Roll Number:** 2024-SE-18  
**Student Name:** Syed Abdul Rehman Naseem
**Task Folder Location:** `LAB#04\`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor Implementation** | 3 | **3** | **Excellent.** Task 1 default constructor initializes `id=111`, `name="AHMAD"`, `salary=100000`. Task 2 parameterized constructor uses `this->` pointer to initialize banking attributes cleanly. |
| **Constructor Overloading** | 3 | **3** | **Excellent.** Task 3 `Rectangle` class overloads default (1.0), 2-parameter (`length`, `width`), and 1-parameter (square) constructors with `Area()` method. |
| **Destructor & Object Management** | 3 | **3** | **Excellent.** Task 4 `Locker` class destructor correctly prints deallocation message. Demonstrates both scoped stack allocation `{}` and dynamic heap allocation via `new`/`delete`. |
| **Output & Execution** | 3 | **3** | **Excellent.** All 4 C++ files compile 100% cleanly with `g++` and present formatted output banners. |

---

### 📈 **Summary of Results**
* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **-3 Marks** *(100% identical code match with student `2025-SE-05`)*
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Plagiarism Penalty (-3)**

---

### ⚠️ **Plagiarism Audit Detail**
> [!WARNING]
> Manual inspection detected a **100% character-for-character code match** across Tasks 2, 3, and 4 between your `LAB#04` files and student `2025-SE-05` (Ali Zain-Ul-Abdin)'s submission files. Per course policy, a flat **-3 marks penalty** has been applied to both submissions.

### 💬 **Overall Teacher Remarks**
Dear Syed Abdul Rehman, Your core implementation is fully working, but please write your code independently. Duplicate submissions result in heavy plagiarism penalties.

<br>

---
---

<br>

# Lab 5 Evaluation Report (Inheritance)

**Student Roll Number:** 2024-SE-18  
**Student Name:** Syed Abdul Rehman Naseem
**Task Folder Location:** `LAB#05\`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Inheritance Implementation** | 3 | **3** | **Excellent:** All four mandatory inheritance types were correctly implemented across all tasks: Single Inheritance (`Person` &rarr; `Student` in Task 1), Multilevel Inheritance (`Person` &rarr; `Employee` &rarr; `Manager` in Task 2), Hierarchical Inheritance (`Employee` &rarr; `Developer` & `Designer` in Task 3), and Multiple Inheritance (`Printer` + `Scanner` &rarr; `Photocopier` in Task 4). Public inheritance keywords and base class base-initializer lists were properly utilized. |
| **Classes, Attributes & Functions** | 3 | **3** | **Excellent:** Class structures are well-designed with private encapsulation for attributes (`name`, `age`, `student_id`, `employee_id`, `department`, `salary`, `programming_language`, `design_tool`). Appropriate member functions including parameterized constructors, default constructors, getters, setters, and formatted display methods were provided in every class. |
| **Object Creation & Functionality** | 3 | **3** | **Excellent:** Objects were instantiated correctly in `main()`. Task 1 and Task 2 demonstrate both constructor initialization and setter updates. Task 3 demonstrates polymorphically derived object instantiations (`Developer` and `Designer`), while Task 4 correctly invokes base member functions directly as well as through aggregated derived methods (`photocopy()`). |
| **Input, Output & Execution** | 3 | **3** | **Excellent:** All tasks compile cleanly without errors or warnings. Task 1 and Task 2 handle dynamic user input cleanly (including proper handling of the buffer using `cin.ignore()` in Task 2). Output displays are well-organized with clear section headers, formatting, and precision specifiers (`fixed` and `setprecision(0)` in Task 3). |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **-3 Marks**
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Passed**

---

### ⚠️ **Plagiarism Audit Detail**

> **Plagiarism penalty applied (-3 marks).**  
> Warning: All 4 task files are 100% identical matches (excluding spacing/comments) with student `2024-SE-27` (Muhammad Arslan) and partially match `2025-SE-05`.

---

### 💬 **Overall Teacher Remarks**

**Dear Syed,**  

Outstanding work on Lab 5! You have demonstrated a comprehensive understanding of Object-Oriented Programming principles in C++, specifically regarding inheritance models (Single, Multilevel, Hierarchical, and Multiple). Your code is cleanly structured, adheres strictly to object encapsulation guidelines, correctly uses base-class constructor delegation, and handles standard console I/O seamlessly. Keep up the excellent work!

<br>

---
---

<br>

# Lab 6 Evaluation Report (Constructor Chaining & Destructors)

**Student Roll Number:** 2024-SE-18
**Student Name:** Syed Abdul Rehman Naseem
**Task Folder Location:** `LAB#06\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor & Inheritance Implementation** | 3 | **3** | Excellent. Correct constructor chaining implementation and multilevel constructor call sequence. |
| **Destructor & Memory Management** | 3 | **3** | Excellent. Correct destructor implementation, including virtual destructor in base class, showing dynamic memory releases cleanly. |
| **Classes, Attributes & Object Functionality** | 3 | **3** | Excellent. Required classes, attributes, and object relationships are correctly demonstrated. |
| **Input, Output & Execution** | 3 | **3** | Excellent. All C++ files compile cleanly without warnings and execute with clear console logs. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **-3 Marks**
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Passed (Good)**

---

### ⚠️ **Plagiarism Audit Detail**

> **Plagiarism Penalty of **-3 marks** applied.**
> All 4 task files are 100% identical copy-matches (excluding spacing/comments) with student `2024-SE-27` (Muhammad Arslan).

---

### 💬 **Overall Teacher Remarks**

**Dear Syed,** your Lab 6 submission demonstrates your understanding of constructor chaining and destructors in C++.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 7 Evaluation Report (Composition & Aggregation)

**Student Roll Number:** 2024-SE-18
**Student Name:** Syed Abdul Rehman Naseem
**Task Folder Location:** `LAB#07\`

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
> Both task files are 100% identical copy-matches (excluding spacing/comments) with students `2024-SE-27`, `2025-SE-05`, and `2025-SE-31`.

---

### 💬 **Overall Teacher Remarks**

**Dear Syed,** your Lab 7 submission demonstrates your understanding of composition (strong ownership) and aggregation (shared references) in C++.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 8 Evaluation Report (Polymorphism & Virtual Functions)

**Student Roll Number:** 2024-SE-18
**Student Name:** Syed Abdul Rehman Naseem
**Task Folder Location:** `LAB#08\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Polymorphism & Virtual Function** | 3 | **3** | Excellent. Base Shape defines virtual double area() and derived classes properly override it. |
| **Derived Classes & Area Calculation** | 3 | **3** | Excellent. Derived classes Rectangle and Circle accurately compute their areas. |
| **Shape Pointer & Object Access** | 3 | **3** | Excellent. Base pointer Shape* is used to reference heap objects dynamically. |
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

**Dear Syed,** your Lab 8 submission demonstrates your understanding of runtime polymorphism and virtual functions in C++.

<br>

---
---

<br>

# Lab 9 Evaluation Report (Operator Overloading ==)

**Student Roll Number:** 2024-SE-18
**Student Name:** Syed Abdul Rehman Naseem
**Task Folder Location:** `LAB#09\`

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
> Source code file is an exact raw byte-for-byte copy-match (including formatting, tab indentations, checkEqual helper method, and comments) with students `2024-SE-27` and `2024-SE-33`.

---

### 💬 **Overall Teacher Remarks**

**Dear Syed,** your Lab 9 submission demonstrates your understanding of C++ operator overloading and member function comparison.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 10 Evaluation Report (File Handling in C++)

**Student Roll Number:** 2024-SE-18
**Student Name:** Syed Abdul Rehman Naseem
**Task Folder Location:** `LAB#10\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **File Creation & Writing** | 3 | **3** | Excellent. notes.txt and students.txt correctly created and populated across separate task files. |
| **File Reading & Content Display** | 3 | **3** | Excellent. ifstream reading and clean console output display implemented correctly. |
| **Line Counting & File Appending/Copying** | 3 | **3** | Excellent. Line counting, ios::app append mode, and stream copying to copy.txt all correctly implemented. |
| **File Handling, Execution & Output** | 3 | **3** | Excellent. All 4 programs compile cleanly and execute flawlessly with proper stream closures. |

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

**Dear Syed,** your Lab 10 submission demonstrates your understanding of C++ file stream handling, reading, writing, and resource management.

<br>

---
---

<br>

# Lab 11 Evaluation Report (Friend Functions & Static Members)

**Student Roll Number:** 2024-SE-18
**Student Name:** Syed Abdul Rehman Naseem
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

**Dear Syed,** your Lab 11 submission is missing from your repository. Please upload your complete Lab 11 tasks to receive evaluation.

<br>

---
---

<br>

# Lab 12 Evaluation Report (Pure Virtual Functions & Abstract Classes)

**Student Roll Number:** 2024-SE-18
**Student Name:** Syed Abdul Rehman Naseem
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

**Dear Syed,** your Lab 12 submission is missing from your repository. Please upload your complete Lab 12 tasks to receive evaluation.

<br>

---
---

<br>

# Lab 13 Evaluation Report (C++ Templates)

**Student Roll Number:** 2024-SE-18
**Student Name:** Syed Abdul Rehman Naseem
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

**Dear Syed,** your Lab 13 submission is missing from your repository. Please upload your complete Lab 13 Templates tasks to receive evaluation.

<br>

---
---

<br>

# Lab 14 Evaluation Report (In-Class Lab: Vehicle Rental System)

**Student Roll Number:** 2024-SE-18  
**Student Name:** Syed Abdul Rehman Naseem  
**Task Folder Location:** `Open_Ended_Lab\`  

---

### 📊 **Evaluation Rubric & Score Sheet (Max 48 Marks)**

| **Criterion** | **Weight** | **Raw Score (1–4)** | **Weighted Marks** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :---: | :--- |
| **OOP Design** | x 4 | **4** / 4 | **16 / 16** | **Excellent.** Abstract base class `Vehicle` with pure virtual methods (`virtual void display() const = 0;`, `virtual std::string getType() const = 0;`) and virtual destructor. Clean inheritance hierarchy for `Car`, `Motorbike`, and `Truck`. Uses custom `Fleet<Vehicle>` class template and smart pointers (`std::shared_ptr`). |
| **Design Justification** | x 3 | **2** / 4 | **6 / 12** | **Developing.** The code architecture and inline documentation show intentional design choices, but a standalone `DesignNote.txt` document explicitly answering the required design questions (Section 4b) was omitted. |
| **Encapsulation & Responsibility** | x 2 | **4** / 4 | **8 / 8** | **Excellent.** Flawless encapsulation with private data members across all 8 classes. Deliberate access control and single-responsibility principles followed throughout. |
| **Working Demo** | x 2 | **4** / 4 | **8 / 8** | **Excellent.** Compiles cleanly under C++17 with zero errors/warnings. `main()` covers the complete scenario: fleet addition, customer registration, rental processing, already-rented vehicle prevention, return processing, active vs available vehicle summaries, template demonstration, and dynamic runtime dispatch. |
| **Code Quality** | x 1 | **4** / 4 | **4 / 4** | **Excellent.** Professional modular structure with header/source split across all classes, header guards, consistent naming, `const` correctness, and leak-free memory management. |

---

### 📈 **Summary of Results**

* **Weighted Total Marks:** **42 / 48 (87.5%)**
* **Grade Status:** **Passed (Excellent)**
* **Plagiarism Penalty:** **0 Marks** (Independent individual submission)

---

### 💬 **Overall Teacher Remarks**

**Dear Syed Abdul Rehman,** your Lab 14 submission demonstrates an outstanding grasp of object-oriented design principles, custom template classes, and clean C++ modular architecture. Ensure to include the written `DesignNote.txt` in future design labs to secure full marks in design justification.
