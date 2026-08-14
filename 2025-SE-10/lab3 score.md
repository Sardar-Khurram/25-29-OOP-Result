# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-10  
**Student Name:** Misbah Khurshid
**Task Folder Location:** `Lab 03\Lab_3_ (Encapsulation).cpp`  

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** `Product` class defined cleanly and tested in `Lab_3_ (Encapsulation).cpp`. |
| **Member Variables** | 3 | **3** | **Excellent.** Private attributes (`name`, `price`, `quantity`) correctly declared with proper data types. |
| **Member Functions (Inside/Outside)** | 3 | **3** | **Excellent.** Setters validate `n != ""`, `p > 0`, `q >= 0` with clear error messages. |
| **Use of Access Specifiers** | 3 | **3** | **Excellent.** Encapsulation is strictly followed (`private:` data members, `public:` methods). |
| **Use of Getters/Setters** | 3 | **3** | **Excellent.** Getters and setters present and fully functional. |
| **Input/Output & Execution** | 3 | **2** | **Good.** Code compiles and runs cleanly. <br>*Deduction (-1 mark):* In `main()`, user input is read interactively via `cin >>` instead of running the rubric's automated test sequence (`p.setName("")`, `p.setPrice(-50)`, `p.setQuantity(-2)`) first. |

---

### 📈 **Summary of Results**
* **Total Marks:** **17 / 18 (94.4%)**
* **Grade Status:** **Excellent**

### 💬 **Overall Teacher Remarks**
Dear Misbah, Great job on Lab 3! Your `Product` class handles input validation effectively. For future labs, ensure `main()` includes the required automated test driver cases alongside user prompts. Good effort!
