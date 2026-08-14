# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2024-SE-28
**Student Name:** Raja Wajihullah Khan
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                   |
| :----------------------------------------- | :-----------: | :----------------: | :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **2**       | **Good.** Task 1 correctly defines the required student attributes and displays the student's full name and marks. However, the required function is `displayStudentInfo()`, while the submission defines `displayStudentInfo(Student student)` and passes the complete structure object as an argument. The implementation is valid, but it does not follow the specified function interface exactly. |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** Task 2 correctly creates an array of `Student` structures, accepts details for multiple students through user input, and calls `displayStudentInfo()` for each student. The input and display loops are correctly implemented.                                                                                                                                                          |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** Task 3 correctly declares structure pointers, uses the `->` operator to assign structure members, and calls `displayStudentInfo()` through the pointers. This satisfies the required pointer-to-structure access.                                                                                                                                                                       |
| **Input, Output & Execution**              |       3       |        **3**       | **Excellent.** All three task implementations are syntactically valid and the logic is correct. Task 1 displays two assigned records, Task 2 accepts and displays two student records, and Task 3 assigns and displays two records through structure pointers.                                                                                                                                         |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **11 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **11 / 12 (91.67%)**
* **Grade Status:** **Excellent**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> The submitted files were evaluated against the Lab 1 requirements. No comparison submission was provided for this evaluation, so a 100% code-match determination cannot be established from the available materials. The Lab 1 policy specifies a **-3 mark penalty** for code found to be plagiarized or matching 100% with another student's code.

---

### 💬 **Overall Teacher Remarks**

**Dear Raja,** your submission demonstrates a **strong understanding of structures, arrays of structures, and structure pointers**.

Task 1 is functionally correct, but the member-function design differs slightly from the required specification. The assignment asks for:

```cpp
void displayStudentInfo()
```

whereas the submission uses:

```cpp
void displayStudentInfo(Student student)
```

and calls it by passing the same structure object. This is valid C++, but the parameter is unnecessary because the member function can directly access the object's own members.

Task 2 correctly implements the array-of-structures requirement, including user input for multiple students and a separate display loop.

Task 3 correctly demonstrates pointer-to-structure access using `Student *ptr1` and `Student *ptr2`, with the `->` operator used for member assignment and function invocation.

The additional `Age` member is not required by the task, but it does not interfere with the required functionality.

**Overall performance: Excellent — 11/12.**
