# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-04
**Student Name:** Wajeeha Batool
**Task Folder Location:** `Lab-01\Task-01.cpp` to `Task-03.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria**                               | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation**                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
| :----------------------------------------- | :-----------: | :----------------: | :--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Structure Definition & Member Function** |       3       |        **2**       | **Good.** The `Student` structure contains all required data members, and `displayStudentInfo()` is correctly written to display the student's full name and marks. However, **Task 1 contains a structural syntax error**: the `displayStudentInfo()` function and the `Student` structure are not closed with the required braces correctly. The `};` after the function closes only the function body with an unnecessary semicolon, while the structure itself remains unclosed before `main()`. Tasks 2 and 3 correctly define the structure and member function. |
| **Array of Structures**                    |       3       |        **3**       | **Excellent.** Task 2 correctly uses an array of `Student` structures, accepts the number of students and their details through user input, and calls `displayStudentInfo()` for each student. The required first name, last name, roll number, and marks are collected and displayed.                                                                                                                                                                                                                                                                                 |
| **Structure Pointer & Dynamic Access**     |       3       |        **3**       | **Excellent.** Task 3 correctly declares `Student *ptr = &s1`, uses the `->` operator to assign values to the structure members through the pointer, and calls `displayStudentInfo()` using the pointer. This satisfies the pointer and dynamic member-access requirement.                                                                                                                                                                                                                                                                                             |
| **Input, Output & Execution**              |       3       |        **2**       | **Good.** Tasks 2 and 3 contain the required input/output and program flow. However, **Task 1 will not compile successfully** because of the missing/incorrect closing braces around the structure and member function. Therefore, the complete submission cannot receive full execution marks.                                                                                                                                                                                                                                                                        |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **10 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **10 / 12 (83.33%)**
* **Grade Status:** **Good**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> The submitted files were evaluated against the Lab 1 requirements. No comparison submission was provided for this evaluation, so a 100% code-match determination cannot be established from the available materials. The Lab 1 policy specifies a **-3 mark penalty** when a student's code is found to be plagiarized or 100% identical to another student's code.

---

### 💬 **Overall Teacher Remarks**

**Dear Wajeeha,** your Lab 1 submission demonstrates a **good understanding of structures, arrays of structures, and structure pointers**. Tasks 2 and 3 are implemented correctly and satisfy their respective requirements.

The main issue is in **Task 1**, where the braces are incorrectly placed. After the `displayStudentInfo()` function, the structure itself must also be closed before `main()`. As submitted, `main()` effectively appears inside the structure definition, causing a compilation error.

The required correction is essentially:

```cpp
void displayStudentInfo()
{
    cout << "Full Name: " << FirstName << " " << LastName << endl;
    cout << "Marks: " << Marks << endl;
}
};  // close Student structure

int main()
{
    // ...
}
```

Tasks 2 and 3 show that you understand the intended concepts, particularly array-based student storage and pointer-based structure access.

**Overall performance: Good — 10/12.**
