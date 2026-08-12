# Lab 2 Evaluation Report (All Tasks)

**Student Roll Number:** 2025-SE-32  
**Student Name:** Muhammad Salman  

---

### **Evaluation Rubric Table**

| Criteria | Max Marks | Obtained Marks | Remarks |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | 3 | All 5 classes defined correctly and objects instantiated properly in `main()`. |
| **Member Variables** | 3 | 3 | Data members correctly defined with appropriate access specifiers and data types. |
| **Member Functions (Inside/Outside)** | 3 | 2 | Deduction (-1): Task 4 has an integer division bug (`9/5` evaluates to `1` instead of `9.0/5.0`), and Task 5 `divide()` lacks a division-by-zero check. |
| **Input/Output & Execution** | 3 | 3 | All 5 tasks compile cleanly and execute properly. |
| **Subtotal / Core Score** | **12** | **11** | **Core marks before plagiarism penalty** |
| **Plagiarism Penalty** | - | **-5** | Flat deduction applied due to plagiarized task code. |
| **Final Total** | **12** | **6** | **Final score after all deductions** |

---

### **Summary of Results**

- **Core Score:** 11 / 12
- **Plagiarism Penalty:** -5 Marks
- **Final Marks:** 6 / 12

---

### **Plagiarism Analysis Detail**

> [!WARNING]
> **Plagiarism Detected**  
> `Lab02Task04.cpp` (Temperature conversion class) is a 100% code match with **2025-SE-13**'s `WEEK 2 Task 5.cpp`. A flat penalty of -3 marks has been applied in accordance with the lab grading policy.

---

### **Overall Teacher Remarks**

- **Task 1 (Student):** Functions defined inside class correctly. Good structure.
- **Task 2 (Rectangle):** Functions defined outside class using scope resolution operator `::`. Perimeter formula `2 * (length + width)` is correct.
- **Task 3 (Voter):** Functions defined outside class using `::`. Age check condition (`age > 18`) implemented correctly.
- **Task 4 (Temperature):** Code plagiarized from student 2025-SE-13. Contains logic bug: expression `celsius * 9/5 + 32` performs integer division (`9/5` = 1), causing incorrect Fahrenheit conversion calculations. Should use `9.0 / 5.0` or floating-point literals.
- **Task 5 (Calculator):** Functions defined outside using `::`. Missing guard/validation for division by zero in `divide()`.
