# Object-Oriented Programming — Consolidated Evaluation Report

**Student Name:** Areeba Taqdees Mir  
**Roll Number:** `2025-SE-13`  
**Total Maximum Marks:** 210  
**Total Obtained Marks:** 191 / 210 (90.95%)  
**Total Excluding Plagiarism:** 205 / 210 (97.62%)  

---

### 📊 **Student Grand Total Result Table**

| Lab Number | Total Marks | Obtained Marks | Excluding Plagarism | Status / Notes |
| :--- | :---: | :---: | :---: | :--- |
| Lab  1 | 12 | 12 | 12 | Submitted |
| Lab  2 | 12 | 11 | 11 | Submitted |
| Lab  3 | 18 | 18 | 18 | Submitted |
| Lab  4 | 12 | 12 | 12 | Submitted |
| Lab  5 | 12 | 12 | 12 | Submitted |
| Lab  6 | 12 | 9 | 12 | Submitted (Plag Penalty: -3) |
| Lab  7 | 12 | 8 | 8 | Submitted |
| Lab  8 | 12 | 12 | 12 | Submitted |
| Lab  9 | 12 | 9 | 12 | Submitted (Plag Penalty: -3) |
| Lab 10 | 12 | 12 | 12 | Submitted |
| Lab 11 | 12 | 12 | 12 | Submitted |
| Lab 12 | 12 | 12 | 12 | Submitted |
| Lab 13 | 12 | 12 | 12 | Submitted |
| Lab 14 | 48 | 40 | 48 | Submitted (Plag Penalty: -8) |
| **Grand Total** | **210** | **191** | **205** | **Percentage: 90.95% (Excl. Plag: 97.62%)** |

---


<br>

---
---

<br>

# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-13
**Student Name:** Areeba Taqdees Mir
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                       |
| :----------------------------------------- | :-----------: | :----------------: | :--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **3**       | **Excellent.** All three programs correctly define the `Student` structure with first name, last name, roll number, and marks. `displayStudentInfo()` correctly displays the student's full name and marks. Task 1 also correctly creates a structure variable, assigns values, and calls the member function.                                                                                             |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** The required array-of-structures implementation is present in **Task 3**. It accepts multiple student records and displays every student's full name and marks. However, the student has **swapped the intended order of Tasks 2 and 3**: the pointer implementation was submitted as Task 2, while the array implementation was submitted as Task 3. The functionality itself is correct.  |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** The required pointer implementation is present in **Task 2**. `Student *ptr = new Student` dynamically allocates a structure, the members are assigned through `->`, `displayStudentInfo()` is called through the pointer, and the memory is correctly released using `delete`. The functionality satisfies the pointer requirement despite being submitted under Task 2 instead of Task 3. |
| **Input, Output & Execution**              |       3       |        **3**       | **Excellent.** All three programs compiled successfully with `g++ -std=c++17`. Task 1 and Task 2 executed correctly. Task 3 was tested with two students and correctly accepted and displayed both records. Task 3 generated an ISO C++ warning because `Student students[n]` is a variable-length array, but GCC accepted it and the program executed correctly.                                          |

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

**Dear Areeba,** your Lab 1 submission demonstrates an **excellent understanding of structures, arrays of structures, and structure pointers**. All required concepts are implemented and the programs execute successfully.

The only organizational issue is that **Task 2 and Task 3 are swapped**. The assignment specifies the array-of-structures solution as Task 2 and the pointer-to-structure solution as Task 3, whereas your submission contains the pointer solution in Task 2 and the array solution in Task 3. Since both required implementations are present and function correctly, this does not affect the core conceptual score.

I compiled all three programs using **C++17 with warnings enabled** and executed them. Task 1 and Task 2 ran successfully, and Task 3 was tested with two student records and displayed both records correctly.

One technical improvement is recommended: `Student students[n]` in Task 3 is a **variable-length array**, which is not part of standard C++. GCC accepts it as an extension, but standard C++ alternatives such as `vector<Student>` or dynamic allocation would be preferable.

**Overall performance: Excellent — 12/12.**

<br>

---
---

<br>

# Lab 2 Evaluation Report (All Tasks)
**Student Roll Number:** 2025-SE-13  
**Student Name:** Areeba Taqdees Mir

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **2** | **Good.** 3 out of 5 required tasks (`Voter`, `Temperature`, `Calculator`) are implemented inside `WEEK 2` (both as separate header/source files and single-file programs). Tasks 1 (`Student`) and 2 (`Rectangle`) were omitted. |
| **Member Variables** | 3 | **2** | **Good.** Attributes across the 3 attempted classes are declared with proper C++ types and encapsulation (`public` / `private` members). |
| **Member Functions (Inside/Outside)** | 3 | **2** | **Good.** Scoping rules are followed (inline and outline using `::`). Voter check uses `age > 18`. Calculator includes division-by-zero check (`if(num2 != 0)`). Temperature conversion uses integer division `9/5`. |
| **Input/Output & Execution** | 3 | **2** | **Good.** Standalone files (`WEEK 2 Task 4.cpp`, `Task 5.cpp`, `Task 6.cpp`) and `Task 1` folder compile cleanly under `g++`. Subfolders `Task 2` and `Task 3` failed compilation due to header file name mismatches (`temp.h` vs `"Temperature.h"`, `voting.h` vs `"Voter.h"`). |

---

### **Summary of Results**
* **Core Score:** **8 / 12**
* **Plagiarism Penalty:** **0 Marks** (No full assignment copy detected)
* **Final Marks Obtained:** **8 / 12** (66.7%)
* **Grade Status:** **Passed with feedback**

---

### **Overall Teacher Remarks**
Dear Areeba,

Upon re-evaluating your `WEEK 2` submission, you implemented 3 tasks (`Voter`, `Temperature`, and `Calculator`). Since your overall repository structure and code are distinct and independent (only 1 single file matched), no plagiarism penalty has been applied to your score.

Key feedback:
1. **Missing Tasks:** Tasks 1 (`Student`) and 2 (`Rectangle`) were not submitted.
2. **File Naming Mismatch:** In `Task 2` and `Task 3` subfolders, `main.cpp` tries to include `"Temperature.h"` and `"Voter.h"`, but the headers are named `temp.h` and `voting.h`, causing compiler include errors.
3. **Temperature Formula:** Use `9.0 / 5.0` to avoid integer division truncation.

Your final mark for Lab 2 is **8/12**.

<br>

---
---

<br>

# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-13  
**Student Name:** Areeba Taqdees Mir
**Task Folder Location:** `WEEK 3\Week3 Task1.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** Correct class structure with object creation in `Week3 Task1.cpp`. |
| **Member Variables** | 3 | **3** | **Excellent.** Relevant attributes (`name`, `price`, `quantity`) defined clearly with proper data types. |
| **Member Functions (Inside/Outside)** | 3 | **3** | **Excellent.** Functions defined and used correctly as per instruction. |
| **Use of Access Specifiers** | 3 | **3** | **Excellent.** All data members are private and accessed via public methods. |
| **Use of Getters/Setters** | 3 | **3** | **Excellent.** Proper getters/setters used with validation (`n != ""`, `p > 0`, `q >= 0`) and clear naming. |
| **Input/Output & Execution** | 3 | **3** | **Excellent.** Takes input and displays output correctly and clearly. Compiles 100% cleanly with `g++`. |

---

### 📈 **Summary of Results**
* **Total Marks:** **18 / 18 (100%)**
* **Grade Status:** **Excellent (Full Marks)**

### 💬 **Overall Teacher Remarks**
Dear Areeba, Excellent work! Your class design, validation logic, and test driver meet all rubric criteria. Great job!

<br>

---
---

<br>

# Lab 4 Evaluation Report (Constructors & Destructors)
**Student Roll Number:** 2025-SE-13  
**Student Name:** Areeba Taqdees Mir
**Task Folder Location:** `WEEK 4\WEEK 4 TASK 1.cpp` to `WEEK 4 TASK 4.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor Implementation** | 3 | **3** | **Excellent.** Task 1 default constructor initializes `id=0`, `name="Not Assigned"`, `salary=0.0`. Task 2 parameterized constructor initializes all banking attributes cleanly. |
| **Constructor Overloading** | 3 | **3** | **Excellent.** Task 3 `Rectangle` class overloads default (1.0), 2-parameter (`length`, `width`), and 1-parameter (square) constructors with `area()` method. |
| **Destructor & Object Management** | 3 | **3** | **Excellent.** Task 4 `Locker` class destructor correctly prints deallocation message. Demonstrates both scoped stack allocation `{}` and dynamic heap allocation via `new`/`delete`. |
| **Output & Execution** | 3 | **3** | **Excellent.** All 4 C++ files compile 100% cleanly with `g++` and execute with clear output formatting. |

---

### 📈 **Summary of Results**
* **Total Marks:** **12 / 12 (100%)**
* **Grade Status:** **Passed (Full Marks)**

### 💬 **Overall Teacher Remarks**
Dear Areeba Taqdees, Outstanding submission for Lab 4! All four tasks are structured clearly, well-commented, and function properly. Keep up the excellent work!

<br>

---
---

<br>

# Lab 5 Evaluation Report (Inheritance)

**Student Roll Number:** 2025-SE-13
**Student Name:** Areeba Taqdees Mir
**Task Folder Location:** `WEEK 5\`

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
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **12 / 12 (100.0%)**
* **Grade Status:** **Passed**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> No similarity matches found.

---

### 💬 **Overall Teacher Remarks**

**Dear Areeba,** your Lab 5 submission structurally demonstrates an excellent understanding of single, multilevel, hierarchical, and multiple inheritance in C++. 
Keep up the excellent work!

<br>

---
---

<br>

# Lab 6 Evaluation Report (Constructor Chaining & Destructors)

**Student Roll Number:** 2025-SE-13
**Student Name:** Areeba Taqdees Mir
**Task Folder Location:** `WEEK 6\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor & Inheritance Implementation** | 3 | **3** | Excellent. Constructor chaining and multilevel constructor prints demonstrating call order are correct. |
| **Destructor & Memory Management** | 3 | **3** | Excellent. Clean destructor implementations freeing dynamic memory. |
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
> All 4 task files are 100% identical copy-matches (excluding spacing/comments) with student `2025-SE-22` (Noor Ul Ain Abbasi).

---

### 💬 **Overall Teacher Remarks**

**Dear Areeba,** your Lab 6 submission demonstrates your understanding of constructor chaining and destructors in C++.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 7 Evaluation Report (Composition & Aggregation)

**Student Roll Number:** 2025-SE-13
**Student Name:** Areeba Taqdees Mir
**Task Folder Location:** `WEEK 7\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Composition & Object Ownership** | 3 | **3** | Excellent. Composition logic in Task 2 is properly implemented with Calculator owning Display. |
| **Aggregation & Shared Object Usage** | 3 | **2** | Good. Deducted 1 mark under Aggregation because Task 1 fails to call the member pointer correctly (`calc` used instead of `calculator`). |
| **Classes, Functions & Data Management** | 3 | **2** | Good. Deducted 1 mark for using lowercase class names (`calculator`, `student`, `display`) and undeclared identifier `calc`. |
| **Object Creation, Output & Execution** | 3 | **1** | Needs Improvement. Deducted 2 marks because Task 1 fails compilation due to error `error: use of undeclared identifier 'calc'`. |

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

**Dear Areeba,** your Lab 7 submission demonstrates your understanding of composition (strong ownership) and aggregation (shared references) in C++.

<br>

---
---

<br>

# Lab 8 Evaluation Report (Polymorphism & Virtual Functions)

**Student Roll Number:** 2025-SE-13
**Student Name:** Areeba Taqdees Mir
**Task Folder Location:** `WEEK 8\`

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

**Dear Areeba,** your Lab 8 submission demonstrates your understanding of runtime polymorphism and virtual functions in C++.

<br>

---
---

<br>

# Lab 9 Evaluation Report (Operator Overloading ==)

**Student Roll Number:** 2025-SE-13
**Student Name:** Areeba Taqdees Mir
**Task Folder Location:** `WEEK 9\`

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
> Source code file shares an identical template structure (including the checkEqual helper method calling *this == d and identical main flow) with students `2024-SE-18`, `2024-SE-27`, `2024-SE-33`, `2025-SE-10`, and `2025-SE-31`.

---

### 💬 **Overall Teacher Remarks**

**Dear Areeba,** your Lab 9 submission demonstrates your understanding of C++ operator overloading and member function comparison.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 10 Evaluation Report (File Handling in C++)

**Student Roll Number:** 2025-SE-13
**Student Name:** Areeba Taqdees Mir
**Task Folder Location:** `WEEK 10\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **File Creation & Writing** | 3 | **3** | Excellent. Proper creation and writing of text and student records. |
| **File Reading & Content Display** | 3 | **3** | Excellent. Clean reading loops using ifstream and getline. |
| **Line Counting & File Appending/Copying** | 3 | **3** | Excellent. Line counting, append mode, and file copying all correctly implemented. |
| **File Handling, Execution & Output** | 3 | **3** | Excellent. Flawless compilation and clean output across all 4 tasks. |

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

**Dear Areeba,** your Lab 10 submission demonstrates your understanding of C++ file stream handling, reading, writing, and resource management.

<br>

---
---

<br>

# Lab 11 Evaluation Report (Friend Functions & Static Members)

**Student Roll Number:** 2025-SE-13
**Student Name:** Areeba Taqdees Mir
**Task Folder Location:** `WEEK 11\ & Week 12\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Friend Function Implementation** | 3 | **3** | Excellent. Friend functions implemented properly with friend keyword and private member access for Box and Distance. |
| **Static Data Member Implementation** | 3 | **3** | Excellent. BankAccount static variable totalAccounts properly defined, incremented in constructor, and displayed via static showTotalAccounts(). |
| **Static Member Function & Shared Data** | 3 | **3** | Excellent. Employee static companyName and static displayCompanyInfo() properly accessed via class name. |
| **Object Creation, Output & Execution** | 3 | **3** | Excellent. Clean compilation, modular code, and accurate output across all 4 tasks. |

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

**Dear Areeba,** your Lab 11 submission demonstrates a solid understanding of friend functions and static members in C++.

<br>

---
---

<br>

# Lab 12 Evaluation Report (Pure Virtual Functions & Abstract Classes)

**Student Roll Number:** 2025-SE-13
**Student Name:** Areeba Taqdees Mir
**Task Folder Location:** `Week 12\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Abstract Base Class & Pure Virtual Function** | 3 | **3** | Excellent. HospitalStaff base abstract class properly constructed with pure virtual function and protected staffName. |
| **Derived Classes & Function Overriding** | 3 | **3** | Excellent. Derived classes Doctor, Nurse, and Receptionist properly call base constructor and override performDuty(). |
| **Object Creation & Polymorphic Call** | 3 | **3** | Excellent. Object instantiation and method execution demonstrated in main(). |
| **Execution, Output & Clean Compilation** | 3 | **3** | Excellent. Standalone file compiling cleanly with zero warnings/errors. |

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

**Dear Areeba,** your Lab 12 submission demonstrates an excellent understanding of abstract classes and pure virtual functions in C++.

<br>

---
---

<br>

# Lab 13 Evaluation Report (C++ Templates)

**Student Roll Number:** 2025-SE-13
**Student Name:** Areeba Taqdees Mir
**Task Folder Location:** `WEEK 13\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Function Templates (`printTwice` & `findMin`)** | 3 | **3** | Excellent. Proper function templates with template <typename T>, correct return types, and comparison logic. |
| **Required Type Testing & Results** | 3 | **3** | Excellent. All required types are tested and printed cleanly. |
| **Class Templates (`Pair<T>` & `Calculator<T>`)** | 3 | **3** | Excellent. Pair<T> with member initializer list and Calculator<T> class template implemented accurately. |
| **Object Creation, `main()` Usage & Execution** | 3 | **3** | Excellent. Clean compilation with zero errors and flawless execution across all 4 tasks. |

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

**Dear Areeba,** your Lab 13 submission demonstrates your understanding of generic programming, function templates, and class templates in C++.

<br>

---
---

<br>

# Lab 14 Evaluation Report (In-Class Lab: Vehicle Rental System)

**Student Roll Number:** 2025-SE-13  
**Student Name:** Areeba Taqdees Mir  
**Task Folder Location:** `Vehicle Rental System\`  

---

### 📊 **Evaluation Rubric & Score Sheet (Max 48 Marks)**

| **Criterion** | **Weight** | **Raw Score (1–4)** | **Weighted Marks** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :---: | :--- |
| **OOP Design** | x 4 | **4** / 4 | **16 / 16** | **Excellent.** Abstract base class `Vehicle` with pure virtual methods (`virtual double calculateCost(int days) = 0;`, `virtual void display() const = 0;`) and virtual destructor. `Car`, `Motorbike`, and `Truck` properly inherit and implement type-specific pricing modifiers (+20% surcharge on Trucks, -10% discount on Motorbikes > 7 days). Runtime polymorphism in `Rental::createRental` dynamically executes the correct cost calculation on base pointers. |
| **Design Justification** | x 3 | **4** / 4 | **12 / 12** | **Excellent.** Comprehensive `DesignNote.txt` answering all design questions with strong reasoning: articulates is-a hierarchy vs type field, central ownership in `RentalSystem`, why a separate `Fleet` class was unnecessary, and the exact polymorphic dispatch point. |
| **Encapsulation & Responsibility** | x 2 | **4** / 4 | **8 / 8** | **Excellent.** Strict encapsulation with private data members across all classes (`Vehicle`, `Customer`, `Rental`, `RentalSystem`) with proper accessors/mutators and dynamic array bounds management. |
| **Working Demo** | x 2 | **4** / 4 | **8 / 8** | **Excellent.** Compiles cleanly with zero errors under C++17. Features both a full interactive menu and a dedicated demo scenario (Option 9) covering vehicle creation, customer registration, 2 rentals, vehicle return, and complete summary reports. |
| **Code Quality** | x 1 | **4** / 4 | **4 / 4** | **Excellent.** Professional modular architecture with header/source split across all 7 classes, include guards, const-correctness, and clean formatting. |

---

### 📈 **Summary of Results**

* **Core Weighted Total:** **48 / 48 (100.0%)**
* **Plagiarism Penalty:** **-8 Marks** (100% identical match with student `2025-SE-15` - Samia Arshad across all 15 source files and `DesignNote.txt`)
* **Final Marks:** **40 / 48 (83.3%)**
* **Grade Status:** **Passed (Good)**

---

### ⚠️ **Plagiarism Audit Detail**

> **Plagiarism Penalty of -8 Marks Applied.**
> 100% exact raw byte-for-byte match detected between `2025-SE-13` and `2025-SE-15` across all 15 C++ source/header files and `DesignNote.txt`. Symmetrical penalty of -8 marks applied as per strict Lab 14 policy.

---

### 💬 **Overall Teacher Remarks**

**Dear Areeba,** your core system design and implementation of the Vehicle Rental System are technically excellent. However, due to submitting identical files with your peer, a plagiarism penalty of -8 marks has been applied.
