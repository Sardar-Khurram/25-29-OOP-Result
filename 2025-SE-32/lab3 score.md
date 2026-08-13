# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-32  
**Student Name:** Laiba Imtiaz  
**Task Folder Location:** `Lab 3\Lab03Task05.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** `Product` class defined cleanly and instantiated in `Lab03Task05.cpp`. |
| **Member Variables** | 3 | **3** | **Excellent.** Private attributes (`name`, `price`, `quantity`) correctly declared with proper data types (`string`, `double`, `int`). |
| **Member Functions (Inside/Outside)** | 3 | **3** | **Excellent.** Setters validate non-empty string (`n != ""`), positive price (`p > 0`), and non-negative quantity (`q >= 0`). |
| **Use of Access Specifiers** | 3 | **3** | **Excellent.** Encapsulation is strictly followed (`private:` attributes, `public:` methods). |
| **Use of Getters/Setters** | 3 | **3** | **Excellent.** Getters and setters present and fully functional. |
| **Input/Output & Execution** | 3 | **2** | **Good.** Compiles cleanly with `g++` and executes test cases cleanly. <br>*Deduction (-1 mark):* In `main()`, completely skipped testing invalid inputs (`p.setName("")`, `p.setPrice(-50)`, `p.setQuantity(-2)`). |

---

### 📈 **Summary of Results**
* **Total Marks:** **17 / 18 (94.4%)**
* **Grade Status:** **Excellent**

### 💬 **Overall Teacher Remarks**
Dear Laiba, Great work on Lab 3! Your `Product` class structure and setter validation logic are implemented cleanly. Remember to include the invalid input test driver calls (`setName("")`, `setPrice(-50)`, `setQuantity(-2)`) in `main()` for future labs. Well done!
