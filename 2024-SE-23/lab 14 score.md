# Lab 14 Evaluation Report (In-Class Lab: Vehicle Rental System)

**Student Roll Number:** 2024-SE-23  
**Student Name:** Muqaddas Kiani  
**Task Folder Location:** `week14\`  

---

### 📊 **Evaluation Rubric & Score Sheet (Max 48 Marks)**

| **Criterion** | **Weight** | **Raw Score (1–4)** | **Weighted Marks** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :---: | :--- |
| **OOP Design** | x 4 | **4** / 4 | **16 / 16** | **Excellent.** `Vehicle` abstract base class with pure virtual method `virtual double calculateCost(int days)=0;`, virtual `display()`, and virtual destructor. `Car`, `Motorbike`, and `Truck` properly inherit and implement type-specific pricing modifiers (+20% surcharge on Trucks, -10% discount on Motorbikes > 7 days). Polymorphic dispatch correctly drives cost calculations in `Rental`. |
| **Design Justification** | x 3 | **2** / 4 | **6 / 12** | **Developing.** Clean and intuitive code design, but the standalone written `DesignNote.txt` file explicitly answering the design questions (Section 4b) was omitted. |
| **Encapsulation & Responsibility** | x 2 | **4** / 4 | **8 / 8** | **Excellent.** Solid encapsulation and responsibility separation across `Vehicle`, `Customer`, `Rental`, and `RentalSystem` classes. |
| **Working Demo** | x 2 | **3** / 4 | **6 / 8** | **Good.** Code compiles cleanly with zero errors under C++17. `main()` successfully demonstrates vehicle creation, customer registration, rental processing, and summary output. Demonstrating `returnVehicle` in `main()` would make the demo complete. |
| **Code Quality** | x 1 | **4** / 4 | **4 / 4** | **Excellent.** Well-organized header/source file split for all 5 classes with proper include guards and clear syntax. |

---

### 📈 **Summary of Results**

* **Weighted Total Marks:** **40 / 48 (83.3%)**
* **Grade Status:** **Passed (Good)**
* **Plagiarism Penalty:** **0 Marks** (Independent individual submission)

---

### 💬 **Overall Teacher Remarks**

**Dear Muqaddas,** your Lab 14 submission exhibits a strong understanding of object-oriented design, abstract classes, and polymorphic pricing calculations. Excellent work on the modular multi-file architecture.
