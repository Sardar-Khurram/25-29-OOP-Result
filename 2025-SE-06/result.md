# Lab 2 Evaluation Report (All Tasks)
**Student Roll Number:** 2025-SE-06  
**Student Name:** Maryam Jamil  

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** Correct class structure. Header guards are used properly. Class object instantiation is done correctly in all individual tasks, as well as inside the unified `Task 6/main.cpp` project. |
| **Member Variables** | 3 | **3** | **Excellent.** Attributes (e.g., `name`, `rollNumber`, `marks`, `length`, `width`, `age`, `celsius`, `fahrenheit`, `num1`, `num2`) are defined clearly with correct C++ data types. |
| **Member Functions (Inside/Outside)** | 3 | **2** | **Good.** Method locations follow instructions (inline vs outline). Excellent implementation of Voter eligibility logic (`age > 18`) and Calculator operations. <br><br> *Deduction Reasons:* <br>1. **Task 2.cpp (Perimeter Bug):** The formula used for perimeter in `Task 2.cpp` has a mathematical operator precedence bug: `2*length+width`. This evaluates to `(2 * length) + width`, which is incorrect. *(Note: This was fixed correctly as `2*(length+width)` in the refactored `Task 6/Rectangle.h`, but the bug remains in the standalone `Task 2.cpp`).* |
| **Input/Output & Execution** | 3 | **3** | **Excellent.** All 5 tasks and the Task 6 integrated driver compile successfully with `g++` without warnings or errors. Console execution is smooth, prompting the user clearly. |

---

### **Summary of Results**
* **Total Marks:** **11 / 12** (91.7%)
* **Grade Status:** **Passed with feedback**

### **Overall Teacher Remarks**
Dear Maryam,
Excellent work on Lab 2! All of your files compile and execute correctly, and your folder structure is very organized. You also did a great job re-organizing all 5 programs into the separate headers inside the Task 6 folder.

The only minor point to note is the mathematical logic error in the perimeter formula inside `Task 2.cpp` where you wrote `2*length+width` (omitting parentheses). While you correctly resolved this in `Task 6/Rectangle.h` by writing `2*(length+width)`, make sure that you check the standalone files for logical bugs as well. Keep up the high standard of your work!

<br><br>

---
---

<br><br>

---
---

# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-06  
**Student Name:** Maryam Jamil  

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | Excellent. Correct class structure with object creation; proper syntax in `Product.h` and `Main.cpp`. |
| **Member Variables** | 3 | **3** | Excellent. Relevant attributes defined clearly with proper data types. |
| **Member Functions (Inside/Outside)** | 3 | **3** | Excellent. Functions defined and used correctly as per instruction. |
| **Use of Access Specifiers** | 3 | **3** | Excellent. All data members are private and accessed via public methods. |
| **Use of Getters/Setters** | 3 | **3** | Excellent. Proper getters/setters used with validation (`!n.empty()`, `p > 0`, `q >= 0`) and clear naming. |
| **Input/Output & Execution** | 3 | **3** | Excellent. Takes input and displays output correctly and clearly. |

---

### **Summary of Results**
* **Total Marks:** **18 / 18 (100%)**
* **Grade Status:** **Excellent (Full Marks)**

### **Overall Teacher Remarks**
Dear Maryam, Perfect submission! Your header modularization, setter input validation, and test execution fully satisfy all rubric criteria. Well done!
