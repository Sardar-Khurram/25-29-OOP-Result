# Lab 2 Evaluation Report (All Tasks)
**Student Roll Number:** 2025-SE-22  
**Student Name:** Noor Ul Ain Abbasi

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** Correct class structure. Separates interface declarations in `.h` headers and client drivers in `.cpp` source files. Objects are instantiated correctly. |
| **Member Variables** | 3 | **2** | **Good.** attributes are defined clearly, but with two design flaws: <br>1. **Task 4 (Temperature):** Temperature attributes are defined as `int`, causing decimal truncation during division. <br>2. **Task 5 (Calculator):** Class attributes `num1` and `num2` are declared inside the `Calculator` class but are completely unused (functions take them as arguments instead). |
| **Member Functions (Inside/Outside)** | 3 | **2** | **Good.** Scoping rules are followed (inline vs outside). <br><br> *Deduction Reasons:* <br>1. **Task 2 (Rectangle):** `area()` and `perimeter()` are declared as returning `int` but contain no `return` statements, which triggers compiler warnings: `warning: no return statement in function returning non-void`. <br>2. **Task 3 (Voter):** Used condition `age >= 18` instead of `age > 18` as requested. <br>3. **Task 5 (Calculator):** Division function lacks safety validation check for division by zero. |
| **Input/Output & Execution** | 3 | **3** | **Excellent.** All files compile successfully under `g++` and run cleanly. Console outputs are clear. |

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
Dear Noor Ul Ain,
While the logic of the C++ code files compiles successfully, this entire submission is a direct, **100% duplicate** of student **2025-SE-04**'s code files across all 5 tasks. 

Plagiarism is strictly prohibited. You must write and run your own code to master class structures and programming logic. Copying other students' submissions has resulted in a flat penalty deduction of 3 marks, bringing your final score to 7/12. Please make sure that all future labs are done independently.
