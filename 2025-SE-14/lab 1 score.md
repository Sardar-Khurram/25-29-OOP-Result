# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-14
**Student Name:** Komal Shafique
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                                                                         |
| :----------------------------------------- | :-----------: | :----------------: | :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **3**       | **Excellent.** Task 1 correctly defines the `Student` structure with `firstName`, `lastName`, `rollNumber`, and `marks`. The `displayStudentInfo()` member function correctly displays the student's full name and marks. A structure variable is created, all required members are assigned, and the function is called successfully.                                                                                                                       |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** Task 2 correctly creates an array of `Student` structures, accepts multiple student records through user input, and displays each student's full name and marks using `displayStudentInfo()`. I tested it with two student records and both were displayed correctly. The only technical issue is that `Student students[n]` is a variable-length array, which is not part of standard C++ and produced a compiler warning under `-pedantic`. |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** Task 3 correctly dynamically allocates a `Student` using `new Student()`, assigns all structure members through the pointer using `->`, calls `displayStudentInfo()` through the pointer, and correctly releases the allocated memory using `delete`.                                                                                                                                                                                         |
| **Input, Output & Execution**              |       3       |        **3**       | **Excellent.** All three tasks compiled successfully with `g++ -std=c++17 -Wall -Wextra -pedantic`. Task 1 and Task 3 executed correctly. Task 2 also executed correctly with multiple student records; it produced only a non-fatal warning because of the non-standard variable-length array.                                                                                                                                                              |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **12 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **12 / 12 (100.0%)**
* **Grade Status:** **Excellent**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> The submitted files were evaluated against the Lab 1 requirements. No comparison submission was provided for this evaluation, so a 100% code-match determination cannot be established from the available materials. The Lab 1 policy specifies a **-3 mark penalty** when a student's code is found to be plagiarized or matching 100% with another student's code.

---

### 💬 **Overall Teacher Remarks**

**Dear Komal,** your Lab 1 submission demonstrates an **excellent understanding of structures, arrays of structures, and structure pointers**. All three tasks satisfy the required functionality.

Task 1 correctly implements the basic structure and member function. Task 2 correctly handles multiple student records through an array of structures and displays each record. Task 3 demonstrates proper pointer-based structure access with `->`, dynamic allocation using `new`, and proper memory cleanup using `delete`.

All three programs were **compiled and executed successfully**. Task 2 generated a compiler warning because `Student students[n]` is a variable-length array. This is accepted by GCC as an extension but is **not standard C++**; `vector<Student>` or dynamic allocation would be preferable in a fully standard C++ solution.

**Overall performance: Excellent — 12/12.**
