# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-30
**Student Name:** Malik Waqar Latif
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                                                      |
| :----------------------------------------- | :-----------: | :----------------: | :---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **3**       | **Excellent.** Task 1 correctly defines the `Student` structure with `firstName`, `lastName`, `rollnumber`, and `marks`. The `displayStudentInfo()` function correctly displays the student's full name and marks. A structure variable is created, all required values are assigned, and the member function is called successfully.                                                                                                     |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** Task 2 correctly uses an array of `student` structures, accepts multiple student records through user input, and calls `displayStudentInfo()` for each student after all input has been collected. The required student details are stored and displayed correctly. The only technical issue is that `student students[num]` is a variable-length array, which is accepted by GCC as an extension but is not standard C++. |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** Task 3 correctly declares a pointer to a `Student` structure using `Student *studentPtr = &s1`, assigns all structure members through the pointer using `->`, and calls `displayStudentInfo()` through the pointer. This satisfies the required pointer-based structure access and assignment.                                                                                                                             |
| **Input, Output & Execution**              |       3       |        **3**       | **Excellent.** All three programs compile successfully with C++17 and execute correctly. Task 1 and Task 3 directly assign and display student information, while Task 2 accepts multiple student records and displays all entered records. Task 2 produces only a non-fatal warning under strict C++ compilation because of the variable-length array.                                                                                   |

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

**Dear Malik,** your Lab 1 submission demonstrates an **excellent understanding of structures, arrays of structures, and structure pointers**. All three tasks satisfy the required functionality.

Task 1 correctly implements the required structure and member function. Task 2 correctly handles multiple student records through an array, accepts input, and displays every student after the input phase. Task 3 correctly demonstrates pointer-to-structure access using `->` and invokes the required `displayStudentInfo()` function through the pointer.

I checked the logic and compilation of all three programs. They are functionally correct. The only technical improvement is in Task 2, where:

```cpp
student students[num];
```

is a variable-length array. GCC may accept this as an extension, but it is **not standard C++**. A `vector<Student>` or standard dynamic allocation would be preferable.

Task 3 does **not** need `new` for full credit under the given wording: the requirement is to use a pointer to access the structure and dynamically assign its members through that pointer, which the submitted `studentPtr->...` implementation does correctly.

**Overall performance: Excellent — 12/12.**
