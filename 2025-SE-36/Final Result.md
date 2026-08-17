# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-36
**Student Name:** Tanzeela Rehman
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                                            |
| :----------------------------------------- | :-----------: | :----------------: | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| **Structure Definition & Member Function** |       3       |        **1**       | **Need Improvement.** The required four structure members are present, and a display function is defined. However, Task 1 names the function `displaystudentInfo()` instead of the required `displayStudentInfo()`. More importantly, Task 1 does not assign values to `lastName`, `rollNumber`, or `marks`, does not call the display function, and therefore does not complete the required structure-variable demonstration. |
| **Array of Structures**                    |       3       |        **1**       | **Need Improvement.** Task 1 actually declares an array of structures, but the input is incomplete: only `firstName` is read. The statements for `lastName`, `marks`, and `rollNumber` contain no input operation and therefore have no effect. The intended array task is not correctly completed. Task 2 does not implement the required array of structures at all.                                                          |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** Task 3 correctly creates a structure object, declares a pointer to it, assigns the pointer with `ptr = &s`, assigns the structure members through `->`, and calls `displayStudentInfo()` through the pointer. The pointer-based functionality works correctly. Dynamic heap allocation with `new` is not required by the wording of the task.                                                                    |
| **Input, Output & Execution**              |       3       |        **1**       | **Need Improvement.** Task 1 compiles but does not produce the required student-information output because the display function is never called and several fields are never assigned. Task 2 **fails to compile** because string literals `"36"` and `"76"` are assigned to `int` variables `rollNumber` and `marks`. Task 3 compiles and runs successfully, displaying the student's name and marks.                          |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **6 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **6 / 12 (50.0%)**
* **Grade Status:** **Need Improvement**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> The submitted files were evaluated against the Lab 1 requirements. No comparison submission was provided for this evaluation, so a 100% code-match determination cannot be established from the available materials. The Lab 1 policy specifies a **-3 mark penalty** when a student's code is found to be plagiarized or matching 100% with another student's code.

---

### 💬 **Overall Teacher Remarks**

**Dear Tanzeela,** your submission shows that you understand the basic idea of structures and pointers, but **Task 1 and Task 2 are substantially incomplete or incorrect**.

In **Task 1**, the program declares an array instead of the required single structure variable and only actually inputs `firstName`. These statements:

```cpp
students[i].lastName;
students[i].marks;
students[i].rollNumber;
```

do not assign or input anything; they are simply expressions with no effect. The program also never calls `displaystudentInfo()`.

There is also a naming issue: the required function is:

```cpp
displayStudentInfo()
```

while the submission uses:

```cpp
displaystudentInfo()
```

C++ is case-sensitive.

In **Task 2**, the program contains compilation errors:

```cpp
s1.rollNumber = "36";
s1.marks = "76";
```

Both `rollNumber` and `marks` are declared as `int`, so string literals cannot be assigned to them. They should be numeric values such as:

```cpp
s1.rollNumber = 36;
s1.marks = 76;
```

Task 3 is the strongest part of the submission. It correctly demonstrates pointer-to-structure access and successfully runs. I compiled all three programs using **C++17 with `-Wall -Wextra -pedantic`**: Task 1 compiled with warnings but was functionally incomplete, Task 2 failed compilation, and Task 3 compiled and executed successfully.

**Overall performance: Need Improvement — 6/12.**

<br>

---
---

<br>

# Lab 2 Evaluation Report (All Tasks)

**Student Roll Number:** 2025-SE-36  
**Student Name:** Tanzeela Rehman

### Evaluation Rubric Table

| Criteria | Max Marks | Marks Obtained | Teacher's Feedback & Explanation |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | 3 | All 5 required classes were properly defined and instantiated into objects in `main()`. |
| **Member Variables** | 3 | 2 | Deduction (-1): In Task 1 (Student), `getData()` does not prompt for or read `rollNo`, leaving the attribute uninitialized. |
| **Member Functions (Inside/Outside)** | 3 | 2 | Deduction (-1): Task 2 member functions are defined inside the class (instead of outside as required) and miss explicit return types. Task 3 `isEligible()` defined inside class. Task 3 uses `age >= 18` instead of `age > 18`. Task 5 lacks division-by-zero check. |
| **Input/Output & Execution** | 3 | 2 | Deduction (-1): Task 1 prints uninitialized garbage value for `rollNo`. Task 2 produces a compiler warning (`warning: no return statement in function returning non-void` for `setDimension()`). Task 4 suffers from an integer division bug (`9/5` evaluates to `1`), resulting in incorrect temperature conversion. |
| **Total Marks** | **12** | **9** | **Final Score: 9 / 12** |

> **Note on Plagiarism:** No plagiarism detected.

---

### Summary of Results

* **Task 1 (Student):**
  * Compiles successfully.
  * Functions defined INSIDE class.
  * **Bug:** `getData()` does NOT prompt for or read `rollNo` (only reads name and marks). `displayData()` prints all 3 attributes, but `rollNo` will be uninitialized.

* **Task 2 (Rectangle):**
  * Compiles with warnings.
  * Functions defined INSIDE class (NOT outside as required by task).
  * Missing return types on `setDimension()`, `area()`, and `perimeter()` — compiler defaults to implicit `int`.
  * Compiler warning: `warning: no return statement in function returning non-void` for `setDimension()`.
  * Perimeter formula is correctly written as `2*(length+width)`.

* **Task 3 (Voter):**
  * Compiles successfully.
  * `isEligible()` defined INSIDE class (should be outside).
  * Logic uses `age >= 18` instead of `age > 18`.

* **Task 4 (Temperature):**
  * Compiles successfully.
  * Functions defined INSIDE class.
  * **Bug:** Uses `celsius*9/5+32` — integer division bug (`9/5` evaluates to `1`), leading to wrong conversion results.

* **Task 5 (Calculator):**
  * Compiles successfully.
  * Functions defined OUTSIDE class using scope resolution operator `::` — good standard implementation.
  * Missing division-by-zero validation in `divide()`.

---

### Overall Teacher Remarks

Good overall effort! All 5 tasks compiled successfully and you demonstrated a solid basic understanding of object-oriented programming concepts. To improve your code quality in future labs:
1. **Class Design & Scope:** Make sure to practice defining member functions outside the class using the scope resolution operator `::` when specified by the task requirements.
2. **Input Completeness:** Ensure every member variable is properly initialized and prompted for during data input methods.
3. **Data Types & Integer Division:** Be cautious with arithmetic operations like `9/5` which perform integer truncation in C++. Use floating-point literals (`9.0 / 5.0` or `1.8`) for accurate calculations.
4. **Function Return Types:** Always explicitly define function return types (e.g., `void`, `double`) to avoid compiler warnings and undefined return behaviors.

<br>

---
---

<br>

# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-36  
**Student Name:** Tanzeela Rehman
**Task Folder Location:** `lab 3\encapsulation.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **2** | **Good.** `product` class defined cleanly and instantiated in `lab 3\encapsulation.cpp`. <br>*Deduction (-1 mark):* Used all-lowercase class name `product` instead of standard C++ capitalized `Product`. |
| **Member Variables** | 3 | **3** | **Excellent.** Attributes (`name`, `price`, `quantity`) declared under `private:` with proper data types (`string`, `double`, `int`). |
| **Member Functions (Inside/Outside)** | 3 | **3** | **Excellent.** Setters implement validation (`n.empty()`, `p <= 0`, `q < 0`) with clear error messages. |
| **Use of Access Specifiers** | 3 | **3** | **Excellent.** Encapsulation is strictly followed (`private:` attributes, `public:` methods). |
| **Use of Getters/Setters** | 3 | **3** | **Excellent.** All getters and setters fully functional. |
| **Input/Output & Execution** | 3 | **3** | **Excellent.** Compiles 100% cleanly with `g++` and executes test driver sequence perfectly. |

---

### 📈 **Summary of Results**
* **Total Marks:** **17 / 18 (94.4%)**
* **Grade Status:** **Excellent**

### 💬 **Overall Teacher Remarks**
Dear Tanzeela, Great submission for Lab 3! Your class encapsulation, setter validation logic, and test driver execution are written cleanly. Remember to capitalize class names (`Product`) according to standard C++ naming conventions. Well done!

<br>

---
---

<br>

# Lab 4 Evaluation Report (Constructors & Destructors)
**Student Roll Number:** 2025-SE-36  
**Student Name:** Tanzeela Rehman
**Task Folder Location:** `lab 4\week 4 task 1.cpp` to `lab 4.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor Implementation** | 3 | **3** | **Excellent.** Task 1 default constructor initializes `id=0`, `name="Not Assigned"`, `salary=0.0`. Task 2 parameterized constructor initializes all banking attributes cleanly. |
| **Constructor Overloading** | 3 | **1** | **Need Improvement.** Task 3 `rectangle` default constructor sets length=0, width=0 instead of 1.0. <br>*Deduction (-2 marks):* Syntax error in `week 4 task 3.cpp` (missing closing brace `}` for default constructor, `length=l; width=w;` uses undeclared parameters `l` and `w` instead of `lenghth` and `width`) causing compilation failure. |
| **Destructor & Object Management** | 3 | **3** | **Excellent.** Task 4 (`lab 4.cpp`) `Locker` class destructor correctly prints deallocation message. Demonstrates both scoped stack allocation `{}` and dynamic heap allocation via `new`/`delete`. |
| **Output & Execution** | 3 | **2** | **Good.** Tasks 1, 2, and 4 compile and execute cleanly. <br>*Deduction (-1 mark):* Task 3 fails compilation due to syntax errors. |

---

### 📈 **Summary of Results**
* **Total Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Passed with feedback**

### 💬 **Overall Teacher Remarks**
Dear Tanzeela, Good effort on Tasks 1, 2, and 4! To earn full marks, fix the syntax errors in Task 3 (`week 4 task 3.cpp`) so it compiles cleanly, and ensure default initializations set length=1.0, width=1.0 as specified in the rubric.

<br>

---
---

<br>

# Lab 5 Evaluation Report (Inheritance)

**Student Roll Number:** 2025-SE-36
**Student Name:** Tanzeela Rehman
**Task Folder Location:** `lab 5\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Inheritance Implementation** | 3 | **2** | Good. Deducted 1 mark under Inheritance Implementation for using lowercase class names (printer, scanner, photocopier) in Task 4. |
| **Classes, Attributes & Functions** | 3 | **3** | Excellent. Required attributes and functions are defined. |
| **Object Creation & Functionality** | 3 | **2** | Good. Deducted 1 mark under Object Creation & Functionality: Photocopy function is empty (does not call print/scan) in Task 4. |
| **Input, Output & Execution** | 3 | **3** | Excellent. All files compile and execute successfully. |

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

**Dear Tanzeela,** your Lab 5 submission structurally demonstrates inheritance concepts in C++.

<br>

---
---

<br>

# Lab 6 Evaluation Report (Constructor Chaining & Destructors)

**Student Roll Number:** 2025-SE-36
**Student Name:** Tanzeela Rehman
**Task Folder Location:** `lab 6\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor & Inheritance Implementation** | 3 | **3** | Excellent. Correct constructor chaining and multilevel constructor delegation implementation. |
| **Destructor & Memory Management** | 3 | **3** | Excellent. Correct destructors freeing dynamic memory cleanly with virtual base destructor. |
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

**Dear Tanzeela,** your Lab 6 submission demonstrates your understanding of constructor chaining and destructors in C++.

<br>

---
---

<br>

# Lab 7 Evaluation Report (Composition & Aggregation)

**Student Roll Number:** 2025-SE-36
**Student Name:** Tanzeela Rehman
**Task Folder Location:** `lab 7\`

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

**Dear Tanzeela,** your Lab 7 submission demonstrates your understanding of composition (strong ownership) and aggregation (shared references) in C++.

<br>

---
---

<br>

# Lab 8 Evaluation Report (Polymorphism & Virtual Functions)

**Student Roll Number:** 2025-SE-36
**Student Name:** Tanzeela Rehman
**Task Folder Location:** `lab 8\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Polymorphism & Virtual Function** | 3 | **3** | Excellent. Pure virtual double area() = 0 declared in abstract base Shape, overridden cleanly in Rectangle and Circle. |
| **Derived Classes & Area Calculation** | 3 | **3** | Excellent. Accurate area formulas implemented in both derived classes. |
| **Shape Pointer & Object Access** | 3 | **3** | Excellent. Shape* base pointer used to call overridden area() dynamically. |
| **Object Creation, Output & Execution** | 3 | **3** | Excellent. Flawless compilation and execution. |

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

**Dear Tanzeela,** your Lab 8 submission demonstrates your understanding of runtime polymorphism and virtual functions in C++.

<br>

---
---

<br>

# Lab 9 Evaluation Report (Operator Overloading ==)

**Student Roll Number:** 2025-SE-36
**Student Name:** Tanzeela Rehman
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

**Dear Tanzeela,** your Lab 9 submission is missing from your repository. Please upload your complete Lab 9 operator overloading tasks to receive evaluation.

<br>

---
---

<br>

# Lab 10 Evaluation Report (File Handling in C++)

**Student Roll Number:** 2025-SE-36
**Student Name:** Tanzeela Rehman
**Task Folder Location:** `lab 9\ (Swapped folder)`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **File Creation & Writing** | 3 | **3** | Excellent. File writing implemented correctly with distinct message lines and student records in lab 9 folder. |
| **File Reading & Content Display** | 3 | **3** | Excellent. ifstream reading and full console output display implemented cleanly. |
| **Line Counting & File Appending/Copying** | 3 | **3** | Excellent. Accurate line count, append mode, and stream copy functionality. |
| **File Handling, Execution & Output** | 3 | **3** | Excellent. All 4 programs compile with zero errors and execute cleanly. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **-3 Marks**
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Passed (Good)**

---

### ⚠️ **Plagiarism Audit Detail**

> **Plagiarism Penalty of **-3 marks** applied.**
> All 4 source code files are 100% exact raw copy-matches with student `2025-SE-02` (Shahnza Munir), including Shahnza's name and roll number inside the append file logic.

---

### 💬 **Overall Teacher Remarks**

**Dear Tanzeela,** your Lab 10 submission demonstrates your understanding of C++ file stream handling, reading, writing, and resource management.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 11 Evaluation Report (Friend Functions & Static Members)

**Student Roll Number:** 2025-SE-36
**Student Name:** Tanzeela Rehman
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

**Dear Tanzeela,** your Lab 11 submission is missing from your repository. Please upload your complete Lab 11 tasks to receive evaluation.

<br>

---
---

<br>

# Lab 12 Evaluation Report (Pure Virtual Functions & Abstract Classes)

**Student Roll Number:** 2025-SE-36
**Student Name:** Tanzeela Rehman
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

**Dear Tanzeela,** your Lab 12 submission is missing from your repository. Please upload your complete Lab 12 tasks to receive evaluation.

<br>

---
---

<br>

# Lab 13 Evaluation Report (C++ Templates)

**Student Roll Number:** 2025-SE-36
**Student Name:** Tanzeela Rehman
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

**Dear Tanzeela,** your Lab 13 submission is missing from your repository. Please upload your complete Lab 13 Templates tasks to receive evaluation.

<br>

---
---

<br>

# Lab 14 Evaluation Report (In-Class Lab: Vehicle Rental System)

**Student Roll Number:** 2025-SE-36  
**Student Name:** Tanzeela Rehman  
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

**Dear Tanzeela,** your Lab 14 (Vehicle Rental System) submission is missing from your repository. Please upload your complete Lab 14 files to receive evaluation.
