# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-42
**Student Name:** Muhammad Arif
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                                                                                              |
| :----------------------------------------- | :-----------: | :----------------: | :-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **2**       | **Good.** Task 1 correctly defines the required four data members and provides a member function that displays the student's full name and marks. However, the required function name is `displayStudentInfo()`, while the submission uses `displaystudentinfo(student S)`. It also unnecessarily passes a complete `student` object to the function instead of using the current object's members. The functionality works, but the specified interface is not followed exactly. |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** Task 2 correctly implements an array of `student` structures, accepts multiple student records through user input, and calls the display function for every student after all records have been entered. The required student fields are stored and displayed correctly. The only technical issue is that `student s[n]` is a variable-length array, which is accepted by GCC as an extension but is not standard C++.                                             |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** Task 3 correctly declares a pointer to a `student` structure using `student *ptr = &s1`, assigns the structure members through `->`, and calls the display function through the pointer. This satisfies the pointer-based access and assignment requirement. Dynamic heap allocation with `new` is not explicitly required by the task.                                                                                                                            |
| **Input, Output & Execution**              |       3       |        **3**       | **Excellent.** All three programs are syntactically valid and the program flow is correct. Task 1 displays the assigned record, Task 2 accepts and displays multiple records, and Task 3 accepts and displays a record through a structure pointer.                                                                                                                                                                                                                               |

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

**Dear Muhammad,** your Lab 1 submission demonstrates a **strong understanding of structures, arrays of structures, and structure pointers**.

Task 1 correctly defines the required student information and successfully displays it. The main issue is that the assignment specifically requires the member function:

```cpp
displayStudentInfo()
```

while your implementation uses:

```cpp
displaystudentinfo(student S)
```

C++ is case-sensitive, so this is a different function name. The parameter `student S` is also unnecessary because the member function can directly access the structure's own members.

Task 2 correctly implements the array-of-structures requirement with user input and a separate display loop. Task 3 correctly demonstrates pointer-to-structure access through:

```cpp
student *ptr = &s1;
```

and uses the `->` operator to assign the data members and call the display function.

The only additional technical consideration is the use of:

```cpp
student s[n];
```

in Task 2. This is a variable-length array, which GCC may accept as an extension but which is **not standard C++**. A standard solution would use `vector<student>` or dynamic allocation.

**Overall performance: Excellent — 11/12.**
