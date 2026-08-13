# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2024-SE-27  
**Student Name:** Muhammad Arslan  
**Task Folder Location:** `Lab#03\product.h & main.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** Modular `product.h` header with preprocessor guards (`#ifndef PRODUCT_H`) and `main.cpp` driver. |
| **Member Variables** | 3 | **3** | **Excellent.** Attributes (`name`, `price`, `quantity`) declared under `private:` with proper data types (`string`, `double`, `int`). |
| **Member Functions (Inside/Outside)** | 3 | **2** | **Good.** Setters validate `!n.empty()`, `p > 0`, `q >= 0` with clear warning messages. <br>*Deduction (-1 mark):* Used all-lowercase method names (`setname`, `setprice`, `setquantity`, `getname`, `getprice`, `getquantity`). |
| **Use of Access Specifiers** | 3 | **3** | **Excellent.** Encapsulation is strictly followed. |
| **Use of Getters/Setters** | 3 | **3** | **Excellent.** Getters and setters fully functional. |
| **Input/Output & Execution** | 3 | **3** | **Excellent.** Compiles 100% cleanly with `g++` and executes test sequence perfectly. |

---

### 📈 **Summary of Results**
* **Core Rubric Score:** **17 / 18**
* **Plagiarism Penalty:** **-5 Marks** *(100% identical code match with students `2024-SE-18`, `2024-SE-29`, `2024-SE-30`)*
* **Final Marks:** **12 / 18 (66.7%)**
* **Grade Status:** **Plagiarism Penalty (-5)**

---

### ⚠️ **Plagiarism Audit Detail**
> [!WARNING]
> Manual inspection detected a **100% character-for-character code match** between your `Lab#03\product.h` & `main.cpp` and student `2024-SE-18` (Syed Abdul Rehman)'s submission files. Per course policy, a flat **-5 marks penalty** has been applied to both submissions.

### 💬 **Overall Teacher Remarks**
Dear Muhammad Arslan, Please submit your work independently. Duplicate code submissions result in heavy plagiarism penalties. Ensure to follow standard C++ camelCase method naming (`setName`, `setPrice`, `setQuantity`) in future labs.
