# Lab 2 Evaluation Report

**Student Roll Number:** 2025-SE-40  
**Student Name:** Muhammad Haris  

---

### **Evaluation Rubric Table**

| Criteria | Max Marks | Obtained Marks | Remarks |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | 3 | Correct `.h` header and `.cpp` source file separation with header guards across tasks. |
| **Member Variables** | 3 | 3 | Data members defined with appropriate access specifiers and data types. |
| **Member Functions (Inside/Outside)** | 3 | 2 | Deduction (-1): Task 3 uses `age >= 18` instead of `age > 18`; Task 4 `displayResult()` is declared returning `double` but lacks a `return` statement; Task 5 division-by-zero check prints warning but still executes division. |
| **Input/Output & Execution** | 3 | 3 | All 5 tasks compile successfully and execute. |
| **Subtotal / Core Score** | **12** | **11** | **Core marks before plagiarism penalty** |
| **Plagiarism Penalty** | - | **-5** | Flat deduction applied due to plagiarized task files. |
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
> Tasks 1, 2, and 3 (`header1.h`, `project1.cpp.cpp`, `header2.h`, `project2.cpp.cpp`, `header3.h`, `project3.cpp.cpp`) are 100% identical matches with student **2025-SE-42**'s files. A flat penalty of -3 marks has been deducted from the core score in accordance with course policy.

---

### **Overall Teacher Remarks**

- **Task 1 (Student):** Member functions defined inside class in `header1.h`. Correct implementation. Plagiarized from 2025-SE-42.
- **Task 2 (Rectangle):** Member functions defined outside class using `::` scope resolution operator in `header2.h`. Perimeter formula `2 * (length + width)` is correct. `area()` and `perimeter()` return `void` and print directly. Plagiarized from 2025-SE-42.
- **Task 3 (Voter):** `isEligible()` defined outside class using `::` in `header3.h`. Deducted for using condition `age >= 18` instead of strict `age > 18`. Plagiarized from 2025-SE-42.
- **Task 4 (Temperature):** Functions defined inside class in `header4.h`. Floating-point conversion formula `celcius * 9.0 / 5.0 + 32.0` is correct. However, `displayResult()` is declared with return type `double` but missing a `return` statement, generating compiler warnings.
- **Task 5 (Calculator):** Functions defined inside class in `header5.h`. Division-by-zero check (`if num2 == 0`) is flawed as it prints a warning but still proceeds to execute `return num1 / num2`, which will cause undefined behavior on zero division.
- **Academic Integrity:** Plagiarism was detected for Tasks 1–3 with 2025-SE-42. Please ensure all future work is submitted independently.
