# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-06
**Student Name:** Maryam Jamil
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                         |
| :----------------------------------------- | :-----------: | :----------------: | :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **3**       | **Excellent.** Task 1 correctly defines the `Student` structure with first name, last name, roll number, and marks. The `displayStudentInfo()` member function correctly displays the student's full name and marks. A structure variable is created, all required values are assigned, and the member function is called. The program compiles and runs successfully.                                       |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** Task 2 correctly implements an array of `Student` structures, accepts multiple student records through user input, and calls `displayStudentInfo()` for each student. Testing with multiple student records produced the expected output. The use of `Student student[n]` is a **non-standard variable-length array in C++**; GCC accepts it as an extension, but it is not ISO C++ standard. |
| **Structure Pointer & Dynamic Access**     |       3       |        **1**       | **Need Improvement.** Task 3 correctly attempts to use a structure pointer and the `->` operator, but the statement `Student *student = &S1;` references **`S1`, which is never declared**. Compilation fails with an error that `S1` was not declared in this scope. Consequently, the pointer cannot actually be used to store/access the student record or call the member function.                      |
| **Input, Output & Execution**              |       3       |        **2**       | **Good.** Tasks 1 and 2 compile and execute successfully and produce the required student information. However, Task 3 fails to compile because of the undeclared `S1`, so the complete submission does not execute successfully.                                                                                                                                                                            |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **9 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Good**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> The submitted files were evaluated against the Lab 1 requirements. No comparison submission was provided for this evaluation, so a 100% code-match determination cannot be established from the available materials. The Lab 1 policy specifies a **-3 mark penalty** when a student's code is found to be plagiarized or matching 100% with another student's code.

---

### 💬 **Overall Teacher Remarks**

**Dear Maryam,** your Lab 1 submission demonstrates a **good understanding of structures and arrays of structures**. Tasks 1 and 2 correctly implement the required structure, member function, structure variable, array, user input, and output functionality.

Task 1 was successfully compiled and executed, producing the required full name and marks. Task 2 was also compiled and tested with multiple student records and produced the expected results.

However, **Task 3 has a significant error**:

```cpp
Student *student = &S1;
```

`S1` has not been declared anywhere in the program. This causes a compilation error:

```text
error: 'S1' was not declared in this scope
```

A valid implementation would first create a structure object, for example:

```cpp
Student s1;
Student *student = &s1;
```

or dynamically allocate the structure if desired.

Task 2 also uses a variable-length array (`Student student[n]`), which GCC accepts as an extension but is **not standard C++**. A fixed-size array or dynamic allocation would be preferable.

**Overall performance: Good — 9/12.**
