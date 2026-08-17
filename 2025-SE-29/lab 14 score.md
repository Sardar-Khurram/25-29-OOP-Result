# Lab 14 Evaluation Report (In-Class Lab: Vehicle Rental System)

**Student Roll Number:** 2025-SE-29  
**Student Name:** Shiza Mukhtar  
**Task Folder Location:** `Vehicle Rental System\`  

---

### 📊 **Evaluation Rubric & Score Sheet (Max 48 Marks)**

| **Criterion** | **Weight** | **Raw Score (1–4)** | **Weighted Marks** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :---: | :--- |
| **OOP Design** | x 4 | **4** / 4 | **16 / 16** | **Excellent.** Base class `Vehicle` with virtual `calculateCost(days)` and virtual `display()`, virtual destructor. Subclasses `Car`, `Motorbike`, and `Truck` properly inherit and implement specific rate modifiers (+20% surcharge on Trucks, -10% discount on Motorbikes > 7 days). Runtime polymorphism in `Rental` constructor dynamically executes the correct cost calculation on base pointers. |
| **Design Justification** | x 3 | **4** / 4 | **12 / 12** | **Excellent.** Separate `DesignNote.txt` answering all design questions with strong reasoning: articulates inheritance vs type fields, central ownership in `RentalSystem`, single responsibility, and the exact polymorphic dispatch point. |
| **Encapsulation & Responsibility** | x 2 | **4** / 4 | **8 / 8** | **Excellent.** Strict encapsulation with private data members across all classes (`Vehicle`, `Customer`, `Rental`, `RentalSystem`) with proper accessors/mutators and dynamic vector memory cleanup in `RentalSystem` destructor. |
| **Working Demo** | x 2 | **4** / 4 | **8 / 8** | **Excellent.** Compiles cleanly with zero errors under C++17. Features a full interactive menu with vehicle model presets (Toyota Corolla, Civic, Alto, Kia, CD 70, YBR, GS 150, Hino, Mazda, Isuzu), customer registration, rental assignment, returns, and summary reports. |
| **Code Quality** | x 1 | **4** / 4 | **4 / 4** | **Excellent.** Modular header/source split across all classes, include guards, const-correctness, and robust input validation/stream recovery. |

---

### 📈 **Summary of Results**

* **Weighted Total Marks:** **48 / 48 (100.0%)**
* **Grade Status:** **Passed (Full Marks - Outstanding)**
* **Plagiarism Penalty:** **0 Marks** (Independent individual submission)

---

### 💬 **Overall Teacher Remarks**

**Dear Shiza,** your Lab 14 submission demonstrates an outstanding grasp of object-oriented design principles, robust menu interfaces, and comprehensive design documentation. Perfect score.
