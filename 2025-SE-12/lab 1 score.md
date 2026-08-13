# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-12
**Student Name:** Adeeba Mansoor Qureshi
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                                    |
| :----------------------------------------- | :-----------: | :----------------: | :---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **3**       | **Excellent.** Task 1 correctly defines the `Student` structure with `firstName`, `lastName`, `rollNumber`, and `marks`. The `displayStudentInfo()` function correctly displays the student's full name and marks. A structure variable is created, all required members are assigned values, and the function is called successfully.                                                                                  |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** Task 2 correctly declares an array of `Student` structures, accepts multiple student records through user input, and calls `displayStudentInfo()` for every student. I tested the program with two student records and both records were displayed correctly. The only issue is that `Student students[n]` is a variable-length array, which is accepted by GCC as an extension but is not standard C++. |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** Task 3 correctly allocates a `Student` object dynamically using `new Student`, assigns all members through the pointer using `->`, calls `displayStudentInfo()` through the pointer, and correctly releases the allocated memory with `delete`.                                                                                                                                                          |
| **Input, Output & Execution**              |       3       |        **3**       | **Excellent.** All three programs compile successfully with `g++ -std=c++17`. Task 1 and Task 3 execute correctly, and Task 2 was tested with multiple student records and produced the expected output.                                                                                                                                                                                                                |

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

**Dear Adeeba,** your Lab 1 submission demonstrates an **excellent understanding of structures, arrays of structures, and structure pointers**. All three tasks satisfy the required functionality.

Task 1 correctly implements the basic `Student` structure and member function. Task 2 correctly extends the solution to multiple students using an array of structures and user input. Task 3 demonstrates proper pointer-based structure access, dynamic allocation, member assignment through `->`, and memory cleanup with `delete`.

All three programs were compiled and tested successfully. Task 2 produced the expected results when tested with multiple student records.

One technical improvement is recommended: replace the variable-length array `Student students[n]` with standard C++ dynamic allocation such as `new Student[n]` or a `vector<Student>`.

**Overall performance: Excellent — 12/12.**
