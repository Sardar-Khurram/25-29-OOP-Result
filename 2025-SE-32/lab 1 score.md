# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-32
**Student Name:** Laiba Imtiaz
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                                                                |
| :----------------------------------------- | :-----------: | :----------------: | :-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **3**       | **Excellent.** Task 1 correctly defines the `Student` structure with `firstName`, `lastName`, `rollNumber`, and `marks`. The required `displayStudentInfo()` function correctly displays the student's full name and marks. A structure variable is created, all required values are assigned, and the member function is called successfully.                                                                                                      |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** Task 2 correctly implements an array of `Student` structures, accepts multiple student records through user input, and calls `displayStudentInfo()` for every student. I tested it with two student records, and both records were entered and displayed correctly. The only technical issue is the use of `Student students[n]`, which is a variable-length array and is not standard C++, although GCC accepts it as an extension. |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** Task 3 correctly dynamically allocates a `Student` using `new Student`, assigns all required members through the pointer using `->`, calls `displayStudentInfo()` through the pointer, and properly releases the memory using `delete`.                                                                                                                                                                                              |
| **Input, Output & Execution**              |       3       |        **3**       | **Excellent.** All three programs compiled successfully with `g++ -std=c++17 -Wall -Wextra -pedantic`. Task 1 executed correctly. Task 2 was tested with two student records and displayed both records correctly. Task 3 also executed correctly with user-provided student information. Task 2 generated only a non-fatal warning for its non-standard variable-length array.                                                                     |

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

**Dear Laiba,** your Lab 1 submission demonstrates an **excellent understanding of structures, arrays of structures, and structure pointers**. All three tasks satisfy the required functionality.

Task 1 correctly implements the required `Student` structure, member function, structure variable, and data assignment. Task 2 correctly handles multiple student records through an array and separate input and display loops. Task 3 demonstrates proper dynamic allocation, pointer-based access using `->`, invocation of `displayStudentInfo()` through the pointer, and correct memory cleanup with `delete`.

I **compiled and executed all three programs using C++17 with warnings enabled**. All three compiled successfully. Task 2 produced one compiler warning because `Student students[n]` is a variable-length array, which GCC permits as an extension but which is **not standard C++**. This did not prevent the program from executing correctly.

For a standard C++ solution, Task 2 should use `vector<Student>` or standard dynamic allocation instead of a variable-length array.

**Overall performance: Excellent — 12/12.**
