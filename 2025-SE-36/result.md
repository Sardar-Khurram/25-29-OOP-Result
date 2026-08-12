# Lab 2 Evaluation Report (All Tasks)

**Student Roll Number:** 2025-SE-36  
**Student Name:** Hamza Ali  

### Evaluation Rubric Table

| Criteria | Max Marks | Marks Obtained | Teacher's Feedback & Explanation |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | 3 | All 5 required classes were properly defined and instantiated into objects in `main()`. |
| **Member Variables** | 3 | 2 | Deduction (-1): In Task 1 (Student), `getData()` does not prompt for or read `rollNo`, leaving the attribute uninitialized. |
| **Member Functions (Inside/Outside)** | 3 | 2 | Deduction (-1): Task 2 member functions are defined inside the class (instead of outside as required) and miss explicit return types. Task 3 `isEligible()` defined inside class. Task 3 uses `age >= 18` instead of `age > 18`. Task 5 lacks division-by-zero check. |
| **Input/Output & Execution** | 3 | 2 | Deduction (-1): Task 1 prints uninitialized garbage value for `rollNo`. Task 2 produces a compiler warning (`warning: no return statement in function returning non-void` for `setDimension()`). Task 4 suffers from an integer division bug (`9/5` evaluates to `1`), resulting in incorrect temperature conversion. |
| **Total Marks** | **12** | **9** | **Final Score: 9 / 12** |

> **Note on Plagiarism:** No plagiarism detected.

---

### Summary of Results

* **Task 1 (Student):**
  * Compiles successfully.
  * Functions defined INSIDE class.
  * **Bug:** `getData()` does NOT prompt for or read `rollNo` (only reads name and marks). `displayData()` prints all 3 attributes, but `rollNo` will be uninitialized.

* **Task 2 (Rectangle):**
  * Compiles with warnings.
  * Functions defined INSIDE class (NOT outside as required by task).
  * Missing return types on `setDimension()`, `area()`, and `perimeter()` — compiler defaults to implicit `int`.
  * Compiler warning: `warning: no return statement in function returning non-void` for `setDimension()`.
  * Perimeter formula is correctly written as `2*(length+width)`.

* **Task 3 (Voter):**
  * Compiles successfully.
  * `isEligible()` defined INSIDE class (should be outside).
  * Logic uses `age >= 18` instead of `age > 18`.

* **Task 4 (Temperature):**
  * Compiles successfully.
  * Functions defined INSIDE class.
  * **Bug:** Uses `celsius*9/5+32` — integer division bug (`9/5` evaluates to `1`), leading to wrong conversion results.

* **Task 5 (Calculator):**
  * Compiles successfully.
  * Functions defined OUTSIDE class using scope resolution operator `::` — good standard implementation.
  * Missing division-by-zero validation in `divide()`.

---

### Overall Teacher Remarks

Good overall effort! All 5 tasks compiled successfully and you demonstrated a solid basic understanding of object-oriented programming concepts. To improve your code quality in future labs:
1. **Class Design & Scope:** Make sure to practice defining member functions outside the class using the scope resolution operator `::` when specified by the task requirements.
2. **Input Completeness:** Ensure every member variable is properly initialized and prompted for during data input methods.
3. **Data Types & Integer Division:** Be cautious with arithmetic operations like `9/5` which perform integer truncation in C++. Use floating-point literals (`9.0 / 5.0` or `1.8`) for accurate calculations.
4. **Function Return Types:** Always explicitly define function return types (e.g., `void`, `double`) to avoid compiler warnings and undefined return behaviors.
