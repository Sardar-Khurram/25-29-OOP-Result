# Lab 2 Evaluation Report (All Tasks)
**Student Roll Number:** 2025-SE-13  
**Student Name:** Areeba Taqdees Mir

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **2** | **Good.** 3 out of 5 required tasks (`Voter`, `Temperature`, `Calculator`) are implemented inside `WEEK 2` (both as separate header/source files and single-file programs). Tasks 1 (`Student`) and 2 (`Rectangle`) were omitted. |
| **Member Variables** | 3 | **2** | **Good.** Attributes across the 3 attempted classes are declared with proper C++ types and encapsulation (`public` / `private` members). |
| **Member Functions (Inside/Outside)** | 3 | **2** | **Good.** Scoping rules are followed (inline and outline using `::`). Voter check uses `age > 18`. Calculator includes division-by-zero check (`if(num2 != 0)`). Temperature conversion uses integer division `9/5`. |
| **Input/Output & Execution** | 3 | **2** | **Good.** Standalone files (`WEEK 2 Task 4.cpp`, `Task 5.cpp`, `Task 6.cpp`) and `Task 1` folder compile cleanly under `g++`. Subfolders `Task 2` and `Task 3` failed compilation due to header file name mismatches (`temp.h` vs `"Temperature.h"`, `voting.h` vs `"Voter.h"`). |

---

### **Summary of Results**
* **Core Score:** **8 / 12**
* **Plagiarism Penalty:** **0 Marks** (No full assignment copy detected)
* **Final Marks Obtained:** **8 / 12** (66.7%)
* **Grade Status:** **Passed with feedback**

---

### **Overall Teacher Remarks**
Dear Areeba,

Upon re-evaluating your `WEEK 2` submission, you implemented 3 tasks (`Voter`, `Temperature`, and `Calculator`). Since your overall repository structure and code are distinct and independent (only 1 single file matched), no plagiarism penalty has been applied to your score.

Key feedback:
1. **Missing Tasks:** Tasks 1 (`Student`) and 2 (`Rectangle`) were not submitted.
2. **File Naming Mismatch:** In `Task 2` and `Task 3` subfolders, `main.cpp` tries to include `"Temperature.h"` and `"Voter.h"`, but the headers are named `temp.h` and `voting.h`, causing compiler include errors.
3. **Temperature Formula:** Use `9.0 / 5.0` to avoid integer division truncation.

Your final mark for Lab 2 is **8/12**.

<br><br>

---
---

<br><br>

---
---

# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-13  
**Student Name:** Areeba Taqdees Mir

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | Excellent. Correct class structure with object creation in `Week3 Task1.cpp`. |
| **Member Variables** | 3 | **3** | Excellent. Relevant attributes defined clearly with proper data types. |
| **Member Functions (Inside/Outside)** | 3 | **3** | Excellent. Functions defined and used correctly as per instruction. |
| **Use of Access Specifiers** | 3 | **3** | Excellent. All data members are private and accessed via public methods. |
| **Use of Getters/Setters** | 3 | **3** | Excellent. Proper getters/setters used with validation (`n != ""`, `p > 0`, `q >= 0`) and clear naming. |
| **Input/Output & Execution** | 3 | **3** | Excellent. Takes input and displays output correctly and clearly. |

---

### **Summary of Results**
* **Total Marks:** **18 / 18 (100%)**
* **Grade Status:** **Excellent (Full Marks)**

### **Overall Teacher Remarks**
Dear Areeba, Excellent work! Your class design, validation logic, and test driver meet all rubric criteria. Great job!
