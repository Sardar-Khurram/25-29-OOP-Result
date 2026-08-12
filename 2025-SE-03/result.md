# Lab 2 Evaluation Report (All Tasks)
**Student Roll Number:** 2025-SE-03  
**Student Name:** Muhammad Zain Mughal  

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **2** | **Good.** Classes are defined correctly using separation of concern (`.h` files for class structure and `.cpp` files for testing). Header guards are present. However, for Task 3, the driver file `Voter.cpp` is empty, so no object was instantiated or tested. |
| **Member Variables** | 3 | **3** | **Excellent.** All relevant attributes (like `name`, `rollNumber`, `marks`, `length`, `width`, `age`, `celsius`, `num1`, `num2`) are defined clearly with correct data types. |
| **Member Functions (Inside/Outside)** | 3 | **3** | **Excellent.** You followed the method location instructions perfectly: <br>1. **Inside Class:** Defined inline in Task 1 (`getData`, `displayData`) and Task 4 (`convert`, `display`). <br>2. **Outside Class:** Defined outside in Task 2, 3, and 5 using the scope resolution operator `::`. <br>3. **Validation:** Good inclusion of division-by-zero validation check in Task 5 (`Calculator::divide`). |
| **Input/Output & Execution** | 3 | **2** | **Good.** Tasks 1, 2, 4, and 5 compile and run cleanly, offering clear user-friendly console I/O. However, Task 3 (`Voter.cpp`) fails to compile or execute because the file is entirely empty (0 bytes) and lacks a `main()` function. |
| **Copied (Plagiarism)** | 3 | **3** | **Original Work.** No matching code or plagiarism detected. The structure, comments, and file organization are completely distinct. |

---

### **Summary of Results**
* **Total Marks:** **13 / 15** (86.7%)
* **Grade Status:** **Passed with feedback**

### **Overall Teacher Remarks**
Dear Muhammad Zain,
Your code structure is very neat, and you did an excellent job separating class interface headers (`.h`) from execution files (`.cpp`). Your C++ implementation for outside functions is flawless, especially with the solid division validation check in Task 5.

The main drawback is that you forgot to implement the test code for Task 3—your `Voter.cpp` was left empty, resulting in a compilation error for that task. Make sure to double check that all your files are populated and tested before submission. Great effort otherwise!
