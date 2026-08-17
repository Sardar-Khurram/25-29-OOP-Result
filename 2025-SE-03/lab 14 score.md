# Lab 14 Evaluation Report (In-Class Lab: Vehicle Rental System)

**Student Roll Number:** 2025-SE-03  
**Student Name:** Muhammad Zain Mughal  
**Task Folder Location:** `Open handed Lab\Complete project ready to run\`  

---

### 📊 **Evaluation Rubric & Score Sheet (Max 48 Marks)**

| **Criterion** | **Weight** | **Raw Score (1–4)** | **Weighted Marks** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :---: | :--- |
| **OOP Design** | x 4 | **4** / 4 | **16 / 16** | **Excellent.** Abstract base class `Vehicle` with pure virtual methods (`virtual double calculateCost(int days)=0;`, `virtual void display()=0;`) and virtual destructor. `Car`, `Motorbike`, and `Truck` properly inherit and implement type-specific pricing modifiers (+20% surcharge on Trucks, -10% discount on Motorbikes > 7 days). Polymorphic dispatch in `Rental` constructor dynamically computes the correct costs. |
| **Design Justification** | x 3 | **2** / 4 | **6 / 12** | **Developing.** Clean architecture in code, but the standalone written `DesignNote.txt` file explicitly answering the design questions (Section 4b) was omitted. |
| **Encapsulation & Responsibility** | x 2 | **4** / 4 | **8 / 8** | **Excellent.** Flawless encapsulation and responsibility separation across `Vehicle`, `Customer`, `Rental`, and `RentalSystem` classes with proper destructor memory cleanup in `RentalSystem`. |
| **Working Demo** | x 2 | **4** / 4 | **8 / 8** | **Excellent.** Compiles cleanly with zero errors under C++17. Features a full interactive menu-driven interface enabling dynamic vehicle creation, customer registration, rental assignment, vehicle return, and complete summary reporting. |
| **Code Quality** | x 1 | **4** / 4 | **4 / 4** | **Excellent.** Professional modular structure with header/source split across all classes, header guards, consistent naming, and clear formatting. |

---

### 📈 **Summary of Results**

* **Weighted Total Marks:** **42 / 48 (87.5%)**
* **Grade Status:** **Passed (Excellent)**
* **Plagiarism Penalty:** **0 Marks** (Independent individual submission)

---

### 💬 **Overall Teacher Remarks**

**Dear Muhammad Zain,** your Lab 14 submission demonstrates an outstanding understanding of object-oriented system design, modular multi-file architecture, and interactive CLI development. Excellent work.
