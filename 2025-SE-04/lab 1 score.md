# Lab 1 Evaluation Report (Structures & Pointers)

**Student Roll Number:** 2025-SE-04
**Student Name:** Wajeeha Batool
**Task Folder Location:** `Lab (Structures)\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Structure Definition & Member Function** | 3 | **3** | **Excellent.** The `Student` structure correctly contains data members and the display function prints the student's name and marks. Task 1 correctly creates a structure variable and assigns/displays values. *Note:* Make sure `displayStudentInfo` has return type `void` instead of `student` as it does not return a value. |
| **Array of Structures** | 3 | **3** | **Excellent.** Task 2 correctly implements an array of structure variables, accepts user inputs for multiple students, and displays them cleanly. *Note:* Remember to include the `roll_no` attribute in the array definition to fully satisfy the rubric. |
| **Structure Pointer & Dynamic Access** | 3 | **2** | **Good.** Task 3 correctly uses a structure pointer (`student *sPtr = s`) with pointer arithmetic and member selection using `->`. *Deduction (-1 mark):* Used a pointer pointing to stack-allocated memory rather than dynamically allocated memory (`new` / `delete`). |
| **Input, Output & Execution** | 3 | **3** | **Excellent.** All programs compile successfully and output student names and marks clearly when run. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **11 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **11 / 12 (91.67%)**
* **Grade Status:** **Excellent**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> Lab 1 evaluation is lenient on similarity matches.

---

### 💬 **Overall Teacher Remarks**

**Dear Wajeeha,** your Lab 1 submission demonstrates a **very good understanding of structures, structure arrays, and structure pointers**. 

To improve further, ensure that:
1. Functions that only print values have return type `void` to prevent compile-time return-type warnings.
2. Dynamic memory allocation (`new` and `delete`) is used when working with pointer-based tasks as requested in the dynamic access rubric.

**Overall performance: Excellent — 11/12.**
