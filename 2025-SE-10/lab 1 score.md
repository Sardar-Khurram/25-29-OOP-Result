# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-10
**Student Name:** Misbah Khurshid
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                                                         |
| :----------------------------------------- | :-----------: | :----------------: | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **3**       | **Excellent.** The `Student` structure correctly contains first name, last name, roll number, and marks. The member functions correctly display the student's name and marks. Task 1 creates a structure variable, assigns the required values, and calls the display function successfully.                                                                                                                                                 |
| **Array of Structures**                    |       3       |        **2**       | **Good.** An array of `Student` structures is implemented in Task 3 and student records are accepted through input. However, the display loop is incorrectly placed **inside the input loop**, causing the program to display incomplete/uninitialized student records before all students have been entered. The array declaration `Student students[n]` is also a variable-length array, which is not standard C++.                        |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** Task 2 correctly creates a pointer to a dynamically allocated `Student` object using `new Student`, assigns all members through the `->` operator, calls the member function through the pointer, and correctly releases the memory using `delete`. Although the pointer implementation appears in Task 2 rather than Task 3, it correctly demonstrates the required pointer concept.                                         |
| **Input, Output & Execution**              |       3       |        **2**       | **Good.** All three programs compile with GCC. Task 1 and Task 2 produce the expected output. Task 3 executes but has a logical/output problem: when multiple students are entered, it displays the entire array after each individual student's input, including records that have not yet been initialized. Testing with two students produced an invalid/uninitialized marks value for the second student during the first display cycle. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **10 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **10 / 12 (83.33%)**
* **Grade Status:** **Good**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> The submitted files were evaluated against the Lab 1 requirements. No comparison submission was provided for this evaluation, so a 100% code-match determination cannot be established from the available materials. The Lab 1 policy specifies a **-3 mark penalty** when a student's code is found to be plagiarized or matching 100% with another student's code.

---

### 💬 **Overall Teacher Remarks**

**Dear Misbah,** your Lab 1 submission demonstrates a **good understanding of structures, structure pointers, and arrays of structures**. The core concepts are present, and all three programs compile successfully.

Task 1 correctly implements the required structure and member function. Task 2 demonstrates pointer-based structure access effectively, including dynamic allocation with `new`, member access using `->`, and proper memory cleanup using `delete`.

The main issue is in **Task 3**. The display loop:

```cpp
for(int i=0; i<n; i++){
    students[i].displayStudentinfo();
}
```

has been placed **inside the loop that accepts student input**. Therefore, after entering the first student, the program immediately attempts to display all `n` students even though the remaining students have not yet been initialized. This produces incorrect/uninitialized output.

The display loop should be placed **after the input loop**, so that all students are entered first and then all records are displayed.

Also, `Student students[n]` is a variable-length array, which GCC accepts as an extension but is **not standard C++**.

**Overall performance: Good — 10/12.**
