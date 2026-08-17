# Object-Oriented Programming — Consolidated Evaluation Report

**Student Name:** Malik Waqar Latif  
**Roll Number:** `2025-SE-30`  
**Total Maximum Marks:** 210  
**Total Obtained Marks:** 110 / 210 (52.38%)  
**Total Excluding Plagiarism:** 110 / 210 (52.38%)  

---

### 📊 **Student Grand Total Result Table**

| Lab Number | Total Marks | Obtained Marks | Excluding Plagarism | Status / Notes |
| :--- | :---: | :---: | :---: | :--- |
| Lab  1 | 12 | 12 | 12 | Submitted |
| Lab  2 | 12 | 10 | 10 | Submitted |
| Lab  3 | 18 | 16 | 16 | Submitted |
| Lab  4 | 12 | 12 | 12 | Submitted |
| Lab  5 | 12 | 12 | 12 | Submitted |
| Lab  6 | 12 | 12 | 12 | Submitted |
| Lab  7 | 12 | 12 | 12 | Submitted |
| Lab  8 | 12 | 12 | 12 | Submitted |
| Lab  9 | 12 | 0 | 0 | Absent / Missing |
| Lab 10 | 12 | 12 | 12 | Submitted |
| Lab 11 | 12 | 0 | 0 | Absent / Missing |
| Lab 12 | 12 | 0 | 0 | Absent / Missing |
| Lab 13 | 12 | 0 | 0 | Absent / Missing |
| Lab 14 | 48 | 0 | 0 | Absent / Missing |
| **Grand Total** | **210** | **110** | **110** | **Percentage: 52.38% (Excl. Plag: 52.38%)** |

---


<br>

---
---

<br>

# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-30
**Student Name:** Malik Waqar Latif
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                                                      |
| :----------------------------------------- | :-----------: | :----------------: | :---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **3**       | **Excellent.** Task 1 correctly defines the `Student` structure with `firstName`, `lastName`, `rollnumber`, and `marks`. The `displayStudentInfo()` function correctly displays the student's full name and marks. A structure variable is created, all required values are assigned, and the member function is called successfully.                                                                                                     |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** Task 2 correctly uses an array of `student` structures, accepts multiple student records through user input, and calls `displayStudentInfo()` for each student after all input has been collected. The required student details are stored and displayed correctly. The only technical issue is that `student students[num]` is a variable-length array, which is accepted by GCC as an extension but is not standard C++. |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** Task 3 correctly declares a pointer to a `Student` structure using `Student *studentPtr = &s1`, assigns all structure members through the pointer using `->`, and calls `displayStudentInfo()` through the pointer. This satisfies the required pointer-based structure access and assignment.                                                                                                                             |
| **Input, Output & Execution**              |       3       |        **3**       | **Excellent.** All three programs compile successfully with C++17 and execute correctly. Task 1 and Task 3 directly assign and display student information, while Task 2 accepts multiple student records and displays all entered records. Task 2 produces only a non-fatal warning under strict C++ compilation because of the variable-length array.                                                                                   |

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

**Dear Malik,** your Lab 1 submission demonstrates an **excellent understanding of structures, arrays of structures, and structure pointers**. All three tasks satisfy the required functionality.

Task 1 correctly implements the required structure and member function. Task 2 correctly handles multiple student records through an array, accepts input, and displays every student after the input phase. Task 3 correctly demonstrates pointer-to-structure access using `->` and invokes the required `displayStudentInfo()` function through the pointer.

I checked the logic and compilation of all three programs. They are functionally correct. The only technical improvement is in Task 2, where:

```cpp
student students[num];
```

is a variable-length array. GCC may accept this as an extension, but it is **not standard C++**. A `vector<Student>` or standard dynamic allocation would be preferable.

Task 3 does **not** need `new` for full credit under the given wording: the requirement is to use a pointer to access the structure and dynamically assign its members through that pointer, which the submitted `studentPtr->...` implementation does correctly.

**Overall performance: Excellent — 12/12.**

<br>

---
---

<br>

# Lab 2 Evaluation Report (All Tasks)
**Student Roll Number:** 2025-SE-30
**Student Name:** Malik Waqar Latif

---

### **Evaluation Rubric Table**

| Criteria | Max Marks | Marks Obtained | Teacher's Feedback & Explanation |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | 3 | All 5 classes were properly defined with correct syntax, appropriate access specifiers, and valid object instantiation in `main()`. |
| **Member Variables** | 3 | 3 | Data members across all tasks were declared using correct data types and appropriate encapsulation. |
| **Member Functions (Inside/Outside)** | 3 | 2 | Member functions were defined inside and outside classes as required. Deductions applied due to implementation logic bugs: Task 2 uses an incorrect perimeter formula (`2 * length * width` instead of `2 * (length + width)`) and has a typo in the method name (`perameter`); Task 3 uses `>= 18` instead of strictly `> 18`; Task 5 lacks a division-by-zero check in `divide()`. |
| **Input/Output & Execution** | 3 | 2 | Code compiles without syntax errors for all 5 tasks, but runtime/output bugs were observed: Task 1 `displayData()` prints labels for roll number and marks without streaming the actual values; Task 2 produces incorrect output for perimeter due to the formula bug; Task 4 integer division (`9/5 = 1`) distorts temperature conversion results. |

---

### **Summary of Results**

- **Total Score:** 10 / 12
- **Plagiarism Deduction:** 0
- **Final Marks:** 10 / 12
- **Compilation Status:** All 5 tasks compiled successfully.
- **Plagiarism Status:** No plagiarism detected.

---

### **Overall Teacher Remarks**

Good work overall! You have a solid grasp of basic OOP concepts in C++, including class structure, member variables, and object instantiation. However, please keep the following improvements in mind:

1. **Task 1 (Student):** In `displayData()`, remember to output the variable values (`<< rollnumber` and `<< marks`) alongside the text labels.
2. **Task 2 (Rectangle):** Watch out for function typos (`perameter`) and double-check mathematical formulas — perimeter is `2 * (length + width)`, not `2 * length * width`.
3. **Task 3 (Voter):** Pay close attention to logical comparison requirements (strictly `age > 18` vs `age >= 18`).
4. **Task 4 (Temperature):** Be mindful of integer division in C++. Expression `9/5` evaluates to `1`. Use `9.0 / 5.0` or float types to preserve precision.
5. **Task 5 (Calculator):** Always implement safety checks for division by zero to ensure program robustness.

<br>

---
---

<br>

# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-30  
**Student Name:** Malik Waqar Latif
**Task Folder Location:** `Lab 3\1.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** `Product` class structure defined cleanly and tested in `1.cpp`. |
| **Member Variables** | 3 | **3** | **Excellent.** Attributes (`name`, `price`, `quantity`) declared under `private:` with proper data types. |
| **Member Functions (Inside/Outside)** | 3 | **2** | **Good.** Setter methods check conditions (`n != ""`, `p > 0`, `q >= 0`). <br>*Deduction (-1 mark):* Setters do not print validation error messages when invalid data is provided. |
| **Use of Access Specifiers** | 3 | **3** | **Excellent.** Encapsulation is strictly followed. |
| **Use of Getters/Setters** | 3 | **3** | **Excellent.** All getters and setters present and functional. |
| **Input/Output & Execution** | 3 | **2** | **Good.** Compiles cleanly with `g++` and runs cleanly. <br>*Deduction (-1 mark):* In `main()`, completely skipped testing invalid inputs (`p.setName("")`, `p.setPrice(-50)`, `p.setQuantity(-2)`). |

---

### 📈 **Summary of Results**
* **Total Marks:** **16 / 18 (88.9%)**
* **Grade Status:** **Passed with feedback**

### 💬 **Overall Teacher Remarks**
Dear Malik Waqar, Good submission for Lab 3! Your class encapsulation and getters/setters are implemented correctly. To improve: 1) Add `cout` error messages inside setters when invalid values are passed, and 2) Include the invalid input test calls in `main()`. Keep working hard!

<br>

---
---

<br>

# Lab 4 Evaluation Report (Constructors & Destructors)
**Student Roll Number:** 2025-SE-30  
**Student Name:** Malik Waqar Latif
**Task Folder Location:** `Lab 5\` *(Discovered in misnamed folder)*  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor Implementation** | 3 | **3** | **Excellent.** Task 1 default constructor initializes `id=0`, `name="Not Assigned"`, `salary=0.0`. Task 2 parameterized constructor initializes all banking attributes cleanly. |
| **Constructor Overloading** | 3 | **3** | **Excellent.** Task 3 `Rectangle` class overloads default (1.0), 1-parameter (square), and 2-parameter (`length`, `width`) constructors with `area()` method. |
| **Destructor & Object Management** | 3 | **3** | **Excellent.** Task 4 `Locker` class destructor correctly prints deallocation message. Demonstrates both scoped stack allocation `{}` and dynamic heap allocation via `new`/`delete`. |
| **Output & Execution** | 3 | **3** | **Excellent.** All 4 C++ files compile 100% cleanly with `g++` and execute with clear output formatting. |

---

### 📈 **Summary of Results**
* **Total Marks:** **12 / 12 (100%)**
* **Grade Status:** **Passed (Full Marks)**

### 💬 **Overall Teacher Remarks**
Dear Malik Waqar, Outstanding submission for Lab 4! All four constructor and destructor tasks are implemented cleanly and compile 100% without errors. (Note: Located inside `Lab 5` folder). Excellent job!

<br>

---
---

<br>

# Lab 5 Evaluation Report (Inheritance)

**Student Roll Number:** 2025-SE-30
**Student Name:** Malik Waqar Latif
**Task Folder Location:** `Lab 4\ (Swapped folder)`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Inheritance Implementation** | 3 | **3** | Excellent. All four inheritance types implemented correctly in Lab 4 folder. |
| **Classes, Attributes & Functions** | 3 | **3** | Excellent. Classes and functions correctly defined and used. |
| **Object Creation & Functionality** | 3 | **3** | Excellent. Objects instantiated and photocopy() calls scan and print functions. |
| **Input, Output & Execution** | 3 | **3** | Excellent. Compile and execution cleanly handled. |

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

**Dear Malik,** your Lab 5 submission structurally demonstrates inheritance concepts in C++.

<br>

---
---

<br>

# Lab 6 Evaluation Report (Constructor Chaining & Destructors)

**Student Roll Number:** 2025-SE-30
**Student Name:** Malik Waqar Latif
**Task Folder Location:** `Lab 7\ (Swapped folder)`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor & Inheritance Implementation** | 3 | **3** | Excellent. Correct constructor chaining and multilevel constructor implementation in Lab 7 folder. |
| **Destructor & Memory Management** | 3 | **3** | Excellent. Clean destructor implementation freeing dynamic memory cleanly. |
| **Classes, Attributes & Object Functionality** | 3 | **3** | Excellent. All classes, attributes, and object relationships are correctly demonstrated. |
| **Input, Output & Execution** | 3 | **3** | Excellent. All files compile and execute cleanly. |

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

**Dear Malik,** your Lab 6 submission demonstrates your understanding of constructor chaining and destructors in C++.

<br>

---
---

<br>

# Lab 7 Evaluation Report (Composition & Aggregation)

**Student Roll Number:** 2025-SE-30
**Student Name:** Malik Waqar Latif
**Task Folder Location:** `Lab 6\ (Swapped folder)`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Composition & Object Ownership** | 3 | **3** | Excellent. Proper composition with Calculator owning Display object in Lab 6 folder. |
| **Aggregation & Shared Object Usage** | 3 | **3** | Excellent. Proper aggregation with shared Calculator referenced by Student objects. |
| **Classes, Functions & Data Management** | 3 | **3** | Excellent. Arithmetic methods and lastResult management correctly written. |
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

**Dear Malik,** your Lab 7 submission demonstrates your understanding of composition (strong ownership) and aggregation (shared references) in C++.

<br>

---
---

<br>

# Lab 8 Evaluation Report (Polymorphism & Virtual Functions)

**Student Roll Number:** 2025-SE-30
**Student Name:** Malik Waqar Latif
**Task Folder Location:** `Lab 8\`

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

**Dear Malik,** your Lab 8 submission demonstrates your understanding of runtime polymorphism and virtual functions in C++.

<br>

---
---

<br>

# Lab 9 Evaluation Report (Operator Overloading ==)

**Student Roll Number:** 2025-SE-30
**Student Name:** Malik Waqar Latif
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

**Dear Malik,** your Lab 9 submission is missing from your repository. Please upload your complete Lab 9 operator overloading tasks to receive evaluation.

<br>

---
---

<br>

# Lab 10 Evaluation Report (File Handling in C++)

**Student Roll Number:** 2025-SE-30
**Student Name:** Malik Waqar Latif
**Task Folder Location:** `Lab 9\ (Swapped folder)`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **File Creation & Writing** | 3 | **3** | Excellent. File writing implemented correctly with distinct message lines and student records in Lab 9 folder. |
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

**Dear Malik,** your Lab 10 submission demonstrates your understanding of C++ file stream handling, reading, writing, and resource management.

<br>

---
---

<br>

# Lab 11 Evaluation Report (Friend Functions & Static Members)

**Student Roll Number:** 2025-SE-30
**Student Name:** Malik Waqar Latif
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

**Dear Malik,** your Lab 11 submission is missing from your repository. Please upload your complete Lab 11 tasks to receive evaluation.

<br>

---
---

<br>

# Lab 12 Evaluation Report (Pure Virtual Functions & Abstract Classes)

**Student Roll Number:** 2025-SE-30
**Student Name:** Malik Waqar Latif
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

**Dear Malik,** your Lab 12 submission is missing from your repository. Please upload your complete Lab 12 tasks to receive evaluation.

<br>

---
---

<br>

# Lab 13 Evaluation Report (C++ Templates)

**Student Roll Number:** 2025-SE-30
**Student Name:** Malik Waqar Latif
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

**Dear Malik,** your Lab 13 submission is missing from your repository. Please upload your complete Lab 13 Templates tasks to receive evaluation.

<br>

---
---

<br>

# Lab 14 Evaluation Report (In-Class Lab: Vehicle Rental System)

**Student Roll Number:** 2025-SE-30  
**Student Name:** Malik Waqar Latif  
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

**Dear Malik,** your Lab 14 (Vehicle Rental System) submission is missing from your repository. Please upload your complete Lab 14 files to receive evaluation.
