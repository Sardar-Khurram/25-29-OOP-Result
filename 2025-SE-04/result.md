# Lab 2 Evaluation Report (All Tasks)
**Student Roll Number:** 2025-SE-04  
**Student Name:** Wajeeha Batool  

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** Correct class structure across all tasks. Header files (e.g., `header1.h`, `header2.h`, etc.) are properly structured with header guards. Object creation is done correctly in all main source files. |
| **Member Variables** | 3 | **2** | **Good.** Attributes are defined with appropriate types, but there are two design flaws: <br>1. **Task 4 (Temperature):** Member variables are declared as `int`, causing truncation of decimal values during conversion. They should be `float` or `double`. <br>2. **Task 5 (Calculator):** The attributes `num1` and `num2` inside the `Calculator` class are completely unused. Member functions take parameters `(float a, float b)` instead of operating on the class attributes. |
| **Member Functions (Inside/Outside)** | 3 | **2** | **Good.** The student followed instructions regarding inside/outside class definitions. <br><br> *Deduction Reasons:* <br>1. **Task 2 (Rectangle):** Functions `area()` and `perimeter()` are declared with return type `int` but do not return any value (they just print to console). This generates compiler warnings: <br>`warning: no return statement in function returning non-void [-Wreturn-type]`. <br>2. **Task 3 (Voter):** Used `age >= 18` instead of `age > 18` as strictly instructed. <br>3. **Task 5 (Calculator):** Division function lacks a validation check for division by zero. |
| **Input/Output & Execution** | 3 | **3** | **Excellent.** All 5 tasks compile and execute successfully. Console interaction is clear and prompts the user properly. |

---

### **Summary of Results**
* **Total Marks:** **10 / 12** (83.3%)
* **Grade Status:** **Passed with feedback**

### **Overall Teacher Remarks**
Dear Wajeeha,
You have done a very good job in organizing your folders and files. All 5 programs compile successfully, and your file separation into custom headers is cleanly done.

To improve your programming practices, keep the following in mind:
1. When a function is declared to return a type (like `int`), you must use a `return` statement; otherwise, it triggers compiler warnings and undefined behavior.
2. In object-oriented design, class attributes should store the object's state, and functions should operate on these attributes rather than taking them as arguments (as in your Calculator class).
3. Always remember to handle potential runtime errors like division by zero. Keep up the good work!

<br><br>

---
---

<br><br>

---
---

# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-04  
**Student Name:** Wajeeha Batool  

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
Dear Wajeeha, Lab 3 submission is missing from your repository folder.
