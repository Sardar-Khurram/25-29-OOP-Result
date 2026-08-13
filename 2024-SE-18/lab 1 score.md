# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2024-SE-18
**Student Name:** Syed Abdul Rehman
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                                     |
| :----------------------------------------- | :-----------: | :----------------: | :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **2**       | **Good.** Task 1 correctly defines the required student fields and implements a member function that displays the student's full name and marks. However, the required function is `displayStudentInfo()`, whereas the submission defines `displayStudentInfo(Student student)` and passes the complete structure object as a parameter. The code is valid, but the required function interface is not followed exactly. |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** Task 2 correctly creates an array of `Student` structures, accepts input for multiple students, and calls `displayStudentInfo()` for every record. The input and display loops are correctly separated, and the required student information is stored and displayed.                                                                                                                                     |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** Task 3 correctly declares structure pointers, points them to existing `Student` objects, assigns the structure members through `->`, and calls `displayStudentInfo()` through the pointers. This satisfies the pointer-based access and assignment requirement.                                                                                                                                           |
| **Input, Output & Execution**              |       3       |        **3**       | **Excellent.** All three programs are valid C++ implementations and the control flow is correct. Task 1 displays two assigned records, Task 2 accepts and displays two student records, and Task 3 assigns and displays two records through structure pointers. The spacing in `#include <iostream >` is unusual but is valid preprocessing syntax.                                                                      |

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

**Dear Syed Abdul Rehman,** your Lab 1 submission demonstrates a **strong understanding of structures, arrays of structures, and structure pointers**.

Task 1 is functionally correct, but the member function does not follow the specified interface exactly. The assignment asks for:

```cpp
void displayStudentInfo()
```

whereas the submission uses:

```cpp
void displayStudentInfo(Student student)
```

and calls it as:

```cpp
s1.displayStudentInfo(s1);
```

This is valid C++, but the extra parameter is unnecessary because a member function can directly access the current object's members.

Task 2 correctly implements an array of structures with user input and a separate display loop. Task 3 correctly demonstrates pointer-to-structure access using:

```cpp
Student *ptr1 = &s1;
Student *ptr2 = &s2;
```

followed by the `->` operator for member assignment and function invocation.

The task does not explicitly require dynamic heap allocation with `new` and `delete`, so using pointers to existing structure objects in Task 3 is acceptable.

The `#include <iostream >` form is unconventional, but it is not itself a compilation error.

**Overall performance: Excellent — 11/12.**
