# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-33  
**Student Name:** Rohail Abbas
**Task Folder Location:** `LAB 3 TASK1.cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** `Product` class structure defined cleanly and tested in `LAB 3 TASK1.cpp`. |
| **Member Variables** | 3 | **3** | **Excellent.** Attributes (`name`, `price`, `quantity`) declared under `private:` with proper data types. |
| **Member Functions (Inside/Outside)** | 3 | **3** | **Excellent.** Setters validate `n != ""`, `p > 0`, `q >= 0` with clear error messages. |
| **Use of Access Specifiers** | 3 | **3** | **Excellent.** Encapsulation is strictly followed (`private:` attributes, `public:` methods). |
| **Use of Getters/Setters** | 3 | **3** | **Excellent.** All getters and setters present and functional. |
| **Input/Output & Execution** | 3 | **2** | **Good.** Compiles cleanly with `g++` and runs cleanly. <br>*Deduction (-1 mark):* In `main()`, user input is read interactively via `cin >>` instead of running the rubric's automated test sequence (`p.setName("")`, `p.setPrice(-50)`, `p.setQuantity(-2)`) first. |

---

### 📈 **Summary of Results**
* **Total Marks:** **17 / 18 (94.4%)**
* **Grade Status:** **Excellent**

### 💬 **Overall Teacher Remarks**
Dear Rohail, Great submission for Lab 3! Your class encapsulation and getters/setters are implemented correctly. Include the required automated test driver cases alongside user prompts in `main()` for future labs. Good effort!
