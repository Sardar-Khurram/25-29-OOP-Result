# Lab 2 Evaluation Report (All Tasks)
**Student Roll Number:** 2025-SE-18  
**Student Name:** Tahreem Rasheed

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** All 5 tasks are successfully implemented in separate source files, containing well-defined class definitions and separate header files. Class objects are instantiated properly in the client code files and perform the required operations. |
| **Member Variables** | 3 | **3** | **Excellent.** Data members are defined clearly with correct C++ data types. Excellent use of encapsulation (`private` attributes) is demonstrated across the tasks. |
| **Member Functions (Inside/Outside)** | 3 | **2** | **Good.** Separated inside/outside definitions correctly (inline inside the class for Task 1, outside the class using scope resolution `::` for Tasks 2, 3, and 5). Voter eligibility check uses `age > 18`. <br><br> *Deduction Reason (Task 4):* <br>In `header_temprature.h` (line 13), your conversion formula has an integer division bug: `celsius * 9/5 + 32`. Because both `9` and `5` are integers, the compiler performs integer division and truncates `9/5` to `1`. This means the code calculates `celsius + 32` instead of `celsius * 1.8 + 32`. |
| **Input/Output & Execution** | 3 | **3** | **Excellent.** All C++ source files compile successfully under `g++` and execute cleanly. Console outputs are clear. Task 5 (`Calculator`) correctly includes a division-by-zero check. |

---

### **Summary of Results**
* **Total Marks:** **11 / 12** (91.7%)
* **Grade Status:** **Passed with feedback**

### **Overall Teacher Remarks**
Dear Tahreem,
Very good job on Lab 2! Your folder structure is organized cleanly, separating the header class templates (`header_info.h`, etc.) from their execution drivers. All of your C++ code compiles successfully and runs.

Please note the integer division logical bug in Task 4's temperature converter: you wrote `celsius * 9/5 + 32`. In C++, division between integers results in an integer, so `9/5` evaluates to `1`. Writing it as `celsius * 9.0/5.0 + 32` or `celsius * 1.8 + 32` will solve this and calculate the temperature conversion correctly. Aside from this minor error, your work is excellent!
