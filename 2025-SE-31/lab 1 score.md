# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-31
**Student Name:** Khawaja Absar Ali
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                          |
| :----------------------------------------- | :-----------: | :----------------: | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| **Structure Definition & Member Function** |       3       |        **2**       | **Good.** Task 1 correctly defines a structure containing first name, last name, roll number, and marks, and its member function correctly displays the student's information. However, the required function name is `displayStudentInfo()`, while the submission uses `diplaystudent()` (misspelled and differently named). The functionality works, but it does not exactly follow the required interface. |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** Task 2 correctly implements an array of `Student` structures, accepts multiple student records through user input, and calls `displayStudentInfo()` for each student. I tested it with two student records and both were displayed correctly. The only technical issue is the use of `Student students[n]`, which is a variable-length array and is not standard C++.                          |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** Task 3 correctly uses `Student *ptr = new Student`, assigns all required members through the pointer using `->`, calls `displayStudentInfo()` through the pointer, and properly releases the allocated memory using `delete`.                                                                                                                                                                  |
| **Input, Output & Execution**              |       3       |        **3**       | **Excellent.** All three programs compile and execute successfully. Task 1 correctly displays the student's information, Task 2 was tested with two students and displayed both records correctly, and Task 3 correctly accepts and displays a student's information through a structure pointer. Task 2 produces only a non-fatal warning for its non-standard variable-length array.                        |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **11 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **11 / 12 (91.67%)**
* **Grade Status:** **Excellent**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> The submitted files were evaluated against the Lab 1 requirements. No comparison submission was provided for this evaluation, so a 100% code-match determination cannot be established from the available materials. The Lab 1 policy specifies a **-3 mark penalty** when a student's code is found to be plagiarized or matching 100% with another student's code.

---

### 💬 **Overall Teacher Remarks**

**Dear Khawaja,** your Lab 1 submission demonstrates a **strong understanding of structures, arrays of structures, and structure pointers**. Tasks 2 and 3 satisfy the required functionality and were successfully compiled and executed.

The main issue is in **Task 1**. The assignment specifically requires a member function named:

```cpp
displayStudentInfo()
```

but the submitted code defines:

```cpp
diplaystudent()
```

Although the function itself works correctly and displays the required information, the name is both **different from the specified requirement and misspelled**.

I compiled all three programs using **C++17 with `-Wall -Wextra -pedantic`**. Task 1 and Task 3 compiled without warnings and executed correctly. Task 2 also compiled and executed correctly, including successful testing with two student records, but GCC issued a warning because `Student students[n]` is a variable-length array, which is not part of standard C++.

**Overall performance: Excellent — 11/12.**
