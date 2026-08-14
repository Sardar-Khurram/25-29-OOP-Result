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
