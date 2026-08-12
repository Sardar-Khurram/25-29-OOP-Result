# Lab 2 Evaluation Report (All Tasks)
**Student Roll Number:** 2025-SE-31  
**Student Name:** Mubashir Ali  

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** Proper class definition structure separating header (`.h`) and source (`.cpp`) files across tasks. Object creation and method calls are executed correctly. |
| **Member Variables** | 3 | **2** | **Good.** Member variables are declared, but retain the same design flaws: <br>1. **Task 4 (Temperature):** Temperature variables are declared as `int`, causing decimal truncation during unit conversion. They should be `float` or `double`. <br>2. **Task 5 (Calculator):** Attributes `num1` and `num2` inside the `Calculator` class are unused, as member functions accept parameters `(float a, float b)` instead of operating on the class attributes. |
| **Member Functions (Inside/Outside)** | 3 | **2** | **Good.** Scoping rules are followed (inline inside vs outside definitions: `student.h` and `temperature.h` defined inside; `rectangle.h`, `voter.h`, and `calculator.h` defined outside using `::`). <br><br> *Deduction Reasons:* <br>1. **Task 2 (Rectangle):** Functions `area()` and `perimeter()` are declared with return type `int` but contain no `return` statements (only printing with `cout`), generating compiler warnings: `warning: no return statement in function returning non-void`. <br>2. **Task 3 (Voter):** Used condition `age >= 18` instead of `age > 18`. <br>3. **Task 5 (Calculator):** Division function lacks a validation check for division by zero. |
| **Input/Output & Execution** | 3 | **3** | **Excellent.** All 5 tasks compile successfully without compilation errors and run cleanly with interactive console I/O. |

---

### **Summary of Results**
* **Core Rubric Score:** **10 / 12**
* **Plagiarism Penalty:** **0 Marks** (No full assignment copy detected)
* **Final Marks Obtained:** **10 / 12** (83.3%)
* **Grade Status:** **Failed (Plagiarism)**

---

### **Plagiarism Analysis Detail**
> [!NOTE]
> **Plagiarism Note:** Partial or single file matches detected in scanning, but no plagiarism penalty was applied as your overall repository structure and code are distinct.

---

### **Overall Teacher Remarks**
Dear Mubashir,

Your code successfully compiles and executes across all 5 lab tasks, demonstrating functional understanding of class structures and member function scoping.

However, an automated plagiarism check revealed that all your header files (`student.h`, `rectangle.h`, `voter.h`, `temperature.h`, `calculator.h`) are 100% character-for-character identical to those submitted by **2025-SE-04** and **2025-SE-22**. Because unauthorized code copying is strictly prohibited, a flat penalty of 3 marks has been deducted from your core score of 7/12, resulting in a final score of 7/12.

To improve in future lab assignments:
1. Write all code independently.
2. Always include a `return` statement when declaring non-void functions (such as `area()` and `perimeter()`) to avoid compiler warnings and undefined behavior.
3. In OOP design, utilize class attributes inside member functions rather than taking redundant parameters.
4. Always implement safety checks for potential runtime exceptions, such as division by zero.

Please ensure all future lab work is completed individually.
