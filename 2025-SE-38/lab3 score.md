# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-38  
**Student Name:** Ammar Yasir  
**Task Folder Location:** `Lab No 03\Product.h & main.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** Class declaration separated into `Product.h` and driver into `main.cpp`. |
| **Member Variables** | 3 | **3** | **Excellent.** Attributes (`name`, `price`, `quantity`) declared under `private:` with proper data types. |
| **Member Functions (Inside/Outside)** | 3 | **2** | **Good.** Setters implement validation (`!n.empty()`, `p > 0`). <br>*Deduction (-1 mark):* Setter validation condition `if(q > 0)` rejects quantity of `0` (rubric specifies `q >= 0`, as zero stock is a valid quantity level). |
| **Use of Access Specifiers** | 3 | **3** | **Excellent.** Encapsulation is strictly followed. |
| **Use of Getters/Setters** | 3 | **3** | **Excellent.** Getters and setters present and fully functional. |
| **Input/Output & Execution** | 3 | **3** | **Excellent.** Compiles cleanly with `g++` and executes test driver sequence perfectly. |

---

### 📈 **Summary of Results**
* **Total Marks:** **17 / 18 (94.4%)**
* **Grade Status:** **Excellent**

### 💬 **Overall Teacher Remarks**
Dear Student, Great job on Lab 3! Your modular header design, test driver execution, and validation error messages are implemented well. Note that quantity can validly be `0` (empty stock), so use `q >= 0` in `setQuantity`. Good effort!
