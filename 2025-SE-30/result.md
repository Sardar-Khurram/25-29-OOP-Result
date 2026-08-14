# Lab 2 Evaluation Report (All Tasks)
**Student Roll Number:** 2025-SE-30
**Student Name:** Malik Waqar Latif

---

### **Evaluation Rubric Table**

| Criteria | Max Marks | Marks Obtained | Teacher's Feedback & Explanation |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | 3 | All 5 classes were properly defined with correct syntax, appropriate access specifiers, and valid object instantiation in `main()`. |
| **Member Variables** | 3 | 3 | Data members across all tasks were declared using correct data types and appropriate encapsulation. |
| **Member Functions (Inside/Outside)** | 3 | 2 | Member functions were defined inside and outside classes as required. Deductions applied due to implementation logic bugs: Task 2 uses an incorrect perimeter formula (`2 * length * width` instead of `2 * (length + width)`) and has a typo in the method name (`perameter`); Task 3 uses `>= 18` instead of strictly `> 18`; Task 5 lacks a division-by-zero check in `divide()`. |
| **Input/Output & Execution** | 3 | 2 | Code compiles without syntax errors for all 5 tasks, but runtime/output bugs were observed: Task 1 `displayData()` prints labels for roll number and marks without streaming the actual values; Task 2 produces incorrect output for perimeter due to the formula bug; Task 4 integer division (`9/5 = 1`) distorts temperature conversion results. |

---

### **Summary of Results**

- **Total Score:** 10 / 12
- **Plagiarism Deduction:** 0
- **Final Marks:** 10 / 12
- **Compilation Status:** All 5 tasks compiled successfully.
- **Plagiarism Status:** No plagiarism detected.

---

### **Overall Teacher Remarks**

Good work overall! You have a solid grasp of basic OOP concepts in C++, including class structure, member variables, and object instantiation. However, please keep the following improvements in mind:

1. **Task 1 (Student):** In `displayData()`, remember to output the variable values (`<< rollnumber` and `<< marks`) alongside the text labels.
2. **Task 2 (Rectangle):** Watch out for function typos (`perameter`) and double-check mathematical formulas — perimeter is `2 * (length + width)`, not `2 * length * width`.
3. **Task 3 (Voter):** Pay close attention to logical comparison requirements (strictly `age > 18` vs `age >= 18`).
4. **Task 4 (Temperature):** Be mindful of integer division in C++. Expression `9/5` evaluates to `1`. Use `9.0 / 5.0` or float types to preserve precision.
5. **Task 5 (Calculator):** Always implement safety checks for division by zero to ensure program robustness.
