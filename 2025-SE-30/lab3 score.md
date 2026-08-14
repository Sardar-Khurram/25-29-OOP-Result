# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-30  
**Student Name:** Malik Waqar Latif
**Task Folder Location:** `Lab 3\1.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** `Product` class structure defined cleanly and tested in `1.cpp`. |
| **Member Variables** | 3 | **3** | **Excellent.** Attributes (`name`, `price`, `quantity`) declared under `private:` with proper data types. |
| **Member Functions (Inside/Outside)** | 3 | **2** | **Good.** Setter methods check conditions (`n != ""`, `p > 0`, `q >= 0`). <br>*Deduction (-1 mark):* Setters do not print validation error messages when invalid data is provided. |
| **Use of Access Specifiers** | 3 | **3** | **Excellent.** Encapsulation is strictly followed. |
| **Use of Getters/Setters** | 3 | **3** | **Excellent.** All getters and setters present and functional. |
| **Input/Output & Execution** | 3 | **2** | **Good.** Compiles cleanly with `g++` and runs cleanly. <br>*Deduction (-1 mark):* In `main()`, completely skipped testing invalid inputs (`p.setName("")`, `p.setPrice(-50)`, `p.setQuantity(-2)`). |

---

### 📈 **Summary of Results**
* **Total Marks:** **16 / 18 (88.9%)**
* **Grade Status:** **Passed with feedback**

### 💬 **Overall Teacher Remarks**
Dear Malik Waqar, Good submission for Lab 3! Your class encapsulation and getters/setters are implemented correctly. To improve: 1) Add `cout` error messages inside setters when invalid values are passed, and 2) Include the invalid input test calls in `main()`. Keep working hard!
