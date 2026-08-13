# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-15
**Student Name:** Samia Arshad
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                     |
| :----------------------------------------- | :-----------: | :----------------: | :--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **3**       | **Excellent.** Task 1 correctly defines the `Student` structure with `firstName`, `lastName`, `rollNumber`, and `marks`. The `displayStudentInfo()` function correctly displays the student's full name and marks. A structure variable is created, all required values are assigned, and the member function is called.                 |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** Task 2 correctly implements an array of `Student` structures, accepts multiple student records through user input, and calls `displayStudentInfo()` for each student. The complete input loop is followed by a separate display loop, so all records are entered before being displayed.                                  |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** Task 3 correctly creates a dynamically allocated `Student` using `new Student`, assigns all members through the pointer using `->`, calls `displayStudentInfo()` through the pointer, and correctly releases the allocated memory using `delete`.                                                                         |
| **Input, Output & Execution**              |       3       |        **3**       | **Excellent.** All three programs compiled successfully with `g++ -std=c++17 -Wall -Wextra -pedantic` and executed successfully. Task 2 produces a compiler warning because `Student students[n]` is a variable-length array, which is accepted by GCC as an extension but is not standard C++. This warning does not prevent execution. |

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

**Dear Samia,** your Lab 1 submission demonstrates an **excellent understanding of structures, arrays of structures, and structure pointers**. All three tasks satisfy the required functionality.

Task 1 correctly implements the basic structure and member function. Task 2 correctly handles multiple student records using an array of structures, user input, and a separate display loop. Task 3 demonstrates proper pointer-to-structure usage, dynamic allocation with `new`, member access through `->`, member-function invocation through the pointer, and correct memory cleanup with `delete`.

All three programs were **compiled and executed successfully**. The only technical issue identified was the use of `Student students[n]` in Task 2, which is a variable-length array. GCC accepts it as an extension, but it is **not standard C++**. A `vector<Student>` or standard dynamic allocation would be preferable.

**Overall performance: Excellent — 12/12.**
