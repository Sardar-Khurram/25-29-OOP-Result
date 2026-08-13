# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-33
**Student Name:** Rohail Abbas
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                 |
| :----------------------------------------- | :-----------: | :----------------: | :--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **3**       | **Excellent.** The Task 1 submission correctly defines the `Student` structure with `firstName`, `lastName`, `rollNumber`, and `marks`. The `displayStudentInfo()` member function correctly displays the student's full name and marks. A structure variable is created, all required values are assigned, and the function is called successfully. |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** The Task 2 submission correctly uses an array of `Student` structures (`Student s[50]`), accepts multiple student records through user input, and calls `displayStudentInfo()` for every student after input is complete. The required student information is stored and displayed correctly.                                         |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** The Task 3 submission correctly declares a pointer to a `Student` structure, points it to a structure object using `ptr = &s1`, assigns all required members through `->`, and calls `displayStudentInfo()` through the pointer. This satisfies the task's pointer-based access and assignment requirement.                           |
| **Input, Output & Execution**              |       3       |        **3**       | **Excellent.** All three submitted programs compile successfully and implement the required program flow. The three files cover all three tasks: the structure-variable implementation, array-of-structures implementation, and pointer-to-structure implementation.                                                                                 |

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

**Dear Rohail,** your Lab 1 submission demonstrates an **excellent understanding of structures, arrays of structures, and structure pointers**.

All three required tasks are present, even though they were not presented in the same order as the question. The files correspond to:

* **Task 1:** Structure variable with assigned values and `displayStudentInfo()`.
* **Task 2:** Array of structures with user input for multiple students.
* **Task 3:** Pointer to a structure with member assignment through `->`.

Task 3 uses:

```cpp
Student s1;
Student *ptr;
ptr = &s1;
```

This is valid for the given requirement because the task asks for a pointer to a structure and assignment/access through that pointer; it does **not** explicitly require `new`/`delete`.

The array implementation uses a fixed-size array of 50 elements, which is a valid and straightforward solution.

**Overall performance: Excellent — 12/12.**
