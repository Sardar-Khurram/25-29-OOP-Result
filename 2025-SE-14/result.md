# Lab 2 Evaluation Report (All Tasks)
**Student Roll Number:** 2025-SE-14  
**Student Name:** Komal Shafique  

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** All tasks are implemented cleanly with correct class structure. The `Task 06` directory shows high structural quality, re-organizing all files into custom header files (`student.h`, `rectangle.h`, `Voter.h`, `Temperature.h`, `calculator.h`) and an integrated `main.cpp` driver. |
| **Member Variables** | 3 | **3** | **Excellent.** attributes (like `name`, `rollNumber`, `marks`, `length`, `width`, `age`, `celsius`, `num1`, `num2`) are defined clearly with proper data types. |
| **Member Functions (Inside/Outside)** | 3 | **2** | **Good.** Separated inside/outside definitions correctly (inline inside the class for Task 1, outside the class using scope resolution `::` for Tasks 2 & 3). The Voter check strictly uses `age > 18`. <br><br> *Deduction Reason (Task 4):* <br>In `Task 4.cpp` (line 8) and `Task 06/Temperature.h` (line 10), your conversion formula has an integer division bug: `float fahrenheit = celsius * (9/5) + 32;`. Because `9` and `5` are both integers, `9/5` evaluates to `1` in C++. This means the code computes `celsius + 32` instead of `(celsius * 1.8) + 32`. |
| **Input/Output & Execution** | 3 | **3** | **Excellent.** All standalone tasks compile cleanly using `g++` and execute. The menu-driven calculator task handles division-by-zero check correctly in `divide()`. |

---

### **Summary of Results**
* **Total Marks:** **11 / 12** (91.7%)
* **Grade Status:** **Passed with feedback**

### **Overall Teacher Remarks**
Dear Komal,
Outstanding performance on Lab 2! Your code is highly organized, and Task 6 is structured beautifully with clear custom headers and driver executables.

The only issue in your submission is a classic C++ logical error in Task 4's temperature conversion: you wrote `celsius * (9/5) + 32`. Because both `9` and `5` are integers, the compiler performs integer division and truncates `9/5` to `1`. Writing it as `celsius * (9.0 / 5.0) + 32` or `celsius * 1.8 + 32` will solve this and give accurate results. Excellent job otherwise!

<br><br>

---
---

<br><br>

---
---

# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-14  
**Student Name:** Komal Shafique  

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | Excellent. Correct class structure with object creation in `Product.h` and `Main.cpp`. |
| **Member Variables** | 3 | **3** | Excellent. Relevant attributes defined clearly with proper data types. |
| **Member Functions (Inside/Outside)** | 3 | **3** | Excellent. Functions defined and used correctly as per instruction. |
| **Use of Access Specifiers** | 3 | **3** | Excellent. All data members are private and accessed via public methods. |
| **Use of Getters/Setters** | 3 | **3** | Excellent. Proper getters/setters used with validation and clear naming. |
| **Input/Output & Execution** | 3 | **3** | Excellent. Takes input and displays output correctly and clearly. |

---

### **Summary of Results**
* **Total Marks:** **18 / 18 (100%)**
* **Grade Status:** **Excellent (Full Marks)**

### **Overall Teacher Remarks**
Dear Komal, Flawless submission! You implemented encapsulation, setter validation, and test execution perfectly. Keep up the great work!
