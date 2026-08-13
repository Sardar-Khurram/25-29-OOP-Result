# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-18
**Student Name:** Tahreem Rasheed
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                                                                                |
| :----------------------------------------- | :-----------: | :----------------: | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| **Structure Definition & Member Function** |       3       |        **3**       | **Excellent.** The Task 1 submission correctly defines the `Student` structure with `firstName`, `lastName`, `rollNumber`, and `marks`, and correctly implements `displayStudentInfo()` to display the student's full name and marks. A structure variable is created, values are assigned, and the member function is called successfully.                                                                                                                         |
| **Array of Structures**                    |       3       |        **2**       | **Good.** The Task 2 submission correctly uses an array of structures, accepts multiple student records, and calls `displayStudentInfo()`. However, the `return 0;` statement is placed **inside the display loop**, so the program terminates after displaying only the **first student**. When tested with two students, only the first student's record was displayed. It also uses `Student students[n]`, which is a non-standard variable-length array in C++. |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** The Task 3 submission correctly declares `Student *ptr`, dynamically allocates a `Student` using `new`, assigns all members using `->`, calls `displayStudentInfo()` through the pointer, and correctly releases memory using `delete`.                                                                                                                                                                                                              |
| **Input, Output & Execution**              |       3       |        **2**       | **Good.** All three required programs compile successfully under C++17. Task 1 and Task 3 execute correctly. Task 2 compiles and accepts multiple records, but its output is logically incorrect because `return 0;` is inside the display loop, causing premature termination after the first record.                                                                                                                                                              |

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

**Dear Tahreem,** your submission demonstrates a **good understanding of structures, member functions, arrays of structures, and pointers to structures**.

Task 1 is correctly implemented and executed successfully. Task 3 also correctly demonstrates dynamic structure allocation and pointer-based member access, including proper memory cleanup with `delete`.

The main issue is in **Task 2**. The following statement is inside the display loop:

```cpp
return 0;
```

As a result, the program exits during the **first iteration**. I tested the program with two students, and although both students' data were entered, only the first student's information was displayed.

The relevant section should instead have the `return 0;` **after** the display loop:

```cpp
for(int i = 0; i < n; i++)
{
    students[i].displayStudentInfo();
}

return 0;
```

There is also an unnecessary line:

```cpp
void displayStudentInfo();
```

inside `main()`. This is merely a function declaration and does not perform any display operation.

Additionally, `Student students[n]` is a variable-length array, which GCC accepts as an extension but is not standard C++.

The additional **file 4** also does not implement the required `Student` structure member function and appears to be an incomplete/alternative attempt; it was not needed to satisfy the three required tasks.

**Overall performance: Good — 10/12.**
