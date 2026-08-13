# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-22
**Student Name:** Noor Ul Ain Abbasi
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                                  |
| :----------------------------------------- | :-----------: | :----------------: | :-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **2**       | **Good.** Task 1 defines a `student` structure with all four required data members and includes a member function that displays the student's name and marks. However, `displayStudentInfo()` is declared with return type `student` even though it does not return a `student` object, producing a compiler warning. Tasks 2 and 3 also omit the required `roll_no/rollNumber` member entirely.                      |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** Task 2 correctly creates an array of three `student` structures, accepts multiple student records through input, and displays each record using a member function. The array and loop logic work correctly. However, the required roll number field is missing from this implementation.                                                                                                               |
| **Structure Pointer & Dynamic Access**     |       3       |        **2**       | **Good.** Task 3 correctly declares a structure pointer (`student *sPtr = s`) and uses pointer arithmetic with `->` to assign and access the structure members. However, the required `displayStudentInfo()` function is replaced with `DisplayStudentInfo()`, and the `rollNumber` member is missing. The pointer is used for access, but the implementation does not fully match the specified structure/interface. |
| **Input, Output & Execution**              |       3       |        **2**       | **Good.** All three programs compile successfully under C++17. Task 2 and Task 3 execute correctly for their implemented functionality. Task 1 compiles but produces a warning because `displayStudentInfo()` is declared to return `student` without returning a value. The overall submission also fails to handle the required roll number in Tasks 2 and 3.                                                       |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **9 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Good**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> The submitted files were evaluated against the Lab 1 requirements. No comparison submission was provided for this evaluation, so a 100% code-match determination cannot be established from the available materials. The Lab 1 policy specifies a **-3 mark penalty** when a student's code is found to be plagiarized or matching 100% with another student's code.

---

### 💬 **Overall Teacher Remarks**

**Dear Noor Ul Ain,** your submission demonstrates a **good understanding of structures, arrays of structures, and structure pointers**, and all three programs are broadly functional.

The main issues are related to following the specification precisely.

In **Task 1**, the function is declared as:

```cpp
student displayStudentInfo()
```

but it does not return a `student` object. Since the function is only intended to display information, it should be declared as:

```cpp
void displayStudentInfo()
```

The compiler reports a **missing return statement warning** for the current implementation.

More importantly, **Tasks 2 and 3 omit the required `rollNumber` member** from the structure. The assignment explicitly requires First Name, Last Name, Roll Number, and Marks in the `Student` structure.

Task 3 also uses:

```cpp
DisplayStudentInfo()
```

instead of the required:

```cpp
displayStudentInfo()
```

While C++ is case-sensitive, the functionality is otherwise similar.

I compiled all three programs using **C++17 with warnings enabled**. All three compile, but Task 1 generates the non-void return warning described above.

**Overall performance: Good — 9/12.**
