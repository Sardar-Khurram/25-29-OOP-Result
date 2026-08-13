# Lab 4 Evaluation Report (Constructors & Destructors)
**Student Roll Number:** 2025-SE-40  
**Student Name:** Danish Iqbal  
**Task Folder Location:** `LAB 04 Constructor\`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Constructor Implementation** | 3 | **2** | **Good.** Task 1 default constructor initializes `ID=0`, `name="Not Assign"`, `salary=0.01`. Task 2 parameterized constructor uses `this->` pointer. <br>*Deduction (-1 mark):* Task 2 attributes were declared `public:` instead of `private:` as specified in rubric requirements. |
| **Constructor Overloading** | 3 | **3** | **Excellent.** Task 3 `Rectangle` class overloads default (1.0), 2-parameter (`length`, `width`), and 1-parameter (square) constructors cleanly with `area()` method. |
| **Destructor & Object Management** | 3 | **3** | **Excellent.** Task 4 `Locker` class destructor correctly prints deallocation message. Demonstrates both scoped stack allocation `{}` and dynamic heap allocation via `new`/`delete`. |
| **Output & Execution** | 3 | **3** | **Excellent.** All 4 C++ files compile 100% cleanly with `g++` and execute with clear output formatting. |

---

### 📈 **Summary of Results**
* **Total Marks:** **11 / 12**
* **Plagiarism Penalty:** **-3 Marks** *(100% identical code match with student `2025-SE-42`)*
* **Final Marks:** **8 / 12 (66.7%)**
* **Grade Status:** **Plagiarism Penalty (-3)**

---

### ⚠️ **Plagiarism Audit Detail**
> [!WARNING]
> Manual inspection detected a **100% character-for-character code match** across all 4 tasks between your `LAB 04 Constructor` files and student `2025-SE-42` (Muhammad Arif)'s submission files. Per course policy, a flat **-3 marks penalty** has been applied to both submissions.

### 💬 **Overall Teacher Remarks**
Dear Danish Iqbal, Your core implementation is working, but please write your code independently. Duplicate submissions result in heavy plagiarism penalties. Also, keep data members `private` to maintain proper encapsulation in Task 2.
