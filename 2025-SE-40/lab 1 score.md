# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-40
**Student Name:** Danish Iqbal
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| :----------------------------------------- | :-----------: | :----------------: | :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **2**       | **Good.** Task 1 correctly defines the required four structure members and the member function displays the student's name and marks. However, the required function is `displayStudentInfo()`, while the submission uses `displaystudentinfo(student S)`. The function also unnecessarily takes a `student` object as a parameter instead of using the object's own members. The functionality works, but the required member-function specification is not followed exactly. |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** Task 2 correctly creates an array of `student` structures, accepts multiple student records through user input, and calls the display function for every record after input is complete. I tested it with two students and both records were displayed correctly. The only technical issue is that `student s[n]` is a variable-length array, which GCC accepts as an extension but which is not standard C++.                                                  |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** Task 3 correctly creates a structure object, points a `student*` to it using `student *ptr = &s1`, assigns all required members through the pointer using `->`, and calls the display function through the pointer. This satisfies the pointer-access requirement. The task does not explicitly require `new`/`delete`, so stack allocation with a structure pointer is acceptable.                                                                             |
| **Input, Output & Execution**              |       3       |        **3**       | **Excellent.** All three programs compiled successfully under C++17. Task 1 executed correctly. Task 2 was tested with two student records and displayed both correctly. Task 3 was also tested with user input and displayed the expected information. Task 2 generated only a non-fatal warning for its variable-length array.                                                                                                                                               |

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

**Dear Danish,** your Lab 1 submission demonstrates a **strong understanding of structures, arrays of structures, and structure pointers**.

Task 1 is functionally correct, but the member function does not follow the required interface exactly. The assignment specifies:

```cpp
displayStudentInfo()
```

whereas the submission defines:

```cpp
displaystudentinfo(student S)
```

The capitalization is different, and the function unnecessarily receives a complete `student` object as an argument. A cleaner implementation would use the current object's members directly.

Task 2 correctly implements an array of structures with separate input and display loops. I compiled and tested it with two student records, and both were displayed correctly.

Task 3 correctly demonstrates pointer-to-structure access using:

```cpp
student *ptr = &s1;
```

and the `->` operator. The student did **not** need to use `new`/`delete` here because the task only requires a pointer to a structure for member access and assignment.

I compiled all three programs using **C++17 with `-Wall -Wextra -pedantic`** and executed them with test data. All three programs compiled and ran successfully. Task 2 produced a warning because `student s[n]` is a variable-length array and is not standard C++.

**Overall performance: Excellent — 11/12.**
