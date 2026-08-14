# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-22  
**Student Name:** Noor Ul Ain Abbasi
**Task Folder Location:** `Lab 03\header.h.h & 1.cpp.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** Class declaration separated into `header.h.h` and driver into `1.cpp.cpp` with preprocessor guards (`#ifndef PRODUCT_H`). |
| **Member Variables** | 3 | **2** | **Good.** Attributes defined under `private:` access specifier. <br>*Deduction (-1 mark):* Used `float price` instead of `double price` specified in rubric requirements. |
| **Member Functions (Inside/Outside)** | 3 | **3** | **Excellent.** Setters validate empty string (`!n.empty()`), positive price (`p > 0`), and non-negative quantity (`q >= 0`). |
| **Use of Access Specifiers** | 3 | **3** | **Excellent.** Encapsulation is strictly followed (`private:` attributes, `public:` methods). |
| **Use of Getters/Setters** | 3 | **3** | **Excellent.** Proper getters and setters implemented with validation messages. |
| **Input/Output & Execution** | 3 | **3** | **Excellent.** Compiles cleanly with `g++` and formats currency output cleanly using `<iomanip>` (`fixed` & `setprecision(2)`). |

---

### 📈 **Summary of Results**
* **Total Marks:** **17 / 18 (94.4%)**
* **Grade Status:** **Excellent**

### 💬 **Overall Teacher Remarks**
Dear Noor Ul Ain, Great submission for Lab 3! Your modular design, input validation, and formatted output using `<iomanip>` compile cleanly and run perfectly. Be mindful of file extension double-naming (`header.h.h`) and use `double` for price attributes as specified in the rubric. Good job!
