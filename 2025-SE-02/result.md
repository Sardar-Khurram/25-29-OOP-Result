# Lab 2 Evaluation Report (All Tasks)
**Student Roll Number:** 2025-SE-02  
**Student Name:** Shahnza Munir  

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **2** | **Good.** Individual task C++ files are correctly structured with object creation. However, the header file `Calculator.h` has a compilation error (missing closing curly brace for the `divide()` method and the `Calculator` class scope), which prevents the integrated `main.cpp` driver from compiling. |
| **Member Variables** | 3 | **3** | **Excellent.** All relevant attributes (like `name`, `rollNumber`, `marks`, `length`, `width`, `age`, `celsiusTemp`, etc.) are clearly defined with proper C++ data types. |
| **Member Functions (Inside/Outside)** | 3 | **2** | **Good.** Function separation is mostly followed (inline for Task 1 & 5, outline for Task 2 & 3). <br><br> *Deduction Reasons:* <br>1. **Calculator.h:** Syntactically broken definition of the `divide()` method. <br>2. **OOP Lab 2 Calculator Task.cpp:** `case 4` in the `switch` statement lacks a `break;` statement, causing execution to fall through and print "Invalid Choice!" alongside the result. <br>3. **main.cpp:** The variable `choice` is declared but never read from the user, leading to undefined execution logic. |
| **Input/Output & Execution** | 3 | **1** | **Needs Improvement.** While the individual task files (Student, Rectangle, Voter, Temperature, Calculator) compile and execute correctly, the main unified project file (`main.cpp`) fails to compile due to errors in `Calculator.h`. Also, `main.cpp` is missing user input (`cin >> choice`) for the calculator menu. |
| **Copied (Plagiarism)** | 3 | **3** | **Original Work.** No matching code or plagiarism detected. The code structure is individual and distinct from `2025-SE-01`. |

---

### **Summary of Results**
* **Total Marks:** **11 / 15** (73.3%)
* **Grade Status:** **Passed with feedback**

### **Overall Teacher Remarks**
Dear Shahnza,
You have done a good job completing all 5 tasks individually. The individual task files compile and run successfully.

However, you need to pay close attention to syntactic details when building integrated header files. A missing curly brace in `Calculator.h` broke the compilation of the main entry program (`main.cpp`). Additionally, make sure to test your logical flows—missing a `break;` in the calculator switch statement and failing to read user input for the menu selection are significant logical bugs. Double check your files before submission!
