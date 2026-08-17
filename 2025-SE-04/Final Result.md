# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-04
**Student Name:** Wajeeha Batool
**Task Folder Location:** `Lab (Structures)\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Structure Definition & Member Function** | 3 | **3** | **Excellent.** The `Student` structure correctly contains data members and the display function prints the student's name and marks. Task 1 correctly creates a structure variable and assigns/displays values. *Note:* Make sure `displayStudentInfo` has return type `void` instead of `student` as it does not return a value. |
| **Array of Structures** | 3 | **3** | **Excellent.** Task 2 correctly implements an array of structure variables, accepts user inputs for multiple students, and displays them cleanly. *Note:* Remember to include the `roll_no` attribute in the array definition to fully satisfy the rubric. |
| **Structure Pointer & Dynamic Access** | 3 | **2** | **Good.** Task 3 correctly uses a structure pointer (`student *sPtr = s`) with pointer arithmetic and member selection using `->`. *Deduction (-1 mark):* Used a pointer pointing to stack-allocated memory rather than dynamically allocated memory (`new` / `delete`). |
| **Input, Output & Execution** | 3 | **3** | **Excellent.** All programs compile successfully and output student names and marks clearly when run. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **11 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **11 / 12 (91.67%)**
* **Grade Status:** **Excellent**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> Lab 1 evaluation is lenient on similarity matches.

---

### 💬 **Overall Teacher Remarks**

**Dear Wajeeha,** your Lab 1 submission demonstrates a **very good understanding of structures, structure arrays, and structure pointers**. 

To improve further, ensure that:
1. Functions that only print values have return type `void` to prevent compile-time return-type warnings.
2. Dynamic memory allocation (`new` and `delete`) is used when working with pointer-based tasks as requested in the dynamic access rubric.

**Overall performance: Excellent — 11/12.**

<br>

---
---

<br>

# Lab 2 Evaluation Report (All Tasks)
**Student Roll Number:** 2025-SE-04  
**Student Name:** Wajeeha Batool

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** Correct class structure across all tasks. Header files (e.g., `header1.h`, `header2.h`, etc.) are properly structured with header guards. Object creation is done correctly in all main source files. |
| **Member Variables** | 3 | **2** | **Good.** Attributes are defined with appropriate types, but there are two design flaws: <br>1. **Task 4 (Temperature):** Member variables are declared as `int`, causing truncation of decimal values during conversion. They should be `float` or `double`. <br>2. **Task 5 (Calculator):** The attributes `num1` and `num2` inside the `Calculator` class are completely unused. Member functions take parameters `(float a, float b)` instead of operating on the class attributes. |
| **Member Functions (Inside/Outside)** | 3 | **2** | **Good.** The student followed instructions regarding inside/outside class definitions. <br><br> *Deduction Reasons:* <br>1. **Task 2 (Rectangle):** Functions `area()` and `perimeter()` are declared with return type `int` but do not return any value (they just print to console). This generates compiler warnings: <br>`warning: no return statement in function returning non-void [-Wreturn-type]`. <br>2. **Task 3 (Voter):** Used `age >= 18` instead of `age > 18` as strictly instructed. <br>3. **Task 5 (Calculator):** Division function lacks a validation check for division by zero. |
| **Input/Output & Execution** | 3 | **3** | **Excellent.** All 5 tasks compile and execute successfully. Console interaction is clear and prompts the user properly. |

---

### **Summary of Results**
* **Total Marks:** **10 / 12** (83.3%)
* **Grade Status:** **Passed with feedback**

### **Overall Teacher Remarks**
Dear Wajeeha,
You have done a very good job in organizing your folders and files. All 5 programs compile successfully, and your file separation into custom headers is cleanly done.

To improve your programming practices, keep the following in mind:
1. When a function is declared to return a type (like `int`), you must use a `return` statement; otherwise, it triggers compiler warnings and undefined behavior.
2. In object-oriented design, class attributes should store the object's state, and functions should operate on these attributes rather than taking them as arguments (as in your Calculator class).
3. Always remember to handle potential runtime errors like division by zero. Keep up the good work!

<br>

---
---

<br>

# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-04  
**Student Name:** Wajeeha Batool
**Task Folder Location:** `Lab 03\header.h & 1.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** Class declaration separated into `header.h` and driver into `1.cpp` with preprocessor guards (`#ifndef PRODUCT_H`). |
| **Member Variables** | 3 | **2** | **Good.** Attributes defined under `private:` access specifier. <br>*Deduction (-1 mark):* Used `float price` instead of `double price` specified in rubric requirements. |
| **Member Functions (Inside/Outside)** | 3 | **3** | **Excellent.** Setters validate empty string (`!n.empty()`), positive price (`p > 0`), and non-negative quantity (`q >= 0`). |
| **Use of Access Specifiers** | 3 | **3** | **Excellent.** Encapsulation is strictly followed (`private:` attributes, `public:` methods). |
| **Use of Getters/Setters** | 3 | **3** | **Excellent.** Proper getters and setters implemented with validation messages. |
| **Input/Output & Execution** | 3 | **3** | **Excellent.** Compiles cleanly with `g++` and formats currency output cleanly using `<iomanip>` (`fixed` & `setprecision(2)`). |

---

### 📈 **Summary of Results**
* **Total Marks:** **17 / 18 (94.4%)**
* **Grade Status:** **Excellent**

### 💬 **Overall Teacher Remarks**
Dear Wajeeha, Great submission for Lab 3! Your modular design, input validation in `header.h`, and formatted output using `<iomanip>` in `1.cpp` compile cleanly and run perfectly. Just ensure to use `double` for price attributes as specified in the rubric. Great job!

<br>

---
---

<br>

# Lab 4 Evaluation Report (Constructors & Destructors)
**Student Roll Number:** 2025-SE-04  
**Student Name:** Wajeeha Batool
**Task Folder Location:** `Lab 04 (constructors)\`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor Implementation** | 3 | **2** | **Good.** Default constructor in Task 1 and parameterized constructor in Task 2 are implemented with proper initializations. <br>*Deduction (-1 mark):* Used all-lowercase class names (`employee`, `bankAccount`) instead of standard C++ PascalCase (`Employee`, `BankAccount`). |
| **Constructor Overloading** | 3 | **3** | **Excellent.** Task 3 `Rectangle` class overloads default (1.0), 2-parameter (`length`, `width`), and 1-parameter (square) constructors cleanly. |
| **Destructor & Object Management** | 3 | **3** | **Excellent.** Task 4 `Locker` class destructor correctly prints deallocation message. Demonstrates both scoped stack allocation `{}` and dynamic heap allocation via `new`/`delete`. |
| **Output & Execution** | 3 | **3** | **Excellent.** All 4 C++ files compile 100% cleanly with `g++` and execute with correct output formatting. |

---

### 📈 **Summary of Results**
* **Core Rubric Score:** **11 / 12**
* **Plagiarism Penalty:** **-3 Marks** *(100% identical code match with student `2025-SE-22`)*
* **Final Marks:** **8 / 12 (66.7%)**
* **Grade Status:** **Plagiarism Penalty (-3)**

---

### ⚠️ **Plagiarism Audit Detail**
> [!WARNING]
> Manual inspection detected a **100% character-for-character code match** across all 4 tasks between your `Lab 04 (constructors)` files and student `2025-SE-22` (Noor Ul Ain Abbasi)'s submission files. Per course policy, a flat **-3 marks penalty** has been applied to both submissions.

### 💬 **Overall Teacher Remarks**
Dear Wajeeha, Your core implementation is working, but please write your code independently. Duplicate submissions result in heavy plagiarism penalties. Also, capitalize class names (`Employee`, `BankAccount`) according to standard C++ conventions.

<br>

---
---

<br>

# Lab 5 Evaluation Report (Inheritance)

**Student Roll Number:** 2025-SE-04
**Student Name:** Wajeeha Batool
**Task Folder Location:** `Lab 05 (inheritance)\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Inheritance Implementation** | 3 | **3** | **Excellent.** All four inheritance types—single, multilevel, hierarchical, and multiple—are implemented correctly according to the requirements. |
| **Classes, Attributes & Functions** | 3 | **3** | **Excellent.** All required classes, inherited attributes, additional attributes, and functions are correctly defined and used. |
| **Object Creation & Functionality** | 3 | **3** | **Excellent.** Objects are created correctly and all required display/operation functions are called and work as intended in `main()`. |
| **Input, Output & Execution** | 3 | **3** | **Excellent.** Programs compile successfully without warnings and execute with clear user input and output. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **-3 Marks**
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Passed**

---

### ⚠️ **Plagiarism Audit Detail**

> **Plagiarism Penalty of **-3 marks** applied.**
> All 4 tasks are 100% identical matches with `2025-SE-22` (Noor Ul Ain Abbasi) and `2025-SE-31` (Khawaja Absar Ali).

---

### 💬 **Overall Teacher Remarks**

**Dear Wajeeha,** your Lab 5 submission structurally demonstrates an excellent understanding of single, multilevel, hierarchical, and multiple inheritance in C++. 
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 6 Evaluation Report (Constructor Chaining & Destructors)

**Student Roll Number:** 2025-SE-04
**Student Name:** Wajeeha Batool
**Task Folder Location:** `Lab 06(constructor chaining)\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor & Inheritance Implementation** | 3 | **3** | Excellent. Proper constructor chaining and multilevel constructor prints showing call order. |
| **Destructor & Memory Management** | 3 | **3** | Excellent. Proper destructors including virtual destructor in base class Device. |
| **Classes, Attributes & Object Functionality** | 3 | **3** | Excellent. Objects created and tested cleanly. |
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
> All 4 task files are 100% identical matches (excluding spacing/comments) with student `2025-SE-31` (Khawaja Absar Ali).

---

### 💬 **Overall Teacher Remarks**

**Dear Wajeeha,** your Lab 6 submission demonstrates your understanding of constructor chaining and destructors in C++.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 7 Evaluation Report (Composition & Aggregation)

**Student Roll Number:** 2025-SE-04
**Student Name:** Wajeeha Batool
**Task Folder Location:** `Lab 07\`

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

**Dear Wajeeha,** your Lab 7 submission demonstrates your understanding of composition (strong ownership) and aggregation (shared references) in C++.

<br>

---
---

<br>

# Lab 8 Evaluation Report (Polymorphism & Virtual Functions)

**Student Roll Number:** 2025-SE-04
**Student Name:** Wajeeha Batool
**Task Folder Location:** `Lab 08\`

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

**Dear Wajeeha,** your Lab 8 submission demonstrates your understanding of runtime polymorphism and virtual functions in C++.

<br>

---
---

<br>

# Lab 9 Evaluation Report (Operator Overloading ==)

**Student Roll Number:** 2025-SE-04
**Student Name:** Wajeeha Batool
**Task Folder Location:** `Lab 09(operator overloading)\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Data Members** | 3 | **3** | Excellent. Distance class encapsulates private feet and inches data members. |
| **Constructor Implementation** | 3 | **3** | Excellent. Parameterized constructor correctly initializes dimensions. |
| **`==` Operator Overloading** | 3 | **3** | Excellent. bool operator==(Distance d) overloaded as a member function. |
| **Object Usage, Output & Execution** | 3 | **3** | Excellent. Objects created and compared via if-else; compiles and executes cleanly. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **-3 Marks**
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Passed (Good)**

---

### ⚠️ **Plagiarism Audit Detail**

> **Plagiarism Penalty of **-3 marks** applied.**
> Source code file is an exact raw byte-for-byte copy-match (including exact whitespace, comments, and variable naming) with student `2025-SE-22` (Noor Ul Ain Abbasi).

---

### 💬 **Overall Teacher Remarks**

**Dear Wajeeha,** your Lab 9 submission demonstrates your understanding of C++ operator overloading and member function comparison.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 10 Evaluation Report (File Handling in C++)

**Student Roll Number:** 2025-SE-04
**Student Name:** Wajeeha Batool
**Task Folder Location:** `Lab 10 (File Handling)\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **File Creation & Writing** | 3 | **3** | Excellent. File creation and writing for notes.txt and students.txt correctly implemented. |
| **File Reading & Content Display** | 3 | **3** | Excellent. File reading and console output display implemented cleanly. |
| **Line Counting & File Appending/Copying** | 3 | **3** | Excellent. Line counting, append mode, and stream copying to copy.txt all implemented. |
| **File Handling, Execution & Output** | 3 | **3** | Excellent. All 4 programs compile cleanly and execute properly. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **-3 Marks**
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Passed (Good)**

---

### ⚠️ **Plagiarism Audit Detail**

> **Plagiarism Penalty of **-3 marks** applied.**
> All 4 source code files are 100% exact raw byte-for-byte copy-matches (including comments and variable naming) with student `2025-SE-22` (Noor Ul Ain Abbasi).

---

### 💬 **Overall Teacher Remarks**

**Dear Wajeeha,** your Lab 10 submission demonstrates your understanding of C++ file stream handling, reading, writing, and resource management.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 11 Evaluation Report (Friend Functions & Static Members)

**Student Roll Number:** 2025-SE-04
**Student Name:** Wajeeha Batool
**Task Folder Location:** `Lab 11 & 12\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Friend Function Implementation** | 3 | **3** | Excellent. Friend function tasks correctly use the friend keyword, access private members, and carry over distance inches to feet accurately. |
| **Static Data Member Implementation** | 3 | **3** | Excellent. BankAccount correctly implements static int totalAccounts with displayTotalAccounts() static function. |
| **Static Member Function & Shared Data** | 3 | **3** | Excellent. Employee correctly uses static string companyName and static void displayCompanyInfo(). |
| **Object Creation, Output & Execution** | 3 | **3** | Excellent. Clean compilation and flawless execution across all 4 programs. |

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

**Dear Wajeeha,** your Lab 11 submission demonstrates a clear understanding of friend functions and static members in C++.

<br>

---
---

<br>

# Lab 12 Evaluation Report (Pure Virtual Functions & Abstract Classes)

**Student Roll Number:** 2025-SE-04
**Student Name:** Wajeeha Batool
**Task Folder Location:** `Lab 11 & 12\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Abstract Base Class & Pure Virtual Function** | 3 | **3** | Excellent. HospitalStaff abstract base class with pure virtual performDuty() and protected name member. |
| **Derived Classes & Function Overriding** | 3 | **3** | Excellent. Doctor, Nurse, and Receptionist classes override performDuty() accurately. |
| **Object Creation & Polymorphic Call** | 3 | **3** | Excellent. Objects created and performDuty() called for each staff member. |
| **Execution, Output & Clean Compilation** | 3 | **3** | Excellent. Clean compilation and formatted console output. |

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

**Dear Wajeeha,** your Lab 12 submission demonstrates an excellent understanding of abstract classes and pure virtual functions in C++.

<br>

---
---

<br>

# Lab 13 Evaluation Report (C++ Templates)

**Student Roll Number:** 2025-SE-04
**Student Name:** Wajeeha Batool
**Task Folder Location:** `Lab 13\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Function Templates (`printTwice` & `findMin`)** | 3 | **3** | Excellent. Function templates are correctly implemented with proper generic parameterization. |
| **Required Type Testing & Results** | 3 | **3** | Excellent. Required types are tested with interactive inputs and results are displayed accurately. |
| **Class Templates (`Pair<T>` & `Calculator<T>`)** | 3 | **3** | Excellent. Pair<T> and Calculator<T> class templates are fully functional with constructors and operations. |
| **Object Creation, `main()` Usage & Execution** | 3 | **3** | Excellent. All 4 programs compile cleanly and execute properly. |

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

**Dear Wajeeha,** your Lab 13 submission demonstrates a strong understanding of generic programming, function templates, and class templates in C++.

<br>

---
---

<br>

# Lab 14 Evaluation Report (In-Class Lab: Vehicle Rental System)

**Student Roll Number:** 2025-SE-04  
**Student Name:** Wajeeha Batool  
**Task Folder Location:** `Lab 14 (Vehicle Rental System)\Vehicle Rental System\`  

---

### 📊 **Evaluation Rubric & Score Sheet (Max 48 Marks)**

| **Criterion** | **Weight** | **Raw Score (1–4)** | **Weighted Marks** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :---: | :--- |
| **OOP Design** | x 4 | **4** / 4 | **16 / 16** | **Excellent.** Abstract base class `Vehicle` with 4 pure virtual methods (`getType() = 0`, `calculateCost() = 0`, `getExtraAttribute() = 0`, `displayInfo() = 0`) and virtual destructor. `Car`, `Motorbike`, and `Truck` implement accurate pricing logic (+20% surcharge on Trucks, -10% discount on Motorbikes > 7 days). Runtime polymorphism used extensively throughout `Rental` and `RentalSystem`. |
| **Design Justification** | x 3 | **2** / 4 | **6 / 12** | **Developing.** In-depth inline comments throughout code explaining design choices, but the standalone written `DesignNote.txt` document (Section 4b) was omitted. |
| **Encapsulation & Responsibility** | x 2 | **4** / 4 | **8 / 8** | **Excellent.** Flawless encapsulation across all classes with private data members, getters/setters, auto-incrementing ID trackers, and distinct single-responsibility separation. |
| **Working Demo** | x 2 | **4** / 4 | **8 / 8** | **Excellent.** Compiles cleanly under C++17 with zero errors/warnings. Features a full 10-option interactive menu system with automatic sample data seeding, file I/O persistence (`customers.txt`, `rentals.txt`, `vehicles.txt`), and complete fleet reporting. |
| **Code Quality** | x 1 | **4** / 4 | **4 / 4** | **Excellent.** Superior code organization with header/source split, const correctness, header guards, clear naming, and robust input validation/stream clearance. |

---

### 📈 **Summary of Results**

* **Weighted Total Marks:** **42 / 48 (87.5%)**
* **Grade Status:** **Passed (Excellent)**
* **Plagiarism Penalty:** **0 Marks** (Independent individual submission)

---

### 💬 **Overall Teacher Remarks**

**Dear Wajeeha,** your Lab 14 submission is an exemplary, enterprise-grade implementation featuring seamless OOP inheritance, polymorphic billing, and file-based data persistence. Outstanding work.
