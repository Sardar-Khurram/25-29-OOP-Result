# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2024-SE-33
**Student Name:** Momna Imran
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                          |
| :----------------------------------------- | :-----------: | :----------------: | :-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **2**       | **Good.** A correct `Student` structure with all four required data members and `displayStudentInfo()` is present in the active code. However, the original standalone Task 1 implementation is completely commented out, so the required Task 1 demonstration using a single structure variable, assigning values directly, and calling the function is not active in the submitted program. |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** The active program correctly creates an array of `Student` structures, accepts multiple student records, and displays every record. The input and display loops are correctly implemented.                                                                                                                                                                                     |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** The active program correctly declares a `Student*`, assigns it to each array element, uses the `->` operator to assign/access all structure members, and calls `displayStudentInfo()` through the pointer. This successfully demonstrates pointer-to-structure access.                                                                                                         |
| **Input, Output & Execution**              |       3       |        **3**       | **Excellent.** The active program contains complete input and output logic and should compile and execute correctly. It successfully combines array and pointer access for multiple student records. The only technical issue is that `Student students[numStudents]` is a variable-length array, which GCC may accept as an extension but which is not standard C++.                         |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **11 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **11 / 12 (91.67%)**
* **Grade Status:** **Excellent**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> The submitted material was evaluated against the Lab 1 requirements. No comparison submission was provided for this evaluation, so a 100% code-match determination cannot be established from the available materials. The Lab 1 policy specifies a **-3 mark penalty** when a student's code is found to be plagiarized or matching 100% with another student's code.

---

### 💬 **Overall Teacher Remarks**

**Dear Momna,** your submission demonstrates a **strong understanding of structures, arrays of structures, and structure pointers**.

The active implementation correctly defines the `Student` structure and `displayStudentInfo()` function, stores multiple students in an array, and uses a structure pointer to access and display the records.

The main issue is that your original **Task 1 solution is commented out completely**:

```cpp
/* ... Task 1 implementation ... */
```

Therefore, although the required structure and member function are present in the active program, the standalone Task 1 requirement of creating one structure variable, assigning its values, and directly calling the member function is not actually executed in the submitted code.

The active program successfully demonstrates both the array and pointer concepts. One technical improvement would be replacing:

```cpp
Student students[numStudents];
```

with a standard C++ container such as `vector<Student>` or standard dynamic allocation, since variable-length arrays are not part of standard C++.

**Overall performance: Excellent — 11/12.**
