# Lab 2 Evaluation Report (All Tasks)
**Student Roll Number:** 2025-SE-15  
**Student Name:** Samia Arshad  

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **2** | **Good.** 3 out of 5 tasks (`Calculator`, `Temperature Converter`, `Voting Eligibility`) were submitted inside subfolders in `Week 2`. Good modular structure with separate `.h` headers, `.cpp` implementation files, and `main.cpp` drivers. Tasks 1 (`Student`) and 2 (`Rectangle`) were not attempted. |
| **Member Variables** | 3 | **2** | **Good.** Member variables are declared using proper encapsulation (`private` attributes) and types for the 3 submitted tasks. |
| **Member Functions (Inside/Outside)** | 3 | **2** | **Good.** Member functions are defined outside the classes in `.cpp` files using the scope resolution operator `::`. Voter check correctly uses `age > 18`. Temperature conversion uses integer division `9/5`. Calculator division lacks zero check. |
| **Input/Output & Execution** | 3 | **2** | **Good.** All 3 submitted tasks compile cleanly using `g++` without warnings or errors and execute correctly. Tasks 1 and 2 are missing. |

---

### **Summary of Results**
* **Core Score:** **8 / 12**
* **Plagiarism Penalty:** **0 Marks** (No full assignment copy detected)
* **Final Marks Obtained:** **8 / 12** (66.7%)
* **Grade Status:** **Passed with feedback**

---

### **Overall Teacher Remarks**
Dear Samia,

Your Lab 2 submission in `Week 2` is clean, original, and well-structured. You demonstrated proper Object-Oriented Programming practices by separating header declarations (`.h`) from function implementations (`.cpp`) using the scope resolution operator `::`. All 3 submitted tasks compile and run smoothly, and no plagiarism was detected.

To improve:
1. **Missing Tasks:** Tasks 1 (`Student`) and 2 (`Rectangle`) were omitted. Make sure to complete all assigned tasks in future labs.
2. **Temperature Formula:** Use floating-point literal `9.0 / 5.0` to avoid integer division truncation.
3. **Calculator:** Add a zero check `num2 != 0` inside `divide()` to prevent potential division by zero.

Good work on the tasks completed!
