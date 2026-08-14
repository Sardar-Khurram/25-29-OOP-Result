# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-12  
**Student Name:** Adeeba Mansoor Qureshi
**Task Folder Location:** `Lab Tasks\04-Lab(Encapsulation)\product.h & product.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** Modular `product.h` header with preprocessor guards (`#ifndef PRODUCT_H`) and `product.cpp` driver. |
| **Member Variables** | 3 | **3** | **Excellent.** Attributes (`name`, `price`, `quantity`) private and correctly typed (`string`, `double`, `int`). |
| **Member Functions (Inside/Outside)** | 3 | **2** | **Good.** Setter validation implemented for price (`p > 0`) and quantity (`q >= 0`). <br>*Deduction (-1 mark):* Logic typo in `setName`: `if(name!="")` checks member variable `name` instead of incoming parameter `n`. |
| **Use of Access Specifiers** | 3 | **3** | **Excellent.** Encapsulation is strictly enforced (`private:` data members, `public:` methods). |
| **Use of Getters/Setters** | 3 | **3** | **Excellent.** Getters and setters present and functional. |
| **Input/Output & Execution** | 3 | **3** | **Excellent.** Code compiles 100% cleanly with `g++` and executes test sequence. |

---

### 📈 **Summary of Results**
* **Total Marks:** **17 / 18 (94.4%)**
* **Grade Status:** **Excellent**

### 💬 **Overall Teacher Remarks**
Dear Adeeba, Great work on your `Product` encapsulation task in `Lab Tasks\04-Lab(Encapsulation)`! Code compiles cleanly and runs test cases smoothly. Just watch out for a small typo in `setName`: `if(name!="")` checks the uninitialized attribute `name` instead of the incoming parameter `n`. Minor detail, otherwise great work!
