# Lab 14 Evaluation Report (In-Class Lab: Vehicle Rental System)

**Student Roll Number:** 2025-SE-15  
**Student Name:** Samia Arshad  
**Task Folder Location:** `Vehicle Rental System\`  

---

### 📊 **Evaluation Rubric & Score Sheet (Max 48 Marks)**

| **Criterion** | **Weight** | **Raw Score (1–4)** | **Weighted Marks** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :---: | :--- |
| **OOP Design** | x 4 | **4** / 4 | **16 / 16** | **Excellent.** Abstract base class `Vehicle` with pure virtual methods (`virtual double calculateCost(int days) = 0;`, `virtual void display() const = 0;`) and virtual destructor. `Car`, `Motorbike`, and `Truck` properly inherit and implement type-specific pricing modifiers (+20% surcharge on Trucks, -10% discount on Motorbikes > 7 days). Runtime polymorphism in `Rental::createRental` dynamically executes the correct cost calculation on base pointers. |
| **Design Justification** | x 3 | **4** / 4 | **12 / 12** | **Excellent.** Comprehensive `DesignNote.txt` answering all design questions with strong reasoning: articulates is-a hierarchy vs type field, central ownership in `RentalSystem`, why a separate `Fleet` class was unnecessary, and the exact polymorphic dispatch point. |
| **Encapsulation & Responsibility** | x 2 | **4** / 4 | **8 / 8** | **Excellent.** Strict encapsulation with private data members across all classes (`Vehicle`, `Customer`, `Rental`, `RentalSystem`) with proper accessors/mutators and dynamic array bounds management. |
| **Working Demo** | x 2 | **4** / 4 | **8 / 8** | **Excellent.** Compiles cleanly with zero errors under C++17. Features both a full interactive menu and a dedicated demo scenario (Option 9) covering vehicle creation, customer registration, 2 rentals, vehicle return, and complete summary reports. |
| **Code Quality** | x 1 | **4** / 4 | **4 / 4** | **Excellent.** Professional modular architecture with header/source split across all 7 classes, include guards, const-correctness, and clean formatting. |

---

### 📈 **Summary of Results**

* **Core Weighted Total:** **48 / 48 (100.0%)**
* **Plagiarism Penalty:** **-8 Marks** (100% identical match with student `2025-SE-13` - Areeba Taqdees Mir across all 15 source files and `DesignNote.txt`)
* **Final Marks:** **40 / 48 (83.3%)**
* **Grade Status:** **Passed (Good)**

---

### ⚠️ **Plagiarism Audit Detail**

> **Plagiarism Penalty of -8 Marks Applied.**
> 100% exact raw byte-for-byte match detected between `2025-SE-15` and `2025-SE-13` across all 15 C++ source/header files and `DesignNote.txt`. Symmetrical penalty of -8 marks applied as per strict Lab 14 policy.

---

### 💬 **Overall Teacher Remarks**

**Dear Samia,** your core system design and implementation of the Vehicle Rental System are technically excellent. However, due to submitting identical files with your peer, a plagiarism penalty of -8 marks has been applied.
