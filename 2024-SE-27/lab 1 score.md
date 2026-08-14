# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2024-SE-27
**Student Name:** Muhammad Arslan
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                                                                  |
| :----------------------------------------- | :-----------: | :----------------: | :---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **2**       | **Good.** Task 1 correctly defines the required student data members and implements a function that displays the student's full name and marks. However, the required member function is `displayStudentInfo()`, while the submission defines `displayStudentInfo(Student student)` and unnecessarily passes the complete structure object as a parameter. The implementation is valid, but it does not exactly follow the specified function design. |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** Task 2 correctly creates an array of `Student` structures, accepts details for multiple students through input, and calls `displayStudentInfo()` for each record. The input and output loops are correctly implemented.                                                                                                                                                                                                                |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** Task 3 correctly declares structure pointers, uses the `->` operator to assign/access members, and calls `displayStudentInfo()` through the pointers. This satisfies the required pointer-to-structure functionality.                                                                                                                                                                                                                  |
| **Input, Output & Execution**              |       3       |        **3**       | **Excellent.** The three task implementations are syntactically valid and the program flow is correct. Task 1 displays two assigned records, Task 2 accepts and displays multiple records, and Task 3 assigns and displays records through structure pointers.                                                                                                                                                                                        |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **11 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **11 / 12 (91.67%)**
* **Grade Status:** **Excellent**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> The submitted material was evaluated against the Lab 1 requirements. No comparison submission was provided for this evaluation, so a 100% code-match determination cannot be established from the available materials. The Lab 1 policy specifies a **-3 mark penalty** for code found to be plagiarized or matching 100% with another student's code.

---

### 💬 **Overall Teacher Remarks**

**Dear Muhammad,** your submission demonstrates a **strong understanding of structures, arrays of structures, and structure pointers**.

Task 1 is functionally correct, but the member-function design does not exactly match the requirement. The task asks for:

```cpp
void displayStudentInfo()
```

whereas your implementation uses:

```cpp
void displayStudentInfo(Student student)
```

and calls it by passing the same object:

```cpp
s1.displayStudentInfo(s1);
```

This is valid C++, but the parameter is unnecessary because a member function can directly access the current object's members.

Task 2 correctly implements an array of structures and handles multiple student records using input and display loops.

Task 3 correctly demonstrates pointer-based access through:

```cpp
Student *ptr1 = &s1;
Student *ptr2 = &s2;
```

and uses the `->` operator correctly for member assignment and function invocation.

The extra `Age` member is not required by the lab, but it does not negatively affect the required functionality.

**Overall performance: Excellent — 11/12.**
