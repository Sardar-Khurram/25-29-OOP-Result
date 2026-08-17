# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2024-SE-27
**Student Name:** Muhammad Arslan
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                                                                  |
| :----------------------------------------- | :-----------: | :----------------: | :---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **2**       | **Good.** Task 1 correctly defines the required student data members and implements a function that displays the student's full name and marks. However, the required member function is `displayStudentInfo()`, while the submission defines `displayStudentInfo(Student student)` and unnecessarily passes the complete structure object as a parameter. The implementation is valid, but it does not exactly follow the specified function design. |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** Task 2 correctly creates an array of `Student` structures, accepts details for multiple students through input, and calls `displayStudentInfo()` for each record. The input and output loops are correctly implemented.                                                                                                                                                                                                                |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** Task 3 correctly declares structure pointers, uses the `->` operator to assign/access members, and calls `displayStudentInfo()` through the pointers. This satisfies the required pointer-to-structure functionality.                                                                                                                                                                                                                  |
| **Input, Output & Execution**              |       3       |        **3**       | **Excellent.** The three task implementations are syntactically valid and the program flow is correct. Task 1 displays two assigned records, Task 2 accepts and displays multiple records, and Task 3 assigns and displays records through structure pointers.                                                                                                                                                                                        |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **11 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **11 / 12 (91.67%)**
* **Grade Status:** **Excellent**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> The submitted material was evaluated against the Lab 1 requirements. No comparison submission was provided for this evaluation, so a 100% code-match determination cannot be established from the available materials. The Lab 1 policy specifies a **-3 mark penalty** for code found to be plagiarized or matching 100% with another student's code.

---

### 💬 **Overall Teacher Remarks**

**Dear Muhammad,** your submission demonstrates a **strong understanding of structures, arrays of structures, and structure pointers**.

Task 1 is functionally correct, but the member-function design does not exactly match the requirement. The task asks for:

```cpp
void displayStudentInfo()
```

whereas your implementation uses:

```cpp
void displayStudentInfo(Student student)
```

and calls it by passing the same object:

```cpp
s1.displayStudentInfo(s1);
```

This is valid C++, but the parameter is unnecessary because a member function can directly access the current object's members.

Task 2 correctly implements an array of structures and handles multiple student records using input and display loops.

Task 3 correctly demonstrates pointer-based access through:

```cpp
Student *ptr1 = &s1;
Student *ptr2 = &s2;
```

and uses the `->` operator correctly for member assignment and function invocation.

The extra `Age` member is not required by the lab, but it does not negatively affect the required functionality.

**Overall performance: Excellent — 11/12.**

<br>

---
---

<br>

# Lab 2 Evaluation Report (All Tasks)
**Student Roll Number:** 2024-SE-27  

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** All 5 tasks are implemented with custom headers (`header1.h` to `header5.h`) and driver source files (`Project01.cpp` to `Project05.cpp`) inside `Lab#02`. Objects are instantiated cleanly. |
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
> [!WARNING]
> **Plagiarism Alert:** Your submitted files in `Lab#02` (`header1.h` through `header5.h` and `Project01.cpp` through `Project05.cpp`) are **100% identical** (character-for-character, zero code variance) to the files submitted by students **2024-SE-18**, **2024-SE-28**, and **2025-SE-05**. All matching students share the exact same code — the plagiarism penalty of **-3 marks** applies equally to all matching students.

---

### **Overall Teacher Remarks**
Dear Muhammad,

Your Lab 2 code is well-structured and compiles cleanly for all five tasks. 

However, automated plagiarism analysis confirmed that your entire `Lab#02` submission is shared 100% identically across multiple students (**2024-SE-18**, **2024-SE-28**, **2025-SE-05**). We cannot determine who authored the original code, so the flat plagiarism deduction of 3 marks applies to all matching submissions. 

After applying the deduction to your core score of 8/12, your final mark for Lab 2 is **6/12**. Please ensure that all future assignments represent your own independent work.

<br>

---
---

<br>

# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2024-SE-27  
**Student Name:** Muhammad Arslan
**Task Folder Location:** `Lab#03\product.h & main.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** Modular `product.h` header with preprocessor guards (`#ifndef PRODUCT_H`) and `main.cpp` driver. |
| **Member Variables** | 3 | **3** | **Excellent.** Attributes (`name`, `price`, `quantity`) declared under `private:` with proper data types (`string`, `double`, `int`). |
| **Member Functions (Inside/Outside)** | 3 | **2** | **Good.** Setters validate `!n.empty()`, `p > 0`, `q >= 0` with clear warning messages. <br>*Deduction (-1 mark):* Used all-lowercase method names (`setname`, `setprice`, `setquantity`, `getname`, `getprice`, `getquantity`). |
| **Use of Access Specifiers** | 3 | **3** | **Excellent.** Encapsulation is strictly followed. |
| **Use of Getters/Setters** | 3 | **3** | **Excellent.** Getters and setters fully functional. |
| **Input/Output & Execution** | 3 | **3** | **Excellent.** Compiles 100% cleanly with `g++` and executes test sequence perfectly. |

---

### 📈 **Summary of Results**
* **Core Rubric Score:** **17 / 18**
* **Plagiarism Penalty:** **-5 Marks** *(100% identical code match with students `2024-SE-18`, `2024-SE-29`, `2024-SE-30`)*
* **Final Marks:** **12 / 18 (66.7%)**
* **Grade Status:** **Plagiarism Penalty (-5)**

---

### ⚠️ **Plagiarism Audit Detail**
> [!WARNING]
> Manual inspection detected a **100% character-for-character code match** between your `Lab#03\product.h` & `main.cpp` and student `2024-SE-18` (Syed Abdul Rehman)'s submission files. Per course policy, a flat **-5 marks penalty** has been applied to both submissions.

### 💬 **Overall Teacher Remarks**
Dear Muhammad Arslan, Please submit your work independently. Duplicate code submissions result in heavy plagiarism penalties. Ensure to follow standard C++ camelCase method naming (`setName`, `setPrice`, `setQuantity`) in future labs.

<br>

---
---

<br>

# Lab 4 Evaluation Report (Constructors & Destructors)
**Student Roll Number:** 2024-SE-27  
**Student Name:** Muhammad Arslan
**Task Folder Location:** `Lab#04\`  

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
* **Plagiarism Penalty:** **-3 Marks** *(100% identical code match with student `2024-SE-18` & `2025-SE-05`)*
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Plagiarism Penalty (-3)**

---

### ⚠️ **Plagiarism Audit Detail**
> [!WARNING]
> Manual inspection detected a **100% character-for-character code match** across all 4 tasks between your `Lab#04` files and student `2024-SE-18` (Syed Abdul Rehman) & `2025-SE-05` (Ali Zain-Ul-Abdin)'s submission files. Per course policy, a flat **-3 marks penalty** has been applied to all submissions.

### 💬 **Overall Teacher Remarks**
Dear Muhammad Arslan, Your core implementation is fully working, but please write your code independently. Duplicate submissions result in heavy plagiarism penalties.

<br>

---
---

<br>

# Lab 5 Evaluation Report (Inheritance)

**Student Roll Number:** 2024-SE-27
**Student Name:** Muhammad Arslan
**Task Folder Location:** `Lab#05\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Inheritance Implementation** | 3 | **3** | All 4 inheritance types (Single: `Person`→`Student`, Multilevel: `Person`→`Employee`→`Manager`, Hierarchical: `Employee`→`Developer`/`Designer`, Multiple: `Printer`+`Scanner`→`Photocopier`) are flawlessly implemented with proper `public` derivation and base class constructor initialization lists. |
| **Classes, Attributes & Functions** | 3 | **3** | All required attributes, getters, setters, constructors, and display/action functions are correctly declared and encapsulated with appropriate `private` access modifiers across all 4 tasks. |
| **Object Creation & Functionality** | 3 | **3** | Objects (`Student`, `Manager`, `Developer`, `Designer`, `Photocopier`) are properly instantiated in `main()`. Method invocation, constructor chaining, and inherited display calls function as intended. |
| **Input, Output & Execution** | 3 | **3** | All 4 source files compiled cleanly with `g++ -std=c++17 -Wall -Wextra` without any warnings or errors. Execution outputs are formatted neatly with proper prompt handling and line breaks. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **-3 Marks**
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Passed**

---

### ⚠️ **Plagiarism Audit Detail**

> **Plagiarism penalty applied (-3 marks).**
> Warning: All 4 task files are 100% identical matches (excluding spacing/comments) with student `2024-SE-18` (Syed Abdul Rehman) and partially match `2025-SE-05`.

---

### 💬 **Overall Teacher Remarks**

**Dear Muhammad,**

Excellent work on Lab 5! You have demonstrated a thorough understanding of Object-Oriented Programming inheritance concepts in C++. All four tasks (Single, Multilevel, Hierarchical, and Multiple Inheritance) were correctly implemented with clean syntax, proper encapsulation, constructor delegation/chaining, and zero compiler warnings or errors. Keep up the high standard of work!

<br>

---
---

<br>

# Lab 6 Evaluation Report (Constructor Chaining & Destructors)

**Student Roll Number:** 2024-SE-27
**Student Name:** Muhammad Arslan
**Task Folder Location:** `Lab#06\`

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
> All 4 task files are 100% identical copy-matches (excluding spacing/comments) with student `2024-SE-18` (Syed Abdul Rehman).

---

### 💬 **Overall Teacher Remarks**

**Dear Muhammad,** your Lab 6 submission demonstrates your understanding of constructor chaining and destructors in C++.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 7 Evaluation Report (Composition & Aggregation)

**Student Roll Number:** 2024-SE-27
**Student Name:** Muhammad Arslan
**Task Folder Location:** `Lab#07\`

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
> Both task files are 100% identical copy-matches (excluding spacing/comments) with students `2024-SE-18`, `2025-SE-05`, and `2025-SE-31`.

---

### 💬 **Overall Teacher Remarks**

**Dear Muhammad,** your Lab 7 submission demonstrates your understanding of composition (strong ownership) and aggregation (shared references) in C++.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 8 Evaluation Report (Polymorphism & Virtual Functions)

**Student Roll Number:** 2024-SE-27
**Student Name:** Muhammad Arslan
**Task Folder Location:** `Lab#08\`

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

**Dear Muhammad,** your Lab 8 submission demonstrates your understanding of runtime polymorphism and virtual functions in C++.

<br>

---
---

<br>

# Lab 9 Evaluation Report (Operator Overloading ==)

**Student Roll Number:** 2024-SE-27
**Student Name:** Muhammad Arslan
**Task Folder Location:** `Lab#09\`

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
> Source code file is an exact raw byte-for-byte copy-match (including formatting, tab indentations, checkEqual helper method, and comments) with students `2024-SE-18` and `2024-SE-33`.

---

### 💬 **Overall Teacher Remarks**

**Dear Muhammad,** your Lab 9 submission demonstrates your understanding of C++ operator overloading and member function comparison.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 10 Evaluation Report (File Handling in C++)

**Student Roll Number:** 2024-SE-27
**Student Name:** Muhammad Arslan
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

**Student Roll Number:** 2024-SE-27
**Student Name:** Muhammad Arslan
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

**Student Roll Number:** 2024-SE-27
**Student Name:** Muhammad Arslan
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

**Student Roll Number:** 2024-SE-27
**Student Name:** Muhammad Arslan
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

**Student Roll Number:** 2024-SE-27  
**Student Name:** Muhammad Arslan  
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
