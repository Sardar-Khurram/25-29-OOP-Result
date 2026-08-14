# Lab 2 Evaluation Report (All Tasks)

**Student Roll Number:** 2025-SE-38  
**Student Name:** Ammar Yasir

---

### Evaluation Rubric Table

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** All classes (`Student`, `Rectangle`, `Voter`, `Temperature`, `Calculator`) are defined correctly and objects are instantiated properly in `main()`. |
| **Member Variables** | 3 | **3** | **Excellent.** Attributes for all classes are declared with appropriate C++ data types across all 5 tasks. |
| **Member Functions (Inside/Outside)** | 3 | **1** | **Needs Improvement.** Followed scoping conventions (inside for Task 1 & Task 4; outside using `::` for Task 2, Task 3, & Task 5), but several critical logic and syntax errors exist:<br>1. **Task 2 (`Rectangle.cpp`):** `area()` uses `area = length + width` (addition instead of multiplication). Perimeter function named `parameter()` (typo) uses wrong formula `2 * (length * width)` (multiplication instead of addition).<br>2. **Task 4 (`Temperature.cpp`):** `covertor()` function declared with `double` return type but lacks a `return` statement.<br>3. **Task 5 (`Calculator.cpp`):** `divide()` function lacks a division-by-zero validation check. |
| **Input/Output & Execution** | 3 | **2** | **Good.** All 5 tasks compile, but with runtime/output issues:<br>1. **Task 2 (`Rectangle.cpp`):** Produces incorrect area output due to formula error; `parameter()` function is never called in `main()`.<br>2. **Task 4 (`Temperature.cpp`):** Triggers compiler warning (`warning: no return statement in function returning non-void`). |

---

### Summary of Results

* **Core Score:** **9 / 12**
* **Plagiarism Penalty:** **0 Marks** (No full assignment copy detected)
* **Final Marks Obtained:** **9 / 12** (75.0%)
* **Grade Status:** **Passed with feedback**

---

### Overall Teacher Remarks

Dear Ammar,

Your Lab 2 submission demonstrates a solid understanding of object-oriented concepts, including class definitions, attribute declarations, and function scoping rules (inline inside definitions vs. outside definitions using the `::` scope resolution operator). All 5 tasks compile successfully and no plagiarism was detected.

However, several mathematical, syntactic, and structural errors affected your score:
1. **Task 2 (`Rectangle.cpp`):** 
   - `area()` calculates `length + width` instead of `length * width`.
   - `parameter()` (typo for perimeter) calculates `2 * (length * width)` instead of `2 * (length + width)`.
   - The perimeter function is defined but never invoked in `main()`.
2. **Task 4 (`Temperature.cpp`):**
   - The `covertor()` method is declared with return type `double` but contains no `return` statement, generating compiler warnings. Either return the calculated value or change the return type to `void`.
3. **Task 5 (`Calculator.cpp`):**
   - Missing validation check for division by zero (`num2 == 0`) inside the `divide()` function.

Please double-check mathematical formulas, ensure non-void functions always return values, and test all functions in `main()`. Keep up the hard work!
