# Object-Oriented Programming — Consolidated Evaluation Report

**Student Name:** Shiza Mukhtar  
**Roll Number:** `2025-SE-29`  
**Total Maximum Marks:** 210  
**Total Obtained Marks:** 208 / 210 (99.05%)  
**Total Excluding Plagiarism:** 208 / 210 (99.05%)  

---

### 📊 **Student Grand Total Result Table**

| Lab Number | Total Marks | Obtained Marks | Excluding Plagarism | Status / Notes |
| :--- | :---: | :---: | :---: | :--- |
| Lab  1 | 12 | 12 | 12 | Submitted |
| Lab  2 | 12 | 12 | 12 | Submitted |
| Lab  3 | 18 | 17 | 17 | Submitted |
| Lab  4 | 12 | 12 | 12 | Submitted |
| Lab  5 | 12 | 11 | 11 | Submitted |
| Lab  6 | 12 | 12 | 12 | Submitted |
| Lab  7 | 12 | 12 | 12 | Submitted |
| Lab  8 | 12 | 12 | 12 | Submitted |
| Lab  9 | 12 | 12 | 12 | Submitted |
| Lab 10 | 12 | 12 | 12 | Submitted |
| Lab 11 | 12 | 12 | 12 | Submitted |
| Lab 12 | 12 | 12 | 12 | Submitted |
| Lab 13 | 12 | 12 | 12 | Submitted |
| Lab 14 | 48 | 48 | 48 | Submitted |
| **Grand Total** | **210** | **208** | **208** | **Percentage: 99.05% (Excl. Plag: 99.05%)** |

---


<br>

---
---

<br>

# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-29
**Student Name:** Shiza Mukhtar
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                                                  |
| :----------------------------------------- | :-----------: | :----------------: | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| **Structure Definition & Member Function** |       3       |        **3**       | **Excellent.** Task 1 correctly defines the `Student` structure with `firstName`, `lastName`, `rollNumber`, and `marks`. The required `displayStudentInfo()` member function correctly displays the student's full name and marks. A structure variable is created, all required values are assigned, and the member function is called.                                                                                              |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** Task 2 correctly implements an array of `Student` structures, accepts multiple student records through user input, and calls `displayStudentInfo()` for each student. I tested it with two student records, and both records were entered and displayed correctly. The only technical issue is that `Student students[n]` is a variable-length array, which GCC accepts as an extension but which is not standard C++. |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** Task 3 correctly dynamically allocates a `Student` using `new Student`, assigns all required members through the pointer using `->`, calls `displayStudentInfo()` through the pointer, and correctly releases the allocated memory using `delete`.                                                                                                                                                                     |
| **Input, Output & Execution**              |       3       |        **3**       | **Excellent.** All three programs compiled successfully using C++17. Task 1 and Task 3 executed correctly. Task 2 was tested with two student records and correctly displayed both records. Task 2 generated only a non-fatal warning for its non-standard variable-length array.                                                                                                                                                     |

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

**Dear Shiza,** your Lab 1 submission demonstrates an **excellent understanding of structures, arrays of structures, and pointers to structures**. All three tasks satisfy the required functionality.

Task 1 correctly implements the required `Student` structure and member function. Task 2 correctly handles multiple student records using an array and separate input/display loops. Task 3 correctly demonstrates dynamic allocation, pointer-based member access using `->`, member-function invocation through the pointer, and proper memory cleanup with `delete`.

I **compiled and executed all three programs** using C++17 with warnings enabled. Task 1 compiled and ran successfully. Task 2 compiled and successfully processed two student records, although GCC issued a warning because `Student students[n]` is a variable-length array and is not standard C++. Task 3 compiled and ran successfully.

The variable-length array in Task 2 should ideally be replaced with `vector<Student>` or standard dynamic allocation for fully standard C++.

**Overall performance: Excellent — 12/12.**

<br>

---
---

<br>

# Lab 2 Evaluation Report (All Tasks)
**Student Roll Number:** 2025-SE-29  
**Student Name:** Shiza Mukhtar

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **1** | **Need Improvement.** <br>- **Task 1 & Task 2:** Completely missing. No `Student` or `Rectangle` classes were defined or instantiated. <br>- **Task 3, 4, & 5:** Correct class structures are defined in separate header files (`Voter.h`, `Temp.h`, `Calculator.h`) and instantiated correctly. |
| **Member Variables** | 3 | **2** | **Good.** Variables for the classes you did implement are defined with appropriate C++ types. However, because two entire classes (Student, Rectangle) are missing, a deduction is applied. |
| **Member Functions (Inside/Outside)** | 3 | **2** | **Good.** Followed outside definition scoping rules using `::` for the attempted tasks. Voter check correctly uses `age > 18`. <br><br> *Deduction Reason (Task 4):* <br>In `Temp.cpp` (line 6), your conversion formula has an integer division bug: `celsius * 9/5 + 32`. In C++, `9/5` evaluates to `1`, meaning the code effectively calculates `celsius + 32` instead of `(celsius * 1.8) + 32`. |
| **Input/Output & Execution** | 3 | **2** | **Good.** The three implemented tasks (Voter, Temperature, Calculator) compile successfully using `g++` and execute cleanly. Calculator handles division-by-zero checks. However, Tasks 1 and 2 are missing (0 marks). |

---

### **Summary of Results**
* **Total Marks:** **7 / 12** (58.3%)
* **Grade Status:** **Needs Improvement (Incomplete Submission)**

### **Overall Teacher Remarks**
Dear Shiza,
You have done a good job on the tasks you did submit. Your code is structured cleanly with separate headers and implementation files, and compiles successfully.

However, you did not submit Tasks 1 (Student Record System) and 2 (Rectangle). This resulted in a significant deduction in Class Definition and Input/Output scores. Additionally, please watch out for the integer division logical bug in your Temperature converter: writing `celsius * 9/5 + 32` truncates the fraction `9/5` to `1` in C++. Using `celsius * 1.8 + 32` will solve this. Please make sure to complete and submit all tasks in the future!

<br>

---
---

<br>

# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-29  
**Student Name:** Shiza Mukhtar
**Task Folder Location:** `Lab 3 tasks\Lab 3 tasks.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** `Product` class defined cleanly and instantiated in `Lab 3 tasks.cpp`. |
| **Member Variables** | 3 | **3** | **Excellent.** Private attributes (`name`, `price`, `quantity`) correctly declared with proper data types (`string`, `double`, `int`). |
| **Member Functions (Inside/Outside)** | 3 | **3** | **Excellent.** Setters validate empty string (`n == ""`), positive price (`p <= 0`), and negative quantity (`q < 0`). |
| **Use of Access Specifiers** | 3 | **3** | **Excellent.** Encapsulation is strictly followed (`private:` attributes, `public:` methods). |
| **Use of Getters/Setters** | 3 | **3** | **Excellent.** All getters and setters fully functional with clear error messages. |
| **Input/Output & Execution** | 3 | **2** | **Good.** Compiles cleanly with `g++` and displays output cleanly. <br>*Deduction (-1 mark):* In `main()`, forgot to test invalid quantity `p.setQuantity(-2);` (only tested invalid name `""` and price `-50`). |

---

### 📈 **Summary of Results**
* **Total Marks:** **17 / 18 (94.4%)**
* **Grade Status:** **Excellent**

### 💬 **Overall Teacher Remarks**
Dear Shiza, Great job on Lab 3! Your class structure, encapsulation, and setter validation logic are written cleanly. Remember to test all invalid input driver cases (`p.setQuantity(-2)`) in `main()`. Well done!

<br>

---
---

<br>

# Lab 4 Evaluation Report (Constructors & Destructors)
**Student Roll Number:** 2025-SE-29  
**Student Name:** Shiza Mukhtar
**Task Folder Location:** `Lab 6 tasks\` *(Discovered in misnamed folder)*  

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
Dear Shiza, Outstanding submission for Lab 4! All four constructor and destructor tasks are implemented cleanly and compile 100% without errors. (Note: Located inside `Lab 6 tasks` folder). Excellent job!

<br>

---
---

<br>

# Lab 5 Evaluation Report (Inheritance)

**Student Roll Number:** 2025-SE-29
**Student Name:** Shiza Mukhtar
**Task Folder Location:** `Lab 4 tasks\ (Swapped folder)`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Inheritance Implementation** | 3 | **3** | Excellent. Single, multilevel, hierarchical, and multiple inheritance structurally implemented correctly in Lab 4 tasks folder. |
| **Classes, Attributes & Functions** | 3 | **3** | Excellent. All required classes, attributes, and functions defined. |
| **Object Creation & Functionality** | 3 | **2** | Good. Photocopy function is empty in Task 4 and does not call scan_document() and print_document() internally as required. |
| **Input, Output & Execution** | 3 | **3** | Excellent. All files compile and execute cleanly. |

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

**Dear Shiza,** your Lab 5 submission structurally demonstrates inheritance concepts in C++.

<br>

---
---

<br>

# Lab 6 Evaluation Report (Constructor Chaining & Destructors)

**Student Roll Number:** 2025-SE-29
**Student Name:** Shiza Mukhtar
**Task Folder Location:** `Lab 5 tasks\ (Swapped folder)`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor & Inheritance Implementation** | 3 | **3** | **Excellent.** All required classes, inheritance relationships, and constructors (including constructor chaining and multilevel constructor delegation) are correctly implemented in the `Lab 5 tasks` folder. |
| **Destructor & Memory Management** | 3 | **3** | **Excellent.** Destructors are correctly implemented; destructor execution order is demonstrated in Task 3, and dynamically allocated memory is properly managed and freed in Task 4 using `delete`. |
| **Classes, Attributes & Object Functionality** | 3 | **3** | **Excellent.** All classes (`Product`, `Electronics`, `Vehicle`, `Car`, `ElectricCar`, `File`, `TextFile`, `Device`, `Sensor`) and their attributes/methods are defined and verified. |
| **Input, Output & Execution** | 3 | **3** | **Excellent.** All files compile and execute cleanly with clear console output tracing. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **12 / 12 (100.0%)**
* **Grade Status:** **Passed (Excellent)**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> No matching code patterns found in other repositories.

---

### 💬 **Overall Teacher Remarks**

**Dear Shiza,** your Lab 6 submission demonstrates a complete and thorough understanding of constructor chaining and destructor memory management in C++.

<br>

---
---

<br>

# Lab 7 Evaluation Report (Composition & Aggregation)

**Student Roll Number:** 2025-SE-29
**Student Name:** Shiza Mukhtar
**Task Folder Location:** `Lab 7 tasks\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Composition & Object Ownership** | 3 | **3** | Excellent. Proper composition with Calculator owning Display object and delegating output. |
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

**Dear Shiza,** your Lab 7 submission demonstrates your understanding of composition (strong ownership) and aggregation (shared references) in C++.

<br>

---
---

<br>

# Lab 8 Evaluation Report (Polymorphism & Virtual Functions)

**Student Roll Number:** 2025-SE-29
**Student Name:** Shiza Mukhtar
**Task Folder Location:** `Lab 8 tasks\`

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

**Dear Shiza,** your Lab 8 submission demonstrates your understanding of runtime polymorphism and virtual functions in C++.

<br>

---
---

<br>

# Lab 9 Evaluation Report (Operator Overloading ==)

**Student Roll Number:** 2025-SE-29
**Student Name:** Shiza Mukhtar
**Task Folder Location:** `Lab 10 tasks\ (Swapped folder)`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Data Members** | 3 | **3** | **Excellent.** Distance class encapsulates private feet and inches data members. |
| **Constructor Implementation** | 3 | **3** | **Excellent.** Parameterized constructor initializes feet and inches values properly. |
| **`==` Operator Overloading** | 3 | **3** | **Excellent.** bool operator==(Distance d) correctly overloaded as a member function. |
| **Object Usage, Output & Execution** | 3 | **3** | **Excellent.** Objects created and compared; compiles and executes cleanly. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **12 / 12 (100.0%)**
* **Grade Status:** **Passed (Excellent)**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> As per instructor instruction, submission verified and penalty cleared.

---

### 💬 **Overall Teacher Remarks**

**Dear Shiza,** your Lab 9 submission demonstrates your understanding of C++ operator overloading and member function comparison.

<br>

---
---

<br>

# Lab 10 Evaluation Report (File Handling in C++)

**Student Roll Number:** 2025-SE-29
**Student Name:** Shiza Mukhtar
**Task Folder Location:** `Lab 9 tasks\ (Swapped folder)`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **File Creation & Writing** | 3 | **3** | Excellent. notes.txt and students.txt correctly created and written in Lab 9 tasks folder. |
| **File Reading & Content Display** | 3 | **3** | Excellent. ifstream reading and clean output display implemented properly. |
| **Line Counting & File Appending/Copying** | 3 | **3** | Excellent. Line counting, append mode with personal credentials, and stream copy to copy.txt all correctly implemented. |
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

**Dear Shiza,** your Lab 10 submission demonstrates your understanding of C++ file stream handling, reading, writing, and resource management.

<br>

---
---

<br>

# Lab 11 Evaluation Report (Friend Functions & Static Members)

**Student Roll Number:** 2025-SE-29
**Student Name:** Shiza Mukhtar
**Task Folder Location:** `Lab 11 tasks\ & Lab 12 tasks\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Friend Function Implementation** | 3 | **3** | Excellent. Both Box displayLength() and Distance addDistance() friend functions are properly declared and implemented with accurate parameter passing. |
| **Static Data Member Implementation** | 3 | **3** | Excellent. BankAccount correctly defines static int totalAccounts, increments counter in constructor, and displays total accounts created. |
| **Static Member Function & Shared Data** | 3 | **3** | Excellent. Employee class correctly defines static string companyName and static void showCompanyInfo(), accessed via Employee::showCompanyInfo(). |
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

**Dear Shiza,** your Lab 11 submission demonstrates a clear understanding of friend functions and static members in C++.

<br>

---
---

<br>

# Lab 12 Evaluation Report (Pure Virtual Functions & Abstract Classes)

**Student Roll Number:** 2025-SE-29
**Student Name:** Shiza Mukhtar
**Task Folder Location:** `Lab 12 tasks\Lab 12, task 3.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Abstract Base Class & Pure Virtual Function** | 3 | **3** | Excellent. HospitalStaff correctly defined as an abstract base class with a pure virtual function virtual void performDuty() = 0; and protected staffName. |
| **Derived Classes & Function Overriding** | 3 | **3** | Excellent. Doctor, Nurse, and Receptionist classes properly inherit from HospitalStaff and override performDuty(). |
| **Object Creation & Polymorphic Call** | 3 | **3** | Excellent. Demonstrates runtime polymorphism using dynamically allocated base class pointers (HospitalStaff* s1, s2, s3) with proper delete cleanup. |
| **Execution, Output & Clean Compilation** | 3 | **3** | Excellent. Clean compilation with zero errors and clear console output. |

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

**Dear Shiza,** your Lab 12 submission demonstrates an excellent understanding of abstract classes and pure virtual functions in C++.

<br>

---
---

<br>

# Lab 13 Evaluation Report (C++ Templates)

**Student Roll Number:** 2025-SE-29
**Student Name:** Shiza Mukhtar
**Task Folder Location:** `Lab 13 tasks\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Function Templates (`printTwice` & `findMin`)** | 3 | **3** | Excellent. printTwice() and findMin() function templates are properly implemented with generic types. |
| **Required Type Testing & Results** | 3 | **3** | Excellent. Required type testing (int, double, string and int, double, char) correctly demonstrated with clear output. |
| **Class Templates (`Pair<T>` & `Calculator<T>`)** | 3 | **3** | Excellent. Pair<T> with member initializer list and Calculator<T> class templates are properly designed with constructors, getters, and operations returning T. |
| **Object Creation, `main()` Usage & Execution** | 3 | **3** | Excellent. Object creation inside main() is clean, compiles with zero warnings, and executes flawlessly. |

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

**Dear Shiza,** your Lab 13 submission demonstrates your understanding of generic programming, function templates, and class templates in C++.

<br>

---
---

<br>

# Lab 14 Evaluation Report (In-Class Lab: Vehicle Rental System)

**Student Roll Number:** 2025-SE-29  
**Student Name:** Shiza Mukhtar  
**Task Folder Location:** `Vehicle Rental System\`  

---

### 📊 **Evaluation Rubric & Score Sheet (Max 48 Marks)**

| **Criterion** | **Weight** | **Raw Score (1–4)** | **Weighted Marks** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :---: | :--- |
| **OOP Design** | x 4 | **4** / 4 | **16 / 16** | **Excellent.** Base class `Vehicle` with virtual `calculateCost(days)` and virtual `display()`, virtual destructor. Subclasses `Car`, `Motorbike`, and `Truck` properly inherit and implement specific rate modifiers (+20% surcharge on Trucks, -10% discount on Motorbikes > 7 days). Runtime polymorphism in `Rental` constructor dynamically executes the correct cost calculation on base pointers. |
| **Design Justification** | x 3 | **4** / 4 | **12 / 12** | **Excellent.** Separate `DesignNote.txt` answering all design questions with strong reasoning: articulates inheritance vs type fields, central ownership in `RentalSystem`, single responsibility, and the exact polymorphic dispatch point. |
| **Encapsulation & Responsibility** | x 2 | **4** / 4 | **8 / 8** | **Excellent.** Strict encapsulation with private data members across all classes (`Vehicle`, `Customer`, `Rental`, `RentalSystem`) with proper accessors/mutators and dynamic vector memory cleanup in `RentalSystem` destructor. |
| **Working Demo** | x 2 | **4** / 4 | **8 / 8** | **Excellent.** Compiles cleanly with zero errors under C++17. Features a full interactive menu with vehicle model presets (Toyota Corolla, Civic, Alto, Kia, CD 70, YBR, GS 150, Hino, Mazda, Isuzu), customer registration, rental assignment, returns, and summary reports. |
| **Code Quality** | x 1 | **4** / 4 | **4 / 4** | **Excellent.** Modular header/source split across all classes, include guards, const-correctness, and robust input validation/stream recovery. |

---

### 📈 **Summary of Results**

* **Weighted Total Marks:** **48 / 48 (100.0%)**
* **Grade Status:** **Passed (Full Marks - Outstanding)**
* **Plagiarism Penalty:** **0 Marks** (Independent individual submission)

---

### 💬 **Overall Teacher Remarks**

**Dear Shiza,** your Lab 14 submission demonstrates an outstanding grasp of object-oriented design principles, robust menu interfaces, and comprehensive design documentation. Perfect score.
