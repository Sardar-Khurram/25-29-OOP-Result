# Lab 2 Evaluation Report (All Tasks)
**Student Roll Number:** 2025-SE-05  
**Student Name:** Ali Zain-Ul-Abdin  

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** Correct class structure. Header files are organized cleanly with proper include guards. Objects are instantiated properly (including instantiating two objects, `s1` and `s2`, in Task 1). |
| **Member Variables** | 3 | **3** | **Excellent.** attributes are clearly defined with correct C++ data types. Temperature values in Task 4 are correctly defined as `float` (which avoids integer division issues). |
| **Member Functions (Inside/Outside)** | 3 | **2** | **Good.** Method locations follow instructions (inline vs outline). Excellent logical check for voter eligibility (`age > 18`) and double-object output display in Task 1. <br><br> *Deduction Reasons:* <br>1. **Task 2 (Rectangle):** The functions are named `input()`, `displayArea()`, and `displayPerimeter()` instead of the requested names (`setDimensions()`, `area()`, `perimeter()`). Also, `displayArea()` and `displayPerimeter()` return `void` instead of returning the calculations. <br>2. **Task 5 (Calculator):** In `header5.h`, the function `divide()` is defined to return `float`, but it does not return a value in the `else` block (division by zero). This causes compiler warnings: <br>`warning: control reaches end of non-void function [-Wreturn-type]`. |
| **Input/Output & Execution** | 3 | **3** | **Excellent.** All 5 tasks compile and execute successfully. Prompts are clean and easy to follow. The inclusion of a `do-while` loop in the calculator driver (`Project 05.cpp`) to allow multiple operations is a great usability enhancement! |

---

### **Summary of Results**
* **Total Marks:** **11 / 12** (91.7%)
* **Grade Status:** **Passed with feedback**

### **Overall Teacher Remarks**
Dear Ali Zain-Ul-Abdin,
Outstanding work! Your files are structured very neatly, and your custom Roman Urdu comments show that you put individual thought and effort into this assignment. 

All of your files compile and run successfully. The only minor things to watch out for are:
1. Try to strictly match the requested function names (like `setDimensions()`, `area()`, `perimeter()`) instead of creating your own.
2. In C++, non-void functions must always return a value in all code branches. A missing `return` statement in the `else` block of `Calculator::divide()` triggers compiler warnings. Returning `0` or another sentinel value in the error branch will fix this. Keep up the excellent work!

<br><br>

---
---

<br><br>

---
---

# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-05  
**Student Name:** Ali Zain-Ul-Abdin  

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **0** | **Absent.** Lab 3 task submission is missing from the student repository. |
| **Member Variables** | 3 | **0** | **Absent.** Lab 3 task submission is missing from the student repository. |
| **Member Functions (Inside/Outside)** | 3 | **0** | **Absent.** Lab 3 task submission is missing from the student repository. |
| **Use of Access Specifiers** | 3 | **0** | **Absent.** Lab 3 task submission is missing from the student repository. |
| **Use of Getters/Setters** | 3 | **0** | **Absent.** Lab 3 task submission is missing from the student repository. |
| **Input/Output & Execution** | 3 | **0** | **Absent.** Lab 3 task submission is missing from the student repository. |

---

### **Summary of Results**
* **Total Marks:** **0 / 18 (0%)**
* **Grade Status:** **Absent / Not Submitted**

### **Overall Teacher Remarks**
Dear Ali Zain-Ul-Abdin, Lab 3 submission is missing from your repository folder.
