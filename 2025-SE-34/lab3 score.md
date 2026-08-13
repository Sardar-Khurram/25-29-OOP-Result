# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-34  
**Student Name:** Niqash Ali  
**Task Folder Location:** `OOP\Week 3\Task 1.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **2** | **Good.** Class defined cleanly in `OOP\Week 3\Task 1.cpp`. <br>*Deduction (-1 mark):* Used all-lowercase class name `product` instead of `Product`. |
| **Member Variables** | 3 | **3** | **Excellent.** Attributes (`name`, `price`, `quantity`) declared under `private:` with proper data types. |
| **Member Functions (Inside/Outside)** | 3 | **2** | **Good.** Setters implement validation. <br>*Deduction (-1 mark):* Validation condition in `setname` checks single space `" "` instead of empty string `""`, and `setprice` condition `p < 0` allows zero price. |
| **Use of Access Specifiers** | 3 | **3** | **Excellent.** Encapsulation is strictly followed (`private:` data members, `public:` methods). |
| **Use of Getters/Setters** | 3 | **2** | **Good.** Getters and setters present. <br>*Deduction (-1 mark):* All-lowercase method names (`setname`, `setprice`, `setquantity`, `getname`, `getprice`, `getquantity`). |
| **Input/Output & Execution** | 3 | **2** | **Good.** Compiles cleanly with `g++`. <br>*Deduction (-1 mark):* In `main()`, completely skipped testing invalid inputs (`p.setname("")`, `p.setprice(-50)`, `p.setquantity(-2)`). |

---

### 📈 **Summary of Results**
* **Core Rubric Score:** **14 / 18**
* **Plagiarism Penalty:** **-5 Marks** *(100% identical code match with student `2025-SE-35`)*
* **Final Marks:** **9 / 18 (50.0%)**
* **Grade Status:** **Plagiarism Penalty (-5)**

---

### ⚠️ **Plagiarism Audit Detail**
> [!WARNING]
> Manual inspection detected a **100% character-for-character code match** between your `OOP\Week 3\Task 1.cpp` and student `2025-SE-35` (Muhammad Zakarya)'s submission file `Week 3\Task 1.cpp`. Per course policy, a flat **-5 marks penalty** has been applied to both submissions.

### 💬 **Overall Teacher Remarks**
Dear Niqash, Your core implementation is mostly working, but please write your code independently. Duplicate submissions result in heavy plagiarism penalties. Ensure to follow standard C++ camelCase naming (`Product`, `setName`, `setPrice`) and check empty strings `n.empty()` inside setters.
