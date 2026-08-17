# Lab 14 Evaluation Report (In-Class Lab: Vehicle Rental System)

**Student Roll Number:** 2025-SE-04  
**Student Name:** Wajeeha Batool  
**Task Folder Location:** `Lab 14 (Vehicle Rental System)\Vehicle Rental System\`  

---

### 📊 **Evaluation Rubric & Score Sheet (Max 48 Marks)**

| **Criterion** | **Weight** | **Raw Score (1–4)** | **Weighted Marks** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :---: | :--- |
| **OOP Design** | x 4 | **4** / 4 | **16 / 16** | **Excellent.** Abstract base class `Vehicle` with 4 pure virtual methods (`getType() = 0`, `calculateCost() = 0`, `getExtraAttribute() = 0`, `displayInfo() = 0`) and virtual destructor. `Car`, `Motorbike`, and `Truck` implement accurate pricing logic (+20% surcharge on Trucks, -10% discount on Motorbikes > 7 days). Runtime polymorphism used extensively throughout `Rental` and `RentalSystem`. |
| **Design Justification** | x 3 | **2** / 4 | **6 / 12** | **Developing.** In-depth inline comments throughout code explaining design choices, but the standalone written `DesignNote.txt` document (Section 4b) was omitted. |
| **Encapsulation & Responsibility** | x 2 | **4** / 4 | **8 / 8** | **Excellent.** Flawless encapsulation across all classes with private data members, getters/setters, auto-incrementing ID trackers, and distinct single-responsibility separation. |
| **Working Demo** | x 2 | **4** / 4 | **8 / 8** | **Excellent.** Compiles cleanly under C++17 with zero errors/warnings. Features a full 10-option interactive menu system with automatic sample data seeding, file I/O persistence (`customers.txt`, `rentals.txt`, `vehicles.txt`), and complete fleet reporting. |
| **Code Quality** | x 1 | **4** / 4 | **4 / 4** | **Excellent.** Superior code organization with header/source split, const correctness, header guards, clear naming, and robust input validation/stream clearance. |

---

### 📈 **Summary of Results**

* **Weighted Total Marks:** **42 / 48 (87.5%)**
* **Grade Status:** **Passed (Excellent)**
* **Plagiarism Penalty:** **0 Marks** (Independent individual submission)

---

### 💬 **Overall Teacher Remarks**

**Dear Wajeeha,** your Lab 14 submission is an exemplary, enterprise-grade implementation featuring seamless OOP inheritance, polymorphic billing, and file-based data persistence. Outstanding work.
