# Lab 2 Evaluation Report (All Tasks)
**Student Roll Number:** 2025-SE-12  
**Student Name:** Adeeba Mansoor Qureshi

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** All tasks are structured using distinct header files (`student.h`, `rectangle.h`, `voter.h`, `temperature.h`, `calculator.h`) and driver source files (`student.cpp`, etc.). Object creation and usage are correct. |
| **Member Variables** | 3 | **3** | **Excellent.** Data members are defined with appropriate C++ types. Proper use of encapsulation (`private` attributes) is demonstrated across multiple tasks. |
| **Member Functions (Inside/Outside)** | 3 | **1** | **Need Improvement.** While the logic itself is mostly correct (and the Voter eligibility check correctly uses `age > 18`), you did not follow member function scoping rules: <br>1. **Task 2 (Rectangle):** All member functions (`setDimensions`, `area`, `perimeter`) are defined inline *inside* the class. The prompt explicitly requested they be defined *outside*. <br>2. **Task 3 (Voter):** All member functions (`setData`, `isEligible`) are defined *inside* the class instead of *outside* as requested. |
| **Input/Output & Execution** | 3 | **2** | **Good.** All 5 tasks compile successfully under `g++` and run. User menu selections are implemented using `switch` structures. <br><br> *Deduction Reason (Task 5):* <br>The division function `Calculator::divide()` (line 25 in `calculator.h`) is defined as `float divide() { return num1 / num2; }`. It lacks a safety validation check for division by zero, which results in division-by-zero behavior if the user inputs `0` for the second number. |

---

### **Summary of Results**
* **Total Marks:** **9 / 12** (75.0%)
* **Grade Status:** **Passed with feedback**

### **Overall Teacher Remarks**
Dear Adeeba,
You have done a great job organizing your tasks into clean header and source files. The structure is neat, and the compilation builds successfully for every task.

To improve, you need to focus on two areas:
1. **Scoping Rules:** Make sure to define your member functions outside the class using the scope resolution operator `::` when the task asks for it (specifically in Tasks 2 and 3). Inline declarations are convenient, but separating declaration from definition is a key concept of C++.
2. **Error Handling:** Always protect arithmetic operations. The calculator division function must have an `if (num2 != 0)` check to prevent runtime errors. Keep up the effort!

<br><br>

---
---

<br><br>

---
---

# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-12  
**Student Name:** Adeeba Mansoor Qureshi

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
Dear Adeeba, Lab 3 submission is missing from your repository folder.
