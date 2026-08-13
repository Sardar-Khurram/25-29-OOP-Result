# Lab 5 Evaluation Report (Inheritance)

**Student Roll Number:** 2024-SE-23
**Student Name:** Muqaddas Kiani
**Task Folder Location:** `week5\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Inheritance Implementation** | 3 | **2** | **Good Implementation:** Syntax for Single (`Person` -> `Student`), Multilevel (`Person` -> `Employee` -> `Manager`), Hierarchical (`Employee` -> `Developer` / `Designer`), and Multiple Inheritance (`Printer` + `Scanner` -> `Photocopier`) is written correctly. However, Tasks 1, 2, and 3 are commented out in `week5.cpp`, leaving only Task 4 active during compilation. |
| **Classes, Attributes & Functions** | 3 | **3** | **Excellent:** All required classes, member attributes (`name`, `age`, `student_id`, `employee_id`, `department`, `programming_language`, `design_tool`), and member functions (`input` and `display` functions, `print_document`, `scan_document`, `photocopy`) are correctly defined with appropriate access specifiers (`protected`, `private`, `public`). |
| **Object Creation & Functionality** | 3 | **2** | **Good:** Object instantiation and method invocations are written properly for all 4 tasks. In Task 4, `Photocopier` correctly invokes parent methods inside `photocopy()`. Marks are slightly reduced because `main()` functions for Tasks 1, 2, and 3 are commented out in the final submission. |
| **Input, Output & Execution** | 3 | **2** | **Good:** The file compiles without error. Output for the active Task 4 (Multiple Inheritance) is clean and accurate. To test Tasks 1-3, code blocks must be manually uncommented. Input buffer handling (`cin.ignore()`) is included appropriately. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **9 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Satisfactory**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> Lab 5 is lenient on plagiarism.

---

### 💬 **Overall Teacher Remarks**

**Dear Muqaddas,**

You have demonstrated a solid understanding of object-oriented programming and inheritance concepts in C++. All four requested types of inheritance—Single, Multilevel, Hierarchical, and Multiple Inheritance—were implemented accurately with clean class definitions, appropriate access specifiers, and well-structured input/display member functions.

To improve your score in future lab submissions:
- When placing all lab tasks into a single C++ source file, combine them under a single `main()` menu function or execute them sequentially rather than commenting out earlier tasks. This allows all tasks to compile and run seamlessly in one go.

Great effort overall! Keep up the good work.
