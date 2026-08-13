# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-02
**Student Name:** Shahnza Munir
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                              |
| :----------------------------------------- | :-----------: | :----------------: | :---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **3**       | **Excellent.** The `Student` structure correctly contains `firstName`, `lastName`, `rollNumber`, and `marks`. The `displayStudentInfo()` member function correctly displays the student's full name and marks. Task 1 also correctly creates a structure variable, assigns values, and calls the member function. |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** Task 2 correctly implements an array of `Student` structures, accepts the number of students and their details through user input, and calls `displayStudentInfo()` for each student.                                                                                                              |
| **Structure Pointer & Dynamic Access**     |       3       |        **2**       | **Good.** Task 3 correctly creates a dynamically allocated `Student` object using `new`, accesses its members through the structure pointer using `->`, and calls `displayStudentInfo()` through the pointer. However, the allocated memory is **not released using `delete`**, resulting in a memory leak.       |
| **Input, Output & Execution**              |       3       |        **3**       | **Excellent.** All three tasks contain the required input/output functionality. Task 1 directly assigns student information, while Tasks 2 and 3 accept student information from the user and display the required name and marks.                                                                                |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **11 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **11 / 12 (91.67%)**
* **Grade Status:** **Excellent**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> The submitted files were evaluated against the Lab 1 requirements. No comparison submission was provided for this evaluation, so a 100% code-match determination cannot be established from the available materials. The Lab 1 policy specifies a **-3 mark penalty** when a student's code is found to be 100% identical to another student's code.

---

### 💬 **Overall Teacher Remarks**

**Dear Shahnza,** your Lab 1 submission demonstrates a **strong understanding of structures, arrays of structures, and structure pointers**. All three tasks implement the main requirements successfully.

Task 3 is functionally correct in its use of dynamic allocation and pointer-based member access. However, after allocating memory using `new Student`, the program does not release that memory using `delete`. This should be corrected to avoid a **memory leak**.

Also, Task 2 uses a variable-length array (`Student students[n]`), which is not standard C++ and may cause portability issues with strict C++ compilers. A fixed-size array or dynamic allocation would be preferable.

**Overall performance: Excellent — 11/12.**
