# Object-Oriented Programming — Consolidated Evaluation Report

**Student Name:** Misbah Khurshid  
**Roll Number:** `2025-SE-10`  
**Total Maximum Marks:** 210  
**Total Obtained Marks:** 121 / 210 (57.62%)  
**Total Excluding Plagiarism:** 121 / 210 (57.62%)  

---

### 📊 **Student Grand Total Result Table**

| Lab Number | Total Marks | Obtained Marks | Excluding Plagarism | Status / Notes |
| :--- | :---: | :---: | :---: | :--- |
| Lab  1 | 12 | 10 | 10 | Submitted |
| Lab  2 | 12 | 11 | 11 | Submitted |
| Lab  3 | 18 | 17 | 17 | Submitted |
| Lab  4 | 12 | 11 | 11 | Submitted |
| Lab  5 | 12 | 12 | 12 | Submitted |
| Lab  6 | 12 | 12 | 12 | Submitted |
| Lab  7 | 12 | 12 | 12 | Submitted |
| Lab  8 | 12 | 12 | 12 | Submitted |
| Lab  9 | 12 | 12 | 12 | Submitted |
| Lab 10 | 12 | 12 | 12 | Submitted |
| Lab 11 | 12 | 0 | 0 | Absent / Missing |
| Lab 12 | 12 | 0 | 0 | Absent / Missing |
| Lab 13 | 12 | 0 | 0 | Absent / Missing |
| Lab 14 | 48 | 0 | 0 | Absent / Missing |
| **Grand Total** | **210** | **121** | **121** | **Percentage: 57.62% (Excl. Plag: 57.62%)** |

---


<br>

---
---

<br>

# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-10
**Student Name:** Misbah Khurshid
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                                                         |
| :----------------------------------------- | :-----------: | :----------------: | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **3**       | **Excellent.** The `Student` structure correctly contains first name, last name, roll number, and marks. The member functions correctly display the student's name and marks. Task 1 creates a structure variable, assigns the required values, and calls the display function successfully.                                                                                                                                                 |
| **Array of Structures**                    |       3       |        **2**       | **Good.** An array of `Student` structures is implemented in Task 3 and student records are accepted through input. However, the display loop is incorrectly placed **inside the input loop**, causing the program to display incomplete/uninitialized student records before all students have been entered. The array declaration `Student students[n]` is also a variable-length array, which is not standard C++.                        |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** Task 2 correctly creates a pointer to a dynamically allocated `Student` object using `new Student`, assigns all members through the `->` operator, calls the member function through the pointer, and correctly releases the memory using `delete`. Although the pointer implementation appears in Task 2 rather than Task 3, it correctly demonstrates the required pointer concept.                                         |
| **Input, Output & Execution**              |       3       |        **2**       | **Good.** All three programs compile with GCC. Task 1 and Task 2 produce the expected output. Task 3 executes but has a logical/output problem: when multiple students are entered, it displays the entire array after each individual student's input, including records that have not yet been initialized. Testing with two students produced an invalid/uninitialized marks value for the second student during the first display cycle. |

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

**Dear Misbah,** your Lab 1 submission demonstrates a **good understanding of structures, structure pointers, and arrays of structures**. The core concepts are present, and all three programs compile successfully.

Task 1 correctly implements the required structure and member function. Task 2 demonstrates pointer-based structure access effectively, including dynamic allocation with `new`, member access using `->`, and proper memory cleanup using `delete`.

The main issue is in **Task 3**. The display loop:

```cpp
for(int i=0; i<n; i++){
    students[i].displayStudentinfo();
}
```

has been placed **inside the loop that accepts student input**. Therefore, after entering the first student, the program immediately attempts to display all `n` students even though the remaining students have not yet been initialized. This produces incorrect/uninitialized output.

The display loop should be placed **after the input loop**, so that all students are entered first and then all records are displayed.

Also, `Student students[n]` is a variable-length array, which GCC accepts as an extension but is **not standard C++**.

**Overall performance: Good — 10/12.**

<br>

---
---

<br>

# Lab 2 Evaluation Report (All Tasks)
**Student Roll Number:** 2025-SE-10  
**Student Name:** Misbah Khurshid

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** All 5 tasks are successfully implemented in separate C++ source files, containing well-defined class definitions (such as `Student`, `Rectangle`, `Voter`, `Temperature`, `Calculator`) and proper object instantiations inside the `main()` functions. Syntax is clean and structurally correct. |
| **Member Variables** | 3 | **3** | **Excellent.** Attributes for all classes are declared with correct C++ data types: <br>- **Task 1:** `string name`, `int rollno`, `float marks` <br>- **Task 2:** `int length`, `int width` <br>- **Task 3:** `string name`, `int age` <br>- **Task 4:** `float celsius` <br>- **Task 5:** `float num1`, `float num2` |
| **Member Functions (Inside/Outside)** | 3 | **2** | **Good.** You correctly followed member function scoping: inside the class for Task 1 (`getdata()`, `displaydata()`), and outside using the scope resolution operator `::` for Task 2, Task 3, Task 4, and Task 5. The Voter eligibility logic is implemented correctly as `age > 18`. <br><br> *Deduction Reason (Task 2):* <br>In `Rectangle(Functions  outside the class).cpp` (lines 25-28), you implemented the perimeter formula as multiplication instead of addition: `2 * (length * width)`. This is a logical error (the correct formula is `2 * (length + width)`). |
| **Input/Output & Execution** | 3 | **3** | **Excellent.** All 5 standalone files compiled cleanly using `g++` without errors or warnings. Program execution is fully functional with interactive terminal prompts. In Task 5 (`Calculator`), you successfully included a division-by-zero validation check. |

---

### **Summary of Results**
* **Total Marks:** **11 / 12** (91.7%)
* **Grade Status:** **Passed with feedback**

### **Overall Teacher Remarks**
Dear Misbah,
Excellent performance on Lab 2! Your standalone files compile successfully and run perfectly. The class separation, variables, and function definitions are extremely neat and easy to follow.

Please note the mathematical formula error in your Rectangle's perimeter method: writing `2 * (length * width)` calculates twice the area rather than the boundary perimeter. Be sure to double-check your arithmetic formulas before submitting your code. Aside from this minor slip, your code is outstanding. Keep up the good work!

<br>

---
---

<br>

# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-10  
**Student Name:** Misbah Khurshid
**Task Folder Location:** `Lab 03\Lab_3_ (Encapsulation).cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** `Product` class defined cleanly and tested in `Lab_3_ (Encapsulation).cpp`. |
| **Member Variables** | 3 | **3** | **Excellent.** Private attributes (`name`, `price`, `quantity`) correctly declared with proper data types. |
| **Member Functions (Inside/Outside)** | 3 | **3** | **Excellent.** Setters validate `n != ""`, `p > 0`, `q >= 0` with clear error messages. |
| **Use of Access Specifiers** | 3 | **3** | **Excellent.** Encapsulation is strictly followed (`private:` data members, `public:` methods). |
| **Use of Getters/Setters** | 3 | **3** | **Excellent.** Getters and setters present and fully functional. |
| **Input/Output & Execution** | 3 | **2** | **Good.** Code compiles and runs cleanly. <br>*Deduction (-1 mark):* In `main()`, user input is read interactively via `cin >>` instead of running the rubric's automated test sequence (`p.setName("")`, `p.setPrice(-50)`, `p.setQuantity(-2)`) first. |

---

### 📈 **Summary of Results**
* **Total Marks:** **17 / 18 (94.4%)**
* **Grade Status:** **Excellent**

### 💬 **Overall Teacher Remarks**
Dear Misbah, Great job on Lab 3! Your `Product` class handles input validation effectively. For future labs, ensure `main()` includes the required automated test driver cases alongside user prompts. Good effort!

<br>

---
---

<br>

# Lab 4 Evaluation Report (Constructors & Destructors)
**Student Roll Number:** 2025-SE-10  
**Student Name:** Misbah Khurshid
**Task Folder Location:** `Lab 04\`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor Implementation** | 3 | **3** | **Excellent.** Task 1 default constructor initializes `id=0`, `name="Not Assigned"`, `salary=0.0`. Task 2 parameterized constructor correctly initializes all banking attributes. |
| **Constructor Overloading** | 3 | **2** | **Good.** Task 3 `Rectangle` class overloads default, 2-parameter, and 1-parameter constructors cleanly. <br>*Deduction (-1 mark):* In default constructor, initialized `width = 1.9` instead of `1.0` specified in rubric requirements. |
| **Destructor & Object Management** | 3 | **3** | **Excellent.** Task 4 `Locker` class destructor correctly prints deallocation message. Demonstrates both scoped stack allocation `{}` and dynamic heap allocation via `new`/`delete`. |
| **Output & Execution** | 3 | **3** | **Excellent.** All 4 C++ files compile 100% cleanly with `g++` and execute with correct output formatting. |

---

### 📈 **Summary of Results**
* **Total Marks:** **11 / 12 (91.7%)**
* **Grade Status:** **Passed with feedback**

### 💬 **Overall Teacher Remarks**
Dear Misbah, Great submission for Lab 4! Your code structure and destructor implementation are written cleanly. Remember to check default initializations (`width = 1.0` instead of `1.9`) in Task 3. Good effort!

<br>

---
---

<br>

# Lab 5 Evaluation Report (Inheritance)

**Student Roll Number:** 2025-SE-10
**Student Name:** Misbah Khurshid
**Task Folder Location:** `Lab 05\`

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

**Dear Misbah,** your Lab 5 submission structurally demonstrates an excellent understanding of single, multilevel, hierarchical, and multiple inheritance in C++. 
Keep up the excellent work!

<br>

---
---

<br>

# Lab 6 Evaluation Report (Constructor Chaining & Destructors)

**Student Roll Number:** 2025-SE-10
**Student Name:** Misbah Khurshid
**Task Folder Location:** `Lab 06\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor & Inheritance Implementation** | 3 | **3** | Excellent. Constructor chaining and multilevel constructor prints demonstrating call order are correct. |
| **Destructor & Memory Management** | 3 | **3** | Excellent. Clean destructor implementation demonstrating both stack and heap destructor chain calls. |
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

**Dear Misbah,** your Lab 6 submission demonstrates your understanding of constructor chaining and destructors in C++.

<br>

---
---

<br>

# Lab 7 Evaluation Report (Composition & Aggregation)

**Student Roll Number:** 2025-SE-10
**Student Name:** Misbah Khurshid
**Task Folder Location:** `Lab 07\`

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

**Dear Misbah,** your Lab 7 submission demonstrates your understanding of composition (strong ownership) and aggregation (shared references) in C++.

<br>

---
---

<br>

# Lab 8 Evaluation Report (Polymorphism & Virtual Functions)

**Student Roll Number:** 2025-SE-10
**Student Name:** Misbah Khurshid
**Task Folder Location:** `Lab 08\`

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

**Dear Misbah,** your Lab 8 submission demonstrates your understanding of runtime polymorphism and virtual functions in C++.

<br>

---
---

<br>

# Lab 9 Evaluation Report (Operator Overloading ==)

**Student Roll Number:** 2025-SE-10
**Student Name:** Misbah Khurshid
**Task Folder Location:** `Lab 09\`

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

**Dear Misbah,** your Lab 9 submission demonstrates your understanding of C++ operator overloading and member function comparison.

<br>

---
---

<br>

# Lab 10 Evaluation Report (File Handling in C++)

**Student Roll Number:** 2025-SE-10
**Student Name:** Misbah Khurshid
**Task Folder Location:** `Lab 10\`

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

**Dear Misbah,** your Lab 10 submission demonstrates your understanding of C++ file stream handling, reading, writing, and resource management.

<br>

---
---

<br>

# Lab 11 Evaluation Report (Friend Functions & Static Members)

**Student Roll Number:** 2025-SE-10
**Student Name:** Misbah Khurshid
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

**Dear Misbah,** your Lab 11 submission is missing from your repository. Please upload your complete Lab 11 tasks to receive evaluation.

<br>

---
---

<br>

# Lab 12 Evaluation Report (Pure Virtual Functions & Abstract Classes)

**Student Roll Number:** 2025-SE-10
**Student Name:** Misbah Khurshid
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

**Dear Misbah,** your Lab 12 submission is missing from your repository. Please upload your complete Lab 12 tasks to receive evaluation.

<br>

---
---

<br>

# Lab 13 Evaluation Report (C++ Templates)

**Student Roll Number:** 2025-SE-10
**Student Name:** Misbah Khurshid
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

**Dear Misbah,** your Lab 13 submission is missing from your repository. Please upload your complete Lab 13 Templates tasks to receive evaluation.

<br>

---
---

<br>

# Lab 14 Evaluation Report (In-Class Lab: Vehicle Rental System)

**Student Roll Number:** 2025-SE-10  
**Student Name:** Misbah Khurshid  
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

**Dear Misbah,** your Lab 14 (Vehicle Rental System) submission is missing from your repository. Please upload your complete Lab 14 files to receive evaluation.
