# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-17
**Student Name:** Muqaddas Majeed
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                                                                       |
| :----------------------------------------- | :-----------: | :----------------: | :--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **3**       | **Excellent.** Task 1 correctly defines the `Student` structure with `firstName`, `lastName`, `rollNumber`, and `marks`. The required `displayStudentInfo()` function correctly displays the student's full name and marks. A structure variable is created, all required values are assigned, and the member function is called successfully.                                                                                                             |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** Task 2 correctly implements an array of `Student` structures, accepts multiple student records through user input, and calls `displayStudentInfo()` for each student. I compiled and tested the program with two student records; both records were entered and displayed correctly. The only technical issue is that `Student s[n]` is a variable-length array, which is not standard C++ and produces a warning under strict compilation. |
| **Structure Pointer & Dynamic Access**     |       3       |        **2**       | **Good.** Task 3 correctly declares a pointer to a dynamically allocated `Student`, assigns all members through `->`, and calls a member function through the pointer. However, the required function name is `displayStudentInfo()`, while the student implemented `display()`. Also, the dynamically allocated memory is never released with `delete`, creating a memory leak.                                                                           |
| **Input, Output & Execution**              |       3       |        **2**       | **Good.** All three programs compiled successfully with C++17. Task 1 and Task 2 executed correctly, and Task 2 was tested with multiple student records. Task 3 also executes and displays the entered student information, but it does not fully satisfy the specified member-function and memory-management requirements.                                                                                                                               |

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

**Dear Muqaddas,** your Lab 1 submission demonstrates a **good understanding of structures, arrays of structures, and structure pointers**. Tasks 1 and 2 satisfy the requirements correctly.

Task 3 demonstrates the important pointer concept correctly. The code dynamically allocates a `Student`, accesses its members using `->`, accepts input, and invokes a member function through the pointer.

However, there are two issues in Task 3. The assignment specifically requires the function **`displayStudentInfo()`**, but the submitted code defines **`display()`** instead. Additionally, the dynamically allocated object created with:

```cpp
Student *ptr;
ptr = new Student;
```

is never released with:

```cpp
delete ptr;
```

which results in a memory leak.

I compiled all three programs using **C++17 with `-Wall -Wextra -pedantic`** and ran them. Task 1 and Task 2 executed correctly. Task 2 produced only the expected strict-C++ warning for the variable-length array. Task 3 also executed successfully, but the above implementation issues prevent full marks.

**Overall performance: Good — 10/12.**
