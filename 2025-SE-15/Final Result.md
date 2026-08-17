# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-15
**Student Name:** Samia Arshad
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                     |
| :----------------------------------------- | :-----------: | :----------------: | :--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **3**       | **Excellent.** Task 1 correctly defines the `Student` structure with `firstName`, `lastName`, `rollNumber`, and `marks`. The `displayStudentInfo()` function correctly displays the student's full name and marks. A structure variable is created, all required values are assigned, and the member function is called.                 |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** Task 2 correctly implements an array of `Student` structures, accepts multiple student records through user input, and calls `displayStudentInfo()` for each student. The complete input loop is followed by a separate display loop, so all records are entered before being displayed.                                  |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** Task 3 correctly creates a dynamically allocated `Student` using `new Student`, assigns all members through the pointer using `->`, calls `displayStudentInfo()` through the pointer, and correctly releases the allocated memory using `delete`.                                                                         |
| **Input, Output & Execution**              |       3       |        **3**       | **Excellent.** All three programs compiled successfully with `g++ -std=c++17 -Wall -Wextra -pedantic` and executed successfully. Task 2 produces a compiler warning because `Student students[n]` is a variable-length array, which is accepted by GCC as an extension but is not standard C++. This warning does not prevent execution. |

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

**Dear Samia,** your Lab 1 submission demonstrates an **excellent understanding of structures, arrays of structures, and structure pointers**. All three tasks satisfy the required functionality.

Task 1 correctly implements the basic structure and member function. Task 2 correctly handles multiple student records using an array of structures, user input, and a separate display loop. Task 3 demonstrates proper pointer-to-structure usage, dynamic allocation with `new`, member access through `->`, member-function invocation through the pointer, and correct memory cleanup with `delete`.

All three programs were **compiled and executed successfully**. The only technical issue identified was the use of `Student students[n]` in Task 2, which is a variable-length array. GCC accepts it as an extension, but it is **not standard C++**. A `vector<Student>` or standard dynamic allocation would be preferable.

**Overall performance: Excellent — 12/12.**

<br>

---
---

<br>

# Lab 2 Evaluation Report (All Tasks)
**Student Roll Number:** 2025-SE-15  
**Student Name:** Samia Arshad

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **2** | **Good.** 3 out of 5 tasks (`Calculator`, `Temperature Converter`, `Voting Eligibility`) were submitted inside subfolders in `Week 2`. Good modular structure with separate `.h` headers, `.cpp` implementation files, and `main.cpp` drivers. Tasks 1 (`Student`) and 2 (`Rectangle`) were not attempted. |
| **Member Variables** | 3 | **2** | **Good.** Member variables are declared using proper encapsulation (`private` attributes) and types for the 3 submitted tasks. |
| **Member Functions (Inside/Outside)** | 3 | **2** | **Good.** Member functions are defined outside the classes in `.cpp` files using the scope resolution operator `::`. Voter check correctly uses `age > 18`. Temperature conversion uses integer division `9/5`. Calculator division lacks zero check. |
| **Input/Output & Execution** | 3 | **2** | **Good.** All 3 submitted tasks compile cleanly using `g++` without warnings or errors and execute correctly. Tasks 1 and 2 are missing. |

---

### **Summary of Results**
* **Core Score:** **8 / 12**
* **Plagiarism Penalty:** **0 Marks** (No full assignment copy detected)
* **Final Marks Obtained:** **8 / 12** (66.7%)
* **Grade Status:** **Passed with feedback**

---

### **Overall Teacher Remarks**
Dear Samia,

Your Lab 2 submission in `Week 2` is clean, original, and well-structured. You demonstrated proper Object-Oriented Programming practices by separating header declarations (`.h`) from function implementations (`.cpp`) using the scope resolution operator `::`. All 3 submitted tasks compile and run smoothly, and no plagiarism was detected.

To improve:
1. **Missing Tasks:** Tasks 1 (`Student`) and 2 (`Rectangle`) were omitted. Make sure to complete all assigned tasks in future labs.
2. **Temperature Formula:** Use floating-point literal `9.0 / 5.0` to avoid integer division truncation.
3. **Calculator:** Add a zero check `num2 != 0` inside `divide()` to prevent potential division by zero.

Good work on the tasks completed!

<br>

---
---

<br>

# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-15  
**Student Name:** Samia Arshad
**Task Folder Location:** `Week 3\Week 3 Task  1.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** `Product` class defined cleanly and instantiated in `Week 3 Task  1.cpp`. |
| **Member Variables** | 3 | **3** | **Excellent.** Attributes (`name`, `price`, `quantity`) declared under `private:` access specifier with proper data types. |
| **Member Functions (Inside/Outside)** | 3 | **3** | **Excellent.** Setters implement validation (`n == ""`, `p <= 0`, `q < 0`) with clear error messages. |
| **Use of Access Specifiers** | 3 | **3** | **Excellent.** Encapsulation is strictly enforced. |
| **Use of Getters/Setters** | 3 | **3** | **Excellent.** All getters and setters fully functional. |
| **Input/Output & Execution** | 3 | **3** | **Excellent.** Compiles 100% cleanly with `g++` and executes test driver sequence perfectly. |

---

### 📈 **Summary of Results**
* **Total Marks:** **18 / 18 (100%)**
* **Grade Status:** **Excellent (Full Marks)**

### 💬 **Overall Teacher Remarks**
Dear Samia, Excellent work on Lab 3! Your class design, validation error handling, and test driver execution fully satisfy all rubric criteria. Great job!

<br>

---
---

<br>

# Lab 4 Evaluation Report (Constructors & Destructors)
**Student Roll Number:** 2025-SE-15  
**Student Name:** Samia Arshad
**Task Folder Location:** `Week 4\Week 4 Task 1.cpp` to `Task 4.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor Implementation** | 3 | **3** | **Excellent.** Task 1 default constructor initializes `id=0`, `name="Not Assigned"`, `salary=0.0`. Task 2 parameterized constructor correctly initializes all banking attributes. |
| **Constructor Overloading** | 3 | **3** | **Excellent.** Task 3 `Rectangle` class overloads default (1.0), 2-parameter (`length`, `width`), and 1-parameter (square `length = width = side`) constructors. |
| **Destructor & Object Management** | 3 | **3** | **Excellent.** Task 4 `Locker` class destructor correctly prints deallocation message. Demonstrates both scoped stack allocation `{}` and dynamic heap allocation via `new`/`delete`. |
| **Output & Execution** | 3 | **3** | **Excellent.** All 4 C++ files compile 100% cleanly with `g++` and execute with clear output formatting. |

---

### 📈 **Summary of Results**
* **Total Marks:** **12 / 12 (100%)**
* **Grade Status:** **Passed (Full Marks)**

### 💬 **Overall Teacher Remarks**
Dear Samia, Outstanding work on Lab 4! All four tasks are implemented cleanly, well-commented, and function properly. Excellent job!

<br>

---
---

<br>

# Lab 5 Evaluation Report (Inheritance)

**Student Roll Number:** 2025-SE-15
**Student Name:** Samia Arshad
**Task Folder Location:** `Week 5\`

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

**Dear Samia,** your Lab 5 submission structurally demonstrates an excellent understanding of single, multilevel, hierarchical, and multiple inheritance in C++. 
Keep up the excellent work!

<br>

---
---

<br>

# Lab 6 Evaluation Report (Constructor Chaining & Destructors)

**Student Roll Number:** 2025-SE-15
**Student Name:** Samia Arshad
**Task Folder Location:** `Week 6\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor & Inheritance Implementation** | 3 | **3** | Excellent. Clean constructor chaining and multilevel constructor delegation implementation. |
| **Destructor & Memory Management** | 3 | **3** | Excellent. Correct destructors freeing dynamic memory cleanly using delete. |
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

**Dear Samia,** your Lab 6 submission demonstrates your understanding of constructor chaining and destructors in C++.

<br>

---
---

<br>

# Lab 7 Evaluation Report (Composition & Aggregation)

**Student Roll Number:** 2025-SE-15
**Student Name:** Samia Arshad
**Task Folder Location:** `Week 7\`

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

**Dear Samia,** your Lab 7 submission demonstrates your understanding of composition (strong ownership) and aggregation (shared references) in C++.

<br>

---
---

<br>

# Lab 8 Evaluation Report (Polymorphism & Virtual Functions)

**Student Roll Number:** 2025-SE-15
**Student Name:** Samia Arshad
**Task Folder Location:** `Week 8\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Polymorphism & Virtual Function** | 3 | **3** | Excellent. Base Shape defines virtual double area() and derived classes properly override it. |
| **Derived Classes & Area Calculation** | 3 | **3** | Excellent. Derived classes Rectangle and Circle accurately compute their areas. |
| **Shape Pointer & Object Access** | 3 | **3** | Excellent. Base pointer Shape* dynamically allocates heap objects and invokes area() at runtime. |
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

**Dear Samia,** your Lab 8 submission demonstrates your understanding of runtime polymorphism and virtual functions in C++.

<br>

---
---

<br>

# Lab 9 Evaluation Report (Operator Overloading ==)

**Student Roll Number:** 2025-SE-15
**Student Name:** Samia Arshad
**Task Folder Location:** `Week 9\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Data Members** | 3 | **3** | Excellent. Distance class correctly encapsulates private feet and inches data members. |
| **Constructor Implementation** | 3 | **3** | Excellent. Parameterized constructor initializes values accurately. |
| **`==` Operator Overloading** | 3 | **3** | Excellent. bool operator==(Distance d1) overloaded as a member function. |
| **Object Usage, Output & Execution** | 3 | **3** | Excellent. Multiple distance objects instantiated and compared; clean compilation and execution. |

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

**Dear Samia,** your Lab 9 submission demonstrates your understanding of C++ operator overloading and member function comparison.

<br>

---
---

<br>

# Lab 10 Evaluation Report (File Handling in C++)

**Student Roll Number:** 2025-SE-15
**Student Name:** Samia Arshad
**Task Folder Location:** `Week 10\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **File Creation & Writing** | 3 | **3** | Excellent. notes.txt and students.txt correctly created and populated. |
| **File Reading & Content Display** | 3 | **3** | Excellent. ifstream reading and clean output display implemented properly. |
| **Line Counting & File Appending/Copying** | 3 | **3** | Excellent. Line counting, append mode with personal credentials, and stream copying all correctly implemented. |
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

**Dear Samia,** your Lab 10 submission demonstrates your understanding of C++ file stream handling, reading, writing, and resource management.

<br>

---
---

<br>

# Lab 11 Evaluation Report (Friend Functions & Static Members)

**Student Roll Number:** 2025-SE-15
**Student Name:** Samia Arshad
**Task Folder Location:** `Week 11\ & Week 12\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Friend Function Implementation** | 3 | **3** | Excellent. Friend functions declared with friend keyword and defined to access length and add feet/inches. |
| **Static Data Member Implementation** | 3 | **3** | Excellent. BankAccount static totalAccounts correctly initialized, incremented, and displayed. |
| **Static Member Function & Shared Data** | 3 | **3** | Excellent. Employee static variable and static function displayCompany() correctly demonstrated. |
| **Object Creation, Output & Execution** | 3 | **3** | Excellent. All programs compile cleanly with zero errors and execute properly. |

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

**Dear Samia,** your Lab 11 submission demonstrates a solid understanding of friend functions and static members in C++.

<br>

---
---

<br>

# Lab 12 Evaluation Report (Pure Virtual Functions & Abstract Classes)

**Student Roll Number:** 2025-SE-15
**Student Name:** Samia Arshad
**Task Folder Location:** `Week 12\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Abstract Base Class & Pure Virtual Function** | 3 | **3** | Excellent. HospitalStaff abstract base class with pure virtual performDuty() and protected staffName member. |
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

**Dear Samia,** your Lab 12 submission demonstrates an excellent understanding of abstract classes and pure virtual functions in C++.

<br>

---
---

<br>

# Lab 13 Evaluation Report (C++ Templates)

**Student Roll Number:** 2025-SE-15
**Student Name:** Samia Arshad
**Task Folder Location:** `Week 13\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Function Templates (`printTwice` & `findMin`)** | 3 | **3** | Excellent. Function templates are properly parameterized. |
| **Required Type Testing & Results** | 3 | **3** | Excellent. Data types are tested across function calls. |
| **Class Templates (`Pair<T>` & `Calculator<T>`)** | 3 | **2** | Good. Deducted 1 mark because Task 3 (Pair<T> Class Template) was replaced with a function template largest(T a, T b). |
| **Object Creation, `main()` Usage & Execution** | 3 | **2** | Good. Deducted 1 mark because Task 2 contained an undeclared identifier typo (`x` instead of `x1`), preventing clean compilation of Task 2. |

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

**Dear Samia,** your Lab 13 submission demonstrates your understanding of generic programming, function templates, and class templates in C++.

<br>

---
---

<br>

# Lab 14 Evaluation Report (In-Class Lab: Vehicle Rental System)

**Student Roll Number:** 2025-SE-15  
**Student Name:** Samia Arshad  
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
* **Plagiarism Penalty:** **-8 Marks** (100% identical match with student `2025-SE-13` - Areeba Taqdees Mir across all 15 source files and `DesignNote.txt`)
* **Final Marks:** **40 / 48 (83.3%)**
* **Grade Status:** **Passed (Good)**

---

### ⚠️ **Plagiarism Audit Detail**

> **Plagiarism Penalty of -8 Marks Applied.**
> 100% exact raw byte-for-byte match detected between `2025-SE-15` and `2025-SE-13` across all 15 C++ source/header files and `DesignNote.txt`. Symmetrical penalty of -8 marks applied as per strict Lab 14 policy.

---

### 💬 **Overall Teacher Remarks**

**Dear Samia,** your core system design and implementation of the Vehicle Rental System are technically excellent. However, due to submitting identical files with your peer, a plagiarism penalty of -8 marks has been applied.
