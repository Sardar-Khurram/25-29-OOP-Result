# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-17
**Student Name:** Muqaddas Majeed
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                                                                       |
| :----------------------------------------- | :-----------: | :----------------: | :--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **3**       | **Excellent.** Task 1 correctly defines the `Student` structure with `firstName`, `lastName`, `rollNumber`, and `marks`. The required `displayStudentInfo()` function correctly displays the student's full name and marks. A structure variable is created, all required values are assigned, and the member function is called successfully.                                                                                                             |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** Task 2 correctly implements an array of `Student` structures, accepts multiple student records through user input, and calls `displayStudentInfo()` for each student. I compiled and tested the program with two student records; both records were entered and displayed correctly. The only technical issue is that `Student s[n]` is a variable-length array, which is not standard C++ and produces a warning under strict compilation. |
| **Structure Pointer & Dynamic Access**     |       3       |        **2**       | **Good.** Task 3 correctly declares a pointer to a dynamically allocated `Student`, assigns all members through `->`, and calls a member function through the pointer. However, the required function name is `displayStudentInfo()`, while the student implemented `display()`. Also, the dynamically allocated memory is never released with `delete`, creating a memory leak.                                                                           |
| **Input, Output & Execution**              |       3       |        **2**       | **Good.** All three programs compiled successfully with C++17. Task 1 and Task 2 executed correctly, and Task 2 was tested with multiple student records. Task 3 also executes and displays the entered student information, but it does not fully satisfy the specified member-function and memory-management requirements.                                                                                                                               |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **10 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **10 / 12 (83.33%)**
* **Grade Status:** **Good**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> The submitted files were evaluated against the Lab 1 requirements. No comparison submission was provided for this evaluation, so a 100% code-match determination cannot be established from the available materials. The Lab 1 policy specifies a **-3 mark penalty** when a student's code is found to be plagiarized or matching 100% with another student's code.

---

### 💬 **Overall Teacher Remarks**

**Dear Muqaddas,** your Lab 1 submission demonstrates a **good understanding of structures, arrays of structures, and structure pointers**. Tasks 1 and 2 satisfy the requirements correctly.

Task 3 demonstrates the important pointer concept correctly. The code dynamically allocates a `Student`, accesses its members using `->`, accepts input, and invokes a member function through the pointer.

However, there are two issues in Task 3. The assignment specifically requires the function **`displayStudentInfo()`**, but the submitted code defines **`display()`** instead. Additionally, the dynamically allocated object created with:

```cpp
Student *ptr;
ptr = new Student;
```

is never released with:

```cpp
delete ptr;
```

which results in a memory leak.

I compiled all three programs using **C++17 with `-Wall -Wextra -pedantic`** and ran them. Task 1 and Task 2 executed correctly. Task 2 produced only the expected strict-C++ warning for the variable-length array. Task 3 also executed successfully, but the above implementation issues prevent full marks.

**Overall performance: Good — 10/12.**

<br>

---
---

<br>

# Lab 2 Evaluation Report (All Tasks)
**Student Roll Number:** 2025-SE-17  
**Student Name:** Muqaddas Majeed

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** Correct class structure across all tasks. Class objects are instantiated properly in main and used to perform required functionalities. |
| **Member Variables** | 3 | **3** | **Excellent.** attributes (like `name`, `rollNumber`, `marks`, `length`, `width`, `age`, `celsius`, `num1`, `num2`) are defined clearly with proper data types. Proper encapsulation is used with `private` attributes and `public` functions. |
| **Member Functions (Inside/Outside)** | 3 | **3** | **Excellent.** You followed function scoping rules perfectly: <br>1. **Inside Class:** Functions are defined inside for Task 1 (`getData`, `displayData`) and Task 4 (`toFahrenheit`, `display`). <br>2. **Outside Class:** Declared inside and defined outside using the scope resolution operator `::` in Task 2 (`setDimensions`, `area`, `perimeter`) and Task 3 (`setData`, `isEligible`). <br>3. **Logic:** Voter eligibility check strictly uses `age > 18`. |
| **Input/Output & Execution** | 3 | **3** | **Excellent.** All 5 tasks compile cleanly using `g++` without warnings or errors. Program execution is fully functional with interactive terminal prompts, and Task 5 (`Calculator`) successfully checks for division-by-zero errors. |

---

### **Summary of Results**
* **Total Marks:** **12 / 12** (100.0%)
* **Grade Status:** **Excellent (Full Marks)**

### **Overall Teacher Remarks**
Dear Muqaddas,
Outstanding work on Lab 2! All 5 tasks are implemented flawlessly. Your code is clean, complies with C++ standards, and respects scoping boundaries (inside vs. outside definitions). 

You have also used private attributes with public accessors (encapsulation) correctly and handled potential runtime errors like division by zero. Keep up the high standard of your coding!

<br>

---
---

<br>

# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-17  
**Student Name:** Muqaddas Majeed
**Task Folder Location:** `OOP_LAB_3\task 3 product.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** Correct class structure with object creation in `task 3 product.cpp`. |
| **Member Variables** | 3 | **3** | **Excellent.** Relevant attributes (`name`, `price`, `quantity`) defined clearly with proper data types. |
| **Member Functions (Inside/Outside)** | 3 | **3** | **Excellent.** Functions defined and used correctly as per instruction (`!n.empty()`, `p > 0`, `q >= 0`). |
| **Use of Access Specifiers** | 3 | **3** | **Excellent.** All data members are private and accessed via public methods. |
| **Use of Getters/Setters** | 3 | **3** | **Excellent.** Proper getters/setters used with validation and clear error messages. |
| **Input/Output & Execution** | 3 | **3** | **Excellent.** Compiles 100% cleanly with `g++` and displays output correctly. |

---

### 📈 **Summary of Results**
* **Total Marks:** **18 / 18 (100%)**
* **Grade Status:** **Excellent (Full Marks)**

### 💬 **Overall Teacher Remarks**
Dear Muqaddas, Outstanding submission for Lab 3! Your class design, validation logic, and test driver execution satisfy all rubric criteria. Well done!

<br>

---
---

<br>

# Lab 4 Evaluation Report (Constructors & Destructors)
**Student Roll Number:** 2025-SE-17  
**Student Name:** Muqaddas Majeed
**Task Folder Location:** `oop lab 4\`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor Implementation** | 3 | **3** | **Excellent.** Task 1 default constructor initializes `id=0`, `name="Not Assigned"`, `salary=0.0`. Task 2 parameterized constructor initializes all banking attributes cleanly. |
| **Constructor Overloading** | 3 | **3** | **Excellent.** Task 3 `Rectangle` class overloads default (1.0), 2-parameter (`length`, `width`), and 1-parameter (square) constructors with `area()` method. |
| **Destructor & Object Management** | 3 | **3** | **Excellent.** Task 4 `Locker` class destructor prints deallocation message. Demonstrates both scoped stack allocation `{}` and dynamic heap allocation via `new`/`delete`. |
| **Output & Execution** | 3 | **2** | **Good.** Tasks 1, 2, and 3 compile and run cleanly. <br>*Deduction (-1 mark):* Syntax typo `}e` on line 23 of `OOP LAB 4 Task 4.cpp` causes a compilation error. |

---

### 📈 **Summary of Results**
* **Total Marks:** **11 / 12 (91.7%)**
* **Grade Status:** **Passed with feedback**

### 💬 **Overall Teacher Remarks**
Dear Muqaddas, Great work on Lab 4! All constructor/destructor requirements are implemented cleanly. To ensure clean compilation, remove the stray character `e` on line 23 after `}` in Task 4 (`OOP LAB 4 Task 4.cpp`). Good effort!

<br>

---
---

<br>

# Lab 5 Evaluation Report (Inheritance)

**Student Roll Number:** 2025-SE-17
**Student Name:** Muqaddas Majeed
**Task Folder Location:** `oop lab 5\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Inheritance Implementation** | 3 | **3** | Excellent. Single inheritance implemented correctly (Person -> Student) with display_person_info() and display_student_info(). |
| **Classes, Attributes & Functions** | 3 | **3** | Excellent. Multilevel inheritance implemented correctly (Person -> Employee -> Manager) with all required attributes and display functions. |
| **Object Creation & Functionality** | 3 | **3** | Excellent. Hierarchical inheritance implemented correctly (Employee -> Developer, Employee -> Designer) with both derived classes inheriting name and salary. |
| **Input, Output & Execution** | 3 | **3** | Excellent. Multiple inheritance implemented correctly (Printer + Scanner -> Photocopier) with photocopy() calling print_document() and scan_document(). |

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

**Dear Muqaddas,** your Lab 5 submission structurally demonstrates a very good understanding of inheritance concepts in C++.

<br>

---
---

<br>

# Lab 6 Evaluation Report (Constructor Chaining & Destructors)

**Student Roll Number:** 2025-SE-17
**Student Name:** Muqaddas Majeed
**Task Folder Location:** `oop lab 6\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor & Inheritance Implementation** | 3 | **3** | Excellent. Clean constructor chaining and multilevel constructor execution prints are correct. |
| **Destructor & Memory Management** | 3 | **3** | Excellent. Destructors correctly release dynamically allocated memory on the heap. |
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

**Dear Muqaddas,** your Lab 6 submission demonstrates your understanding of constructor chaining and destructors in C++.

<br>

---
---

<br>

# Lab 7 Evaluation Report (Composition & Aggregation)

**Student Roll Number:** 2025-SE-17
**Student Name:** Muqaddas Majeed
**Task Folder Location:** `oop lab 7\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Composition & Object Ownership** | 3 | **3** | Excellent. Clean composition implementation with Calculator owning Display object. |
| **Aggregation & Shared Object Usage** | 3 | **3** | Excellent. Shared Calculator correctly passed by pointer to multiple Student instances. |
| **Classes, Functions & Data Management** | 3 | **3** | Excellent. Arithmetic methods, delegation functions, and lastResult tracking correctly written. |
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

**Dear Muqaddas,** your Lab 7 submission demonstrates your understanding of composition (strong ownership) and aggregation (shared references) in C++.

<br>

---
---

<br>

# Lab 8 Evaluation Report (Polymorphism & Virtual Functions)

**Student Roll Number:** 2025-SE-17
**Student Name:** Muqaddas Majeed
**Task Folder Location:** `oop lab 8\`

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

**Dear Muqaddas,** your Lab 8 submission demonstrates your understanding of runtime polymorphism and virtual functions in C++.

<br>

---
---

<br>

# Lab 9 Evaluation Report (Operator Overloading ==)

**Student Roll Number:** 2025-SE-17
**Student Name:** Muqaddas Majeed
**Task Folder Location:** `oop lab 9\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Data Members** | 3 | **3** | Excellent. Distance class correctly encapsulates private feet and inches data members. |
| **Constructor Implementation** | 3 | **3** | Excellent. Constructor with default parameters initializes distance values properly. |
| **`==` Operator Overloading** | 3 | **3** | Excellent. bool operator==(Distance d) correctly overloaded as a member function. |
| **Object Usage, Output & Execution** | 3 | **3** | Excellent. Multiple Distance objects created, displayed, and compared cleanly. |

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

**Dear Muqaddas,** your Lab 9 submission demonstrates your understanding of C++ operator overloading and member function comparison.

<br>

---
---

<br>

# Lab 10 Evaluation Report (File Handling in C++)

**Student Roll Number:** 2025-SE-17
**Student Name:** Muqaddas Majeed
**Task Folder Location:** `OOP lab 10\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **File Creation & Writing** | 3 | **3** | Excellent. notes.txt and students.txt correctly created and populated. |
| **File Reading & Content Display** | 3 | **3** | Excellent. Clean reading loops using ifstream and getline. |
| **Line Counting & File Appending/Copying** | 3 | **3** | Excellent. Line counting, append mode, and stream copying to copy.txt all correctly implemented. |
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
> Source code files for Task 2 and Task 3 are 100% exact raw byte-for-byte copy-matches with students `2025-SE-04` and `2025-SE-22`.

---

### 💬 **Overall Teacher Remarks**

**Dear Muqaddas,** your Lab 10 submission demonstrates your understanding of C++ file stream handling, reading, writing, and resource management.
*Warning: Copying code from other students violates class policies. Please ensure you write your own solutions for future labs.*

<br>

---
---

<br>

# Lab 11 Evaluation Report (Friend Functions & Static Members)

**Student Roll Number:** 2025-SE-17
**Student Name:** Muqaddas Majeed
**Task Folder Location:** `OOP lab 11 and 12\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Friend Function Implementation** | 3 | **3** | Excellent. Both Box displayLength() and Distance addDistance() friend functions are properly declared and implemented with accurate parameter passing. |
| **Static Data Member Implementation** | 3 | **3** | Excellent. BankAccount correctly defines static int totalAccounts, increments counter in constructor, and displays total accounts created. |
| **Static Member Function & Shared Data** | 3 | **3** | Excellent. Employee class correctly defines static string companyName and static void displayCompanyInfo(), accessed via Employee::displayCompanyInfo(). |
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

**Dear Muqaddas,** your Lab 11 submission demonstrates a clear understanding of friend functions and static members in C++.

<br>

---
---

<br>

# Lab 12 Evaluation Report (Pure Virtual Functions & Abstract Classes)

**Student Roll Number:** 2025-SE-17
**Student Name:** Muqaddas Majeed
**Task Folder Location:** `OOP lab 11 and 12\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Abstract Base Class & Pure Virtual Function** | 3 | **3** | Excellent. HospitalStaff correctly defined as an abstract base class with a pure virtual function virtual void performDuty() = 0;. |
| **Derived Classes & Function Overriding** | 3 | **3** | Excellent. Doctor, Nurse, and Receptionist classes properly inherit from HospitalStaff and override performDuty(). |
| **Object Creation & Polymorphic Call** | 3 | **3** | Excellent. Objects of all 3 derived classes created and performDuty() invoked on each. |
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

**Dear Muqaddas,** your Lab 12 submission demonstrates an excellent understanding of abstract classes and pure virtual functions in C++.

<br>

---
---

<br>

# Lab 13 Evaluation Report (C++ Templates)

**Student Roll Number:** 2025-SE-17
**Student Name:** Muqaddas Majeed
**Task Folder Location:** `OOP Lab 13\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Function Templates (`printTwice` & `findMin`)** | 3 | **3** | Excellent. printTwice() and findMin() function templates are properly implemented with generic types. |
| **Required Type Testing & Results** | 3 | **3** | Excellent. Required type testing (int, double, string and int, double, char) correctly demonstrated with clear output. |
| **Class Templates (`Pair<T>` & `Calculator<T>`)** | 3 | **2** | Good. Deducted 1 mark because Task 3 (Pair<T> Class Template) was replaced with a duplicate findMin file. |
| **Object Creation, `main()` Usage & Execution** | 3 | **3** | Excellent. All programs compile with zero errors and execute cleanly. |

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

**Dear Muqaddas,** your Lab 13 submission demonstrates your understanding of generic programming, function templates, and class templates in C++.

<br>

---
---

<br>

# Lab 14 Evaluation Report (In-Class Lab: Vehicle Rental System)

**Student Roll Number:** 2025-SE-17  
**Student Name:** Muqaddas Majeed  
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

**Dear Muqaddas,** your Lab 14 (Vehicle Rental System) submission is missing from your repository. Please upload your complete Lab 14 files to receive evaluation.
