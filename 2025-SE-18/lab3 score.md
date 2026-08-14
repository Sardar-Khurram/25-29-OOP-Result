# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-18  
**Student Name:** Tahreem Rasheed
**Task Folder Location:** `encapsulation\encapsulation.cpp & header.h`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **2** | **Good.** Class header structure defined with preprocessor guards (`#ifndef PRODUCT_H`). <br>*Deductions (-1 mark):* Used all-lowercase class name `product` instead of `Product`, and lacks a `main()` execution driver function in all `.cpp` files. |
| **Member Variables** | 3 | **2** | **Good.** Attributes defined under `private:` access specifier. <br>*Deduction (-1 mark):* Declared `float price` instead of `double price` specified in rubric requirements. |
| **Member Functions (Inside/Outside)** | 3 | **2** | **Good.** Setters implement input validation (`!n.empty()`, `p > 0`, `q >= 0`). <br>*Deduction (-1 mark):* Method names use all-lowercase (`setname`, `setprice`, `setquantity`) instead of standard C++ camelCase (`setName`, `setPrice`, `setQuantity`). |
| **Use of Access Specifiers** | 3 | **3** | **Excellent.** Encapsulation is strictly followed (`private:` attributes, `public:` methods). |
| **Use of Getters/Setters** | 3 | **3** | **Excellent.** Getters and setters present with validation messages. |
| **Input/Output & Execution** | 3 | **1** | **Needs Improvement.** All files in `encapsulation\` (`header.h`, `encapsulation.cpp`, `header file.cpp`) contain identical class header definitions without a `main()` function, causing compilation linker failure (`undefined reference to main`). |

---

### 📈 **Summary of Results**
* **Total Marks:** **13 / 18 (72.2%)**
* **Grade Status:** **Passed with feedback**

### 💬 **Overall Teacher Remarks**
Dear Tahreem, Good effort on implementing setter validation logic in your `product` class! Manual inspection shows that all 3 files in your `encapsulation\` folder (`header.h`, `encapsulation.cpp`, and `header file.cpp`) contain identical header class code without a `main()` function, which causes compilation to fail with `undefined reference to main`. To improve in future labs: 1) Include a `main()` function in your `.cpp` file to test your class, 2) Use `double` for price attributes, and 3) Follow standard C++ camelCase naming (`Product`, `setName`, `setPrice`).
