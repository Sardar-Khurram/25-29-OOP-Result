# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-40  
**Student Name:** Danish Iqbal
**Task Folder Location:** `LAB 03 Encapsulation\Product.h & main.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** Modular `Product.h` interface with guards (`#ifndef PRODUCT_H`) and `main.cpp` driver. |
| **Member Variables** | 3 | **3** | **Excellent.** Attributes (`name`, `price`, `quantity`) declared under `private:`. |
| **Member Functions (Inside/Outside)** | 3 | **1** | **Needs Improvement.** Inverted setter validation logic: attributes are assigned invalid values unconditionally (`name = a; price = b; quantity = c;`), and error messages are printed when inputs ARE valid (`if (!a.empty()) cout << "Error...";`). |
| **Use of Access Specifiers** | 3 | **3** | **Excellent.** Encapsulation is strictly followed (`private:` attributes, `public:` methods). |
| **Use of Getters/Setters** | 3 | **2** | **Good.** Getters and setters present. |
| **Input/Output & Execution** | 3 | **2** | **Good.** Compiles cleanly with `g++`, but outputs inverted error messages during execution. |

---

### 📈 **Summary of Results**
* **Core Rubric Score:** **14 / 18**
* **Plagiarism Penalty:** **-5 Marks** *(100% identical code match with student `2025-SE-42`)*
* **Final Marks:** **9 / 18 (50.0%)**
* **Grade Status:** **Plagiarism Penalty (-5)**

---

### ⚠️ **Plagiarism Audit Detail**
> [!WARNING]
> Manual inspection detected a **100% character-for-character code match** between your `LAB 03 Encapsulation\Product.h` & `main.cpp` and student `2025-SE-42` (Abdullah Khan)'s submission files in `LAB 03`. Per course policy, a flat **-5 marks penalty** has been applied to both submissions.

### 💬 **Overall Teacher Remarks**
Dear Danish, Please write your code independently. Submitting duplicate code results in heavy plagiarism penalties. Also, fix your setter validation logic: do not assign values unconditionally before checking `if(condition)`, and print error messages when inputs are invalid (`if (a.empty())`), not when they are valid.
