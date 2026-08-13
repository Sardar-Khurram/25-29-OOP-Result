# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-34
**Student Name:** Niqash Ali
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                                    |
| :----------------------------------------- | :-----------: | :----------------: | :---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **2**       | **Good.** Task 1 correctly defines the structure with `name`, `last_name`, `roll_no`, and `marks`, and the `display()` function correctly displays the student's name and marks. However, the required member function is specifically named `displayStudentInfo()`, while the submission uses `display()`. The implementation is functionally correct but does not follow the required function specification exactly. |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** Task 2 correctly creates an array of `student` structures, accepts multiple student records through user input, and calls the display function for every student. I compiled and tested it with two student records, and both were displayed correctly. The only technical issue is that `student s[n]` is a variable-length array, which GCC accepts as an extension but which is not standard C++.     |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** Task 3 correctly dynamically allocates an array of `student` structures using `new student[n]`, accesses members through the pointer using `ptr[i].member`, and calls the member function for each record. The program correctly handles multiple students and displays their information.                                                                                                               |
| **Input, Output & Execution**              |       3       |        **3**       | **Excellent.** All three programs compiled successfully with C++17. Task 1 executed correctly, while Tasks 2 and 3 were tested with two student records and both produced the expected output. Task 2 generated only a non-fatal warning because of the variable-length array.                                                                                                                                          |

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

**Dear Niqash,** your Lab 1 submission demonstrates a **strong understanding of structures, arrays of structures, and dynamic structure allocation**.

Task 1 correctly implements the required student data members, creates a structure object, assigns values, and displays the student's name and marks. The only issue is that the assignment specifically requires a member function named **`displayStudentInfo()`**, while the submitted implementation uses **`display()`**.

Task 2 correctly handles multiple students using an array of structures. I compiled and tested the program with two student records, and both records were correctly displayed.

Task 3 demonstrates dynamic allocation using:

```cpp
student *ptr = new student[n];
```

and correctly stores and accesses multiple student records through the allocated structure array. The program was compiled and tested successfully.

One technical improvement is recommended for Task 2: `student s[n]` is a **variable-length array**, which GCC supports as an extension but which is not standard C++. A `vector<student>` or dynamic allocation would be preferable.

**Overall performance: Excellent — 11/12.**
