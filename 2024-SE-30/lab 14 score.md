# Lab 14 Evaluation Report (In-Class Lab: Vehicle Rental System)

**Student Roll Number:** 2024-SE-30  
**Student Name:** Maryam shaheen  
**Task Folder Location:** `vechicle rental system\`  

---

### 📊 **Evaluation Rubric & Score Sheet (Max 48 Marks)**

| **Criterion** | **Weight** | **Raw Score (1–4)** | **Weighted Marks** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :---: | :--- |
| **OOP Design** | x 4 | **4** / 4 | **16 / 16** | **Excellent.** Base class `Vehicle` with virtual `calculateCost(days)` and virtual `display()`. `Car`, `Motorbike`, and `Truck` properly inherit and implement specific rate modifiers (+20% surcharge on Truck, -10% discount on Motorbike > 7 days). Polymorphic dispatch correctly calculates rental costs in `Rental`. |
| **Design Justification** | x 3 | **2** / 4 | **6 / 12** | **Developing.** Clean and intuitive code design, but the standalone written `DesignNote.txt` file answering the design questions (Section 4b) was omitted. |
| **Encapsulation & Responsibility** | x 2 | **3** / 4 | **6 / 8** | **Good.** `Vehicle`, `Customer`, and `RentalSystem` have clean encapsulation. `Rental` class uses public fields rather than private members with getters/setters. |
| **Working Demo** | x 2 | **4** / 4 | **8 / 8** | **Excellent.** Compiles cleanly with zero errors under C++17. `main()` successfully demonstrates the full scenario: creating 3 vehicle types, registering 2 customers, 2 rentals, returning 1 vehicle, and printing a comprehensive active rental and fleet availability summary. |
| **Code Quality** | x 1 | **4** / 4 | **4 / 4** | **Excellent.** Complete header/source file split across all classes with proper include guards and clean formatting. |

---

### 📈 **Summary of Results**

* **Weighted Total Marks:** **40 / 48 (83.3%)**
* **Grade Status:** **Passed (Good)**
* **Plagiarism Penalty:** **0 Marks** (Independent individual submission)

---

### 💬 **Overall Teacher Remarks**

**Dear Maryam,** your Lab 14 submission demonstrates a solid understanding of object-oriented design and multi-file project architecture. Excellent job implementing the full rental and return workflow.
