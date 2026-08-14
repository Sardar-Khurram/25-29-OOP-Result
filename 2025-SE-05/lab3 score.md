# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-05  
**Student Name:** Ali Zain-Ul-Abdin
**Task Folder Location:** `LAB 03\product.h & main.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** Modular `product.h` interface with guards (`#ifndef PRODUCT_H`) and `main.cpp` driver. |
| **Member Variables** | 3 | **3** | **Excellent.** All 3 attributes (`name`, `price`, `quantity`) declared under `private:` access specifier with correct data types. |
| **Member Functions (Inside/Outside)** | 3 | **2** | **Good.** Setters validate `!n.empty()`, `p > 0`, `q >= 0` with clear warning messages. <br>*Deduction (-1 mark):* Used all-lowercase method names (`setname`, `setprice`, `setquantity`, `getname`, `getprice`, `getquantity`) instead of standard camelCase (`setName`, `setPrice`, `setQuantity`). |
| **Use of Access Specifiers** | 3 | **3** | **Excellent.** Encapsulation is strictly enforced. |
| **Use of Getters/Setters** | 3 | **3** | **Excellent.** Getters and setters fully functional. |
| **Input/Output & Execution** | 3 | **3** | **Excellent.** Compiles 100% cleanly with `g++` and executes test cases without issues. |

---

### 📈 **Summary of Results**
* **Total Marks:** **17 / 18 (94.4%)**
* **Grade Status:** **Excellent**

### 💬 **Overall Teacher Remarks**
Dear Ali Zain, Great work on Lab 3! Your `Product` class in `LAB 03\product.h` is clean, robust, and handles input validation gracefully. Follow standard C++ camelCase naming conventions (`setName`, `setPrice`, `setQuantity`) in future labs. Keep it up!
