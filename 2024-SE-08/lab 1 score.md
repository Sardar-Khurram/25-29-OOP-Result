# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2024-SE-08
**Student Name:** Syed Ahmed Gillani
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          |
| :----------------------------------------- | :-----------: | :----------------: | :---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **2**       | **Good.** Task 1 correctly defines the required student data and a member function that displays the student's information. The use of `Age` as an additional member is acceptable. However, the required function is `displayStudentInfo()`, intended to display the current object's information, while the submission defines `displayStudentInfo(Student student)` and passes the complete structure object as a parameter. The implementation works, but it does not follow the required member-function design exactly. |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** Task 2 correctly creates an array of two `Student` structures, accepts the required student details through input, and calls `displayStudentInfo()` for each student. The input and display loops are correctly implemented.                                                                                                                                                                                                                                                                                   |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** Task 3 correctly declares two pointers to structure objects, uses the `->` operator to assign/access members, and calls `displayStudentInfo()` through the pointers. This satisfies the required pointer-to-structure functionality.                                                                                                                                                                                                                                                                           |
| **Input, Output & Execution**              |       3       |        **3**       | **Excellent.** All three programs are syntactically valid and should compile and execute successfully. Task 1 and Task 3 assign and display student records, while Task 2 accepts and displays two student records. The `#include <iostream >` spacing is unusual but is valid C++ syntax and is not itself an error.                                                                                                                                                                                                         |

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

**Dear Syed,** your submission demonstrates a **strong understanding of structures, arrays of structures, and structure pointers**.

Task 1 is the only area where marks are deducted. The required member function is intended to be written as:

```cpp
void displayStudentInfo()
```

and directly access `First_name`, `Last_name`, and `Marks` from the current structure object. Your implementation instead uses:

```cpp
void displayStudentInfo(Student student)
```

and passes the entire structure as an argument:

```cpp
s1.displayStudentInfo(s1);
```

This is valid C++ and will work, but it is not the implementation pattern specified in the task.

Task 2 correctly implements an array of structures and user input for multiple students.

Task 3 correctly demonstrates pointer-based access using:

```cpp
Student *ptr1 = &s1;
Student *ptr2 = &s2;
```

and the `->` operator. Since the task only requires pointer-based access and assignment, using pointers to existing structure objects is acceptable; `new`/`delete` is not required.

Also, the following:

```cpp
#include <iostream >
```

is **not actually a compilation error**. The space before `>` is allowed by the C++ preprocessor, although the conventional form is `#include <iostream>`.

**Overall performance: Excellent — 11/12.**
