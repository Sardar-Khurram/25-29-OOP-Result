# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-31  
**Student Name:** Khawaja Absar Ali  
**Task Folder Location:** `LAB-TASKS\LAB-03\header1.h & Task1.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** Class declaration separated into `header1.h` and driver into `Task1.cpp` with preprocessor guards (`#ifndef PRODUCT_H`). |
| **Member Variables** | 3 | **2** | **Good.** Attributes defined under `private:` access specifier. <br>*Deduction (-1 mark):* Used `float price` instead of `double price` specified in rubric requirements. |
| **Member Functions (Inside/Outside)** | 3 | **3** | **Excellent.** Setters validate empty string (`!n.empty()`), positive price (`p > 0`), and non-negative quantity (`q >= 0`). |
| **Use of Access Specifiers** | 3 | **3** | **Excellent.** Encapsulation is strictly followed (`private:` attributes, `public:` methods). |
| **Use of Getters/Setters** | 3 | **3** | **Excellent.** Proper getters and setters implemented with validation messages. |
| **Input/Output & Execution** | 3 | **2** | **Good.** Formats currency output cleanly using `<iomanip>` (`fixed` & `setprecision(2)`). <br>*Deduction (-1 mark):* In `Task1.cpp`, line 3 includes `#include "header.h"`, but the header file in the folder is named `header1.h`, causing an include compilation error. |

---

### 📈 **Summary of Results**
* **Total Marks:** **16 / 18 (88.9%)**
* **Grade Status:** **Passed with feedback**

### 💬 **Overall Teacher Remarks**
Dear Khawaja Absar, Good submission for Lab 3! Your class structure, setter validation, and formatted output are written well. To fix compilation: rename your include header in `Task1.cpp` to `#include "header1.h"` to match your file name, and use `double` for price attributes as specified in the rubric. Good effort!
