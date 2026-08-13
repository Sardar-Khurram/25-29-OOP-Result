# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-01  
**Student Name:** Syeda Mariam Gillani  
**Task Folder Location:** `Lab-03\product.h & product.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | Excellent. `Product` class is properly defined in `product.h` with header guards (`#ifndef PRODUCT_H`). |
| **Member Variables** | 3 | **3** | Excellent. Attributes (`name`, `price`, `quantity`) declared under `private:` access specifier. |
| **Member Functions (Inside/Outside)** | 3 | **3** | Excellent. Inline methods implement proper validation logic (`!n.empty()`, `p > 0`, `q >= 0`). |
| **Use of Access Specifiers** | 3 | **3** | Excellent. Encapsulation strictly enforced with private attributes and public methods. |
| **Use of Getters/Setters** | 3 | **3** | Excellent. Setters print validation error messages when invalid data is provided. |
| **Input/Output & Execution** | 3 | **2.5** | Very Good. Test driver in `product.cpp` tests invalid inputs first, then valid values. <br>*Minor Note (-0.5):* `#include "product.h"` placed before `using namespace std;` on line 4, and `setprecision(2)` used without `#include <iomanip>`. |

---

### 📈 **Summary of Results**
* **Total Marks:** **17.5 / 18 (97.2%)**
* **Grade Status:** **Excellent**

### 💬 **Overall Teacher Remarks**
Dear Syeda Mariam, Outstanding job! Your encapsulation logic and setter input validation are 100% correct. Placing `using namespace std;` inside `product.h` (or above line 2 in `product.cpp`) and adding `#include <iomanip>` resolves compilation instantly. Excellent work!
