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
