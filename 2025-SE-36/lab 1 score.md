# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-36
**Student Name:** Tanzeela Rehman
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                                            |
| :----------------------------------------- | :-----------: | :----------------: | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| **Structure Definition & Member Function** |       3       |        **1**       | **Need Improvement.** The required four structure members are present, and a display function is defined. However, Task 1 names the function `displaystudentInfo()` instead of the required `displayStudentInfo()`. More importantly, Task 1 does not assign values to `lastName`, `rollNumber`, or `marks`, does not call the display function, and therefore does not complete the required structure-variable demonstration. |
| **Array of Structures**                    |       3       |        **1**       | **Need Improvement.** Task 1 actually declares an array of structures, but the input is incomplete: only `firstName` is read. The statements for `lastName`, `marks`, and `rollNumber` contain no input operation and therefore have no effect. The intended array task is not correctly completed. Task 2 does not implement the required array of structures at all.                                                          |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** Task 3 correctly creates a structure object, declares a pointer to it, assigns the pointer with `ptr = &s`, assigns the structure members through `->`, and calls `displayStudentInfo()` through the pointer. The pointer-based functionality works correctly. Dynamic heap allocation with `new` is not required by the wording of the task.                                                                    |
| **Input, Output & Execution**              |       3       |        **1**       | **Need Improvement.** Task 1 compiles but does not produce the required student-information output because the display function is never called and several fields are never assigned. Task 2 **fails to compile** because string literals `"36"` and `"76"` are assigned to `int` variables `rollNumber` and `marks`. Task 3 compiles and runs successfully, displaying the student's name and marks.                          |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **6 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **6 / 12 (50.0%)**
* **Grade Status:** **Need Improvement**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> The submitted files were evaluated against the Lab 1 requirements. No comparison submission was provided for this evaluation, so a 100% code-match determination cannot be established from the available materials. The Lab 1 policy specifies a **-3 mark penalty** when a student's code is found to be plagiarized or matching 100% with another student's code.

---

### 💬 **Overall Teacher Remarks**

**Dear Tanzeela,** your submission shows that you understand the basic idea of structures and pointers, but **Task 1 and Task 2 are substantially incomplete or incorrect**.

In **Task 1**, the program declares an array instead of the required single structure variable and only actually inputs `firstName`. These statements:

```cpp
students[i].lastName;
students[i].marks;
students[i].rollNumber;
```

do not assign or input anything; they are simply expressions with no effect. The program also never calls `displaystudentInfo()`.

There is also a naming issue: the required function is:

```cpp
displayStudentInfo()
```

while the submission uses:

```cpp
displaystudentInfo()
```

C++ is case-sensitive.

In **Task 2**, the program contains compilation errors:

```cpp
s1.rollNumber = "36";
s1.marks = "76";
```

Both `rollNumber` and `marks` are declared as `int`, so string literals cannot be assigned to them. They should be numeric values such as:

```cpp
s1.rollNumber = 36;
s1.marks = 76;
```

Task 3 is the strongest part of the submission. It correctly demonstrates pointer-to-structure access and successfully runs. I compiled all three programs using **C++17 with `-Wall -Wextra -pedantic`**: Task 1 compiled with warnings but was functionally incomplete, Task 2 failed compilation, and Task 3 compiled and executed successfully.

**Overall performance: Need Improvement — 6/12.**
