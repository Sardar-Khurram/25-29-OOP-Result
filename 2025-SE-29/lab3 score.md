# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-29  
**Student Name:** Shiza Mukhtar  
**Task Folder Location:** `Lab 3 tasks\Lab 3 tasks.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** `Product` class defined cleanly and instantiated in `Lab 3 tasks.cpp`. |
| **Member Variables** | 3 | **3** | **Excellent.** Private attributes (`name`, `price`, `quantity`) correctly declared with proper data types (`string`, `double`, `int`). |
| **Member Functions (Inside/Outside)** | 3 | **3** | **Excellent.** Setters validate empty string (`n == ""`), positive price (`p <= 0`), and negative quantity (`q < 0`). |
| **Use of Access Specifiers** | 3 | **3** | **Excellent.** Encapsulation is strictly followed (`private:` attributes, `public:` methods). |
| **Use of Getters/Setters** | 3 | **3** | **Excellent.** All getters and setters fully functional with clear error messages. |
| **Input/Output & Execution** | 3 | **2** | **Good.** Compiles cleanly with `g++` and displays output cleanly. <br>*Deduction (-1 mark):* In `main()`, forgot to test invalid quantity `p.setQuantity(-2);` (only tested invalid name `""` and price `-50`). |

---

### 📈 **Summary of Results**
* **Total Marks:** **17 / 18 (94.4%)**
* **Grade Status:** **Excellent**

### 💬 **Overall Teacher Remarks**
Dear Shiza, Great job on Lab 3! Your class structure, encapsulation, and setter validation logic are written cleanly. Remember to test all invalid input driver cases (`p.setQuantity(-2)`) in `main()`. Well done!
