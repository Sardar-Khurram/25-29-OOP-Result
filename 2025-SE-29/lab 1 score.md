# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-29
**Student Name:** Shiza Mukhtar
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                                                  |
| :----------------------------------------- | :-----------: | :----------------: | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| **Structure Definition & Member Function** |       3       |        **3**       | **Excellent.** Task 1 correctly defines the `Student` structure with `firstName`, `lastName`, `rollNumber`, and `marks`. The required `displayStudentInfo()` member function correctly displays the student's full name and marks. A structure variable is created, all required values are assigned, and the member function is called.                                                                                              |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** Task 2 correctly implements an array of `Student` structures, accepts multiple student records through user input, and calls `displayStudentInfo()` for each student. I tested it with two student records, and both records were entered and displayed correctly. The only technical issue is that `Student students[n]` is a variable-length array, which GCC accepts as an extension but which is not standard C++. |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** Task 3 correctly dynamically allocates a `Student` using `new Student`, assigns all required members through the pointer using `->`, calls `displayStudentInfo()` through the pointer, and correctly releases the allocated memory using `delete`.                                                                                                                                                                     |
| **Input, Output & Execution**              |       3       |        **3**       | **Excellent.** All three programs compiled successfully using C++17. Task 1 and Task 3 executed correctly. Task 2 was tested with two student records and correctly displayed both records. Task 2 generated only a non-fatal warning for its non-standard variable-length array.                                                                                                                                                     |

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

**Dear Shiza,** your Lab 1 submission demonstrates an **excellent understanding of structures, arrays of structures, and pointers to structures**. All three tasks satisfy the required functionality.

Task 1 correctly implements the required `Student` structure and member function. Task 2 correctly handles multiple student records using an array and separate input/display loops. Task 3 correctly demonstrates dynamic allocation, pointer-based member access using `->`, member-function invocation through the pointer, and proper memory cleanup with `delete`.

I **compiled and executed all three programs** using C++17 with warnings enabled. Task 1 compiled and ran successfully. Task 2 compiled and successfully processed two student records, although GCC issued a warning because `Student students[n]` is a variable-length array and is not standard C++. Task 3 compiled and ran successfully.

The variable-length array in Task 2 should ideally be replaced with `vector<Student>` or standard dynamic allocation for fully standard C++.

**Overall performance: Excellent — 12/12.**
