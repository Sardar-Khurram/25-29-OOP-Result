# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-42
**Student Name:** Muhammad Arif
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                                                                                              |
| :----------------------------------------- | :-----------: | :----------------: | :-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **2**       | **Good.** Task 1 correctly defines the required four data members and provides a member function that displays the student's full name and marks. However, the required function name is `displayStudentInfo()`, while the submission uses `displaystudentinfo(student S)`. It also unnecessarily passes a complete `student` object to the function instead of using the current object's members. The functionality works, but the specified interface is not followed exactly. |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** Task 2 correctly implements an array of `student` structures, accepts multiple student records through user input, and calls the display function for every student after all records have been entered. The required student fields are stored and displayed correctly. The only technical issue is that `student s[n]` is a variable-length array, which is accepted by GCC as an extension but is not standard C++.                                             |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** Task 3 correctly declares a pointer to a `student` structure using `student *ptr = &s1`, assigns the structure members through `->`, and calls the display function through the pointer. This satisfies the pointer-based access and assignment requirement. Dynamic heap allocation with `new` is not explicitly required by the task.                                                                                                                            |
| **Input, Output & Execution**              |       3       |        **3**       | **Excellent.** All three programs are syntactically valid and the program flow is correct. Task 1 displays the assigned record, Task 2 accepts and displays multiple records, and Task 3 accepts and displays a record through a structure pointer.                                                                                                                                                                                                                               |

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

**Dear Muhammad,** your Lab 1 submission demonstrates a **strong understanding of structures, arrays of structures, and structure pointers**.

Task 1 correctly defines the required student information and successfully displays it. The main issue is that the assignment specifically requires the member function:

```cpp
displayStudentInfo()
```

while your implementation uses:

```cpp
displaystudentinfo(student S)
```

C++ is case-sensitive, so this is a different function name. The parameter `student S` is also unnecessary because the member function can directly access the structure's own members.

Task 2 correctly implements the array-of-structures requirement with user input and a separate display loop. Task 3 correctly demonstrates pointer-to-structure access through:

```cpp
student *ptr = &s1;
```

and uses the `->` operator to assign the data members and call the display function.

The only additional technical consideration is the use of:

```cpp
student s[n];
```

in Task 2. This is a variable-length array, which GCC may accept as an extension but which is **not standard C++**. A standard solution would use `vector<student>` or dynamic allocation.

**Overall performance: Excellent — 11/12.**

<br>

---
---

<br>

# Lab 2 Evaluation Report (All Tasks)
**Student Roll Number:** 2025-SE-42  
**Student Name:** Muhammad Arif

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **2** | **Good.** 3 out of 5 required tasks (`Student`, `Rectangle`, `Voter`) are implemented inside folder `LAB 02`. Clean modular structure with header files (`header1.h`, `header2.h`, `header3.h`), driver files (`project1.cpp.cpp`, `project2.cpp.cpp`, `project3.cpp.cpp`), and proper header guards (`#ifndef`). Tasks 4 (`Temperature`) and 5 (`Calculator`) were omitted. |
| **Member Variables** | 3 | **2** | **Good.** Attributes across the 3 submitted tasks are declared with proper C++ types (`string`, `int`, `float`). |
| **Member Functions (Inside/Outside)** | 3 | **2** | **Good.** Scoping rules are followed cleanly, defining member functions outside the classes using the scope resolution operator `::` in `Rectangle` and `Voter`. Voter check uses `age >= 18`. |
| **Input/Output & Execution** | 3 | **2** | **Good.** All 3 submitted tasks compile cleanly under `g++` without warnings or errors and execute correctly. Tasks 4 and 5 were not submitted. |

---

### **Summary of Results**
* **Core Score:** **8 / 12**
* **Plagiarism Penalty:** **0 Marks** (No full assignment copy detected)
* **Final Marks Obtained:** **8 / 12** (66.7%)
* **Grade Status:** **Passed with feedback**

---

### **Overall Teacher Remarks**
Dear Muhammad Arif,

Your Lab 2 submission in `LAB 02` contains clean, working implementations for Tasks 1 (`Student`), 2 (`Rectangle`), and 3 (`Voter`). Header files include proper header guards (`#ifndef`), and function definitions follow scoping rules using the `::` operator. All 3 submitted tasks compile cleanly and execute properly.

To improve:
1. **Missing Tasks:** Tasks 4 (`Temperature`) and 5 (`Calculator`) were not included in `LAB 02`. Be sure to submit all assigned tasks in future labs.
2. **File Extensions:** Driver files are named with double extensions (`project1.cpp.cpp`). Keep filenames clean (e.g., `project1.cpp`).

Your final score for Lab 2 is **8/12**. Good effort!
ted independently and submitted completely.

<br>

---
---

<br>

# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-42  
**Student Name:** Muhammad Arif
**Task Folder Location:** `LAB 03\Product.h & main.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** Modular `Product.h` interface with guards (`#ifndef PRODUCT_H`) and `main.cpp` driver. |
| **Member Variables** | 3 | **3** | **Excellent.** Attributes (`name`, `price`, `quantity`) declared under `private:`. |
| **Member Functions (Inside/Outside)** | 3 | **1** | **Needs Improvement.** Inverted setter validation logic: attributes are assigned invalid values unconditionally (`name = a; price = b; quantity = c;`), and error messages are printed when inputs ARE valid (`if (!a.empty()) cout << "Error...";`). |
| **Use of Access Specifiers** | 3 | **3** | **Excellent.** Encapsulation is strictly followed (`private:` attributes, `public:` methods). |
| **Use of Getters/Setters** | 3 | **2** | **Good.** Getters and setters present. |
| **Input/Output & Execution** | 3 | **2** | **Good.** Compiles cleanly with `g++`, but outputs inverted error messages during execution. |

---

### 📈 **Summary of Results**
* **Core Rubric Score:** **14 / 18**
* **Plagiarism Penalty:** **-5 Marks** *(100% identical code match with student `2025-SE-40`)*
* **Final Marks:** **9 / 18 (50.0%)**
* **Grade Status:** **Plagiarism Penalty (-5)**

---

### ⚠️ **Plagiarism Audit Detail**
> [!WARNING]
> Manual inspection detected a **100% character-for-character code match** between your `LAB 03\Product.h` & `main.cpp` and student `2025-SE-40` (Danish Iqbal)'s submission files in `LAB 03 Encapsulation`. Per course policy, a flat **-5 marks penalty** has been applied to both submissions.

### 💬 **Overall Teacher Remarks**
Dear Muhammad, Please write your code independently. Submitting duplicate code results in heavy plagiarism penalties. Also, fix your setter validation logic: do not assign values unconditionally before checking `if(condition)`, and print error messages when inputs are invalid (`if (a.empty())`), not when they are valid.

<br>

---
---

<br>

# Lab 4 Evaluation Report (Constructors & Destructors)
**Student Roll Number:** 2025-SE-42  
**Student Name:** Muhammad Arif
**Task Folder Location:** `LAB 04\`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor Implementation** | 3 | **2** | **Good.** Task 1 default constructor initializes `ID=0`, `name="Not Assign"`, `salary=0.01`. Task 2 parameterized constructor uses `this->` pointer. <br>*Deduction (-1 mark):* Task 2 attributes were declared `public:` instead of `private:` as specified in rubric requirements. |
| **Constructor Overloading** | 3 | **3** | **Excellent.** Task 3 `Rectangle` class overloads default (1.0), 2-parameter (`length`, `width`), and 1-parameter (square) constructors cleanly with `area()` method. |
| **Destructor & Object Management** | 3 | **3** | **Excellent.** Task 4 `Locker` class destructor correctly prints deallocation message. Demonstrates both scoped stack allocation `{}` and dynamic heap allocation via `new`/`delete`. |
| **Output & Execution** | 3 | **3** | **Excellent.** All 4 C++ files compile 100% cleanly with `g++` and execute with clear output formatting. |

---

### 📈 **Summary of Results**
* **Total Marks:** **11 / 12**
* **Plagiarism Penalty:** **-3 Marks** *(100% identical code match with student `2025-SE-40`)*
* **Final Marks:** **8 / 12 (66.7%)**
* **Grade Status:** **Plagiarism Penalty (-3)**

---

### ⚠️ **Plagiarism Audit Detail**
> [!WARNING]
> Manual inspection detected a **100% character-for-character code match** across all 4 tasks between your `LAB 04` files and student `2025-SE-40` (Danish Iqbal)'s submission files. Per course policy, a flat **-3 marks penalty** has been applied to both submissions.

### 💬 **Overall Teacher Remarks**
Dear Muhammad Arif, Your core implementation is working, but please write your code independently. Duplicate submissions result in heavy plagiarism penalties. Also, keep data members `private` to maintain proper encapsulation in Task 2.

<br>

---
---

<br>

# Lab 5 Evaluation Report (Inheritance)

**Student Roll Number:** 2025-SE-42
**Student Name:** Muhammad Arif
**Task Folder Location:** `LAB 05\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Inheritance Implementation** | 3 | **3** | Excellent. Single, multilevel, hierarchical, and multiple inheritance structurally implemented correctly. |
| **Classes, Attributes & Functions** | 3 | **3** | Excellent. Correct encapsulation and member definition. |
| **Object Creation & Functionality** | 3 | **3** | Excellent. Objects created and photocopy() successfully calls print and scan methods. |
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
> All 4 task files are 100% identical copy-matches (excluding spacing/comments) with student `2025-SE-40` (Syeda Tanzeela Gillani).

---

### 💬 **Overall Teacher Remarks**

**Dear Muhammad,** your Lab 5 submission structurally demonstrates inheritance concepts in C++.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 6 Evaluation Report (Constructor Chaining & Destructors)

**Student Roll Number:** 2025-SE-42
**Student Name:** Muhammad Arif
**Task Folder Location:** `LAB 06\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor & Inheritance Implementation** | 3 | **3** | Excellent. Clean constructor chaining and multilevel constructor execution prints are correct. |
| **Destructor & Memory Management** | 3 | **3** | Excellent. Destructors correctly release dynamically allocated memory on the heap with virtual destructors. |
| **Classes, Attributes & Object Functionality** | 3 | **3** | Excellent. Classes, attributes, and object relationships are correctly demonstrated. |
| **Input, Output & Execution** | 3 | **3** | Excellent. All files compile and execute successfully. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **-3 Marks**
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Passed (Good)**

---

### ⚠️ **Plagiarism Audit Detail**

> **Plagiarism Penalty of **-3 marks** applied.**
> All 4 task files are 100% identical copy-matches (excluding spacing/comments) with student `2025-SE-40` (Syeda Tanzeela Gillani).

---

### 💬 **Overall Teacher Remarks**

**Dear Muhammad,** your Lab 6 submission demonstrates your understanding of constructor chaining and destructors in C++.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 7 Evaluation Report (Composition & Aggregation)

**Student Roll Number:** 2025-SE-42
**Student Name:** Muhammad Arif
**Task Folder Location:** `LAB 07\`

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
> Both task files are 100% identical copy-matches (excluding spacing/comments) with student `2025-SE-40` (Syeda Tanzeela Gillani).

---

### 💬 **Overall Teacher Remarks**

**Dear Muhammad,** your Lab 7 submission demonstrates your understanding of composition (strong ownership) and aggregation (shared references) in C++.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 8 Evaluation Report (Polymorphism & Virtual Functions)

**Student Roll Number:** 2025-SE-42
**Student Name:** Muhammad Arif
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

**Dear Muhammad,** your Lab 8 submission is missing from your repository. Please upload your complete Lab 8 runtime polymorphism tasks to receive evaluation.

<br>

---
---

<br>

# Lab 9 Evaluation Report (Operator Overloading ==)

**Student Roll Number:** 2025-SE-42
**Student Name:** Muhammad Arif
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

**Dear Muhammad,** your Lab 9 submission is missing from your repository. Please upload your complete Lab 9 operator overloading tasks to receive evaluation.

<br>

---
---

<br>

# Lab 10 Evaluation Report (File Handling in C++)

**Student Roll Number:** 2025-SE-42
**Student Name:** Muhammad Arif
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

**Dear Muhammad,** your Lab 10 submission is missing from your repository. Please upload your complete Lab 10 File Handling tasks to receive evaluation.

<br>

---
---

<br>

# Lab 11 Evaluation Report (Friend Functions & Static Members)

**Student Roll Number:** 2025-SE-42
**Student Name:** Muhammad Arif
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

**Dear Muhammad,** your Lab 11 submission is missing from your repository. Please upload your complete Lab 11 tasks to receive evaluation.

<br>

---
---

<br>

# Lab 12 Evaluation Report (Pure Virtual Functions & Abstract Classes)

**Student Roll Number:** 2025-SE-42
**Student Name:** Muhammad Arif
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

**Dear Muhammad,** your Lab 12 submission is missing from your repository. Please upload your complete Lab 12 tasks to receive evaluation.

<br>

---
---

<br>

# Lab 13 Evaluation Report (C++ Templates)

**Student Roll Number:** 2025-SE-42
**Student Name:** Muhammad Arif
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

**Dear Muhammad,** your Lab 13 submission is missing from your repository. Please upload your complete Lab 13 Templates tasks to receive evaluation.

<br>

---
---

<br>

# Lab 14 Evaluation Report (In-Class Lab: Vehicle Rental System)

**Student Roll Number:** 2025-SE-42  
**Student Name:** Muhammad Arif  
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
