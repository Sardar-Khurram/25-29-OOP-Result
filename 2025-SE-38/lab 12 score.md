# Lab 12 Evaluation Report (Pure Virtual Functions & Abstract Classes)

**Student Roll Number:** 2025-SE-38
**Student Name:** Ammar Yasir
**Task Folder Location:** `Lab No 11&12\Lab 11&12 Task 05.cpp`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Abstract Base Class & Pure Virtual Function** | 3 | **1** | Needs improvement. Base class declared virtual void PerformDuty(); without = 0;, failing to make HospitalStaff a pure abstract class. |
| **Derived Classes & Function Overriding** | 3 | **3** | Excellent. Doctor, Nurse, and Receptionist classes properly inherit from HospitalStaff and implement PerformDuty(). |
| **Object Creation & Polymorphic Call** | 3 | **3** | Excellent. Objects of all 3 derived classes created and PerformDuty() invoked on each in main(). |
| **Execution, Output & Clean Compilation** | 3 | **1** | Needs improvement. Compilation failed at linking stage due to missing pure virtual syntax (= 0;) on base class PerformDuty(). Adding = 0; resolves all errors. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **8 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **8 / 12 (66.7%)**
* **Grade Status:** **Passed (Good)**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**
> No similarity matches found.

---

### 💬 **Overall Teacher Remarks**

**Dear Ammar,** your code logic is very solid, but ensure to add `= 0;` to pure virtual declarations in abstract base classes to avoid linker errors.
