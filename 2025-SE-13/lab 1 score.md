# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-13
**Student Name:** Areeba Taqdees Mir
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                       |
| :----------------------------------------- | :-----------: | :----------------: | :--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **3**       | **Excellent.** All three programs correctly define the `Student` structure with first name, last name, roll number, and marks. `displayStudentInfo()` correctly displays the student's full name and marks. Task 1 also correctly creates a structure variable, assigns values, and calls the member function.                                                                                             |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** The required array-of-structures implementation is present in **Task 3**. It accepts multiple student records and displays every student's full name and marks. However, the student has **swapped the intended order of Tasks 2 and 3**: the pointer implementation was submitted as Task 2, while the array implementation was submitted as Task 3. The functionality itself is correct.  |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** The required pointer implementation is present in **Task 2**. `Student *ptr = new Student` dynamically allocates a structure, the members are assigned through `->`, `displayStudentInfo()` is called through the pointer, and the memory is correctly released using `delete`. The functionality satisfies the pointer requirement despite being submitted under Task 2 instead of Task 3. |
| **Input, Output & Execution**              |       3       |        **3**       | **Excellent.** All three programs compiled successfully with `g++ -std=c++17`. Task 1 and Task 2 executed correctly. Task 3 was tested with two students and correctly accepted and displayed both records. Task 3 generated an ISO C++ warning because `Student students[n]` is a variable-length array, but GCC accepted it and the program executed correctly.                                          |

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

**Dear Areeba,** your Lab 1 submission demonstrates an **excellent understanding of structures, arrays of structures, and structure pointers**. All required concepts are implemented and the programs execute successfully.

The only organizational issue is that **Task 2 and Task 3 are swapped**. The assignment specifies the array-of-structures solution as Task 2 and the pointer-to-structure solution as Task 3, whereas your submission contains the pointer solution in Task 2 and the array solution in Task 3. Since both required implementations are present and function correctly, this does not affect the core conceptual score.

I compiled all three programs using **C++17 with warnings enabled** and executed them. Task 1 and Task 2 ran successfully, and Task 3 was tested with two student records and displayed both records correctly.

One technical improvement is recommended: `Student students[n]` in Task 3 is a **variable-length array**, which is not part of standard C++. GCC accepts it as an extension, but standard C++ alternatives such as `vector<Student>` or dynamic allocation would be preferable.

**Overall performance: Excellent — 12/12.**
