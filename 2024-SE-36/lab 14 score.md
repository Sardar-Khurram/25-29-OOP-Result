# Lab 14 Evaluation Report (In-Class Lab: Vehicle Rental System)

**Student Roll Number:** 2024-SE-36  
**Student Name:** Sahadat Ali  
**Task Folder Location:** `OPEN_HANDED_LAB_2024_SE_36\`  

---

### 📊 **Evaluation Rubric & Score Sheet (Max 48 Marks)**

| **Criterion** | **Weight** | **Raw Score (1–4)** | **Weighted Marks** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :---: | :--- |
| **OOP Design** | x 4 | **4** / 4 | **16 / 16** | **Excellent.** Abstract base class `Vehicle` with pure virtual `display() const = 0;`, virtual `calculateCost(days)`, and virtual destructor. Derived classes `Car`, `Motorbike`, and `Truck` properly implement type-specific pricing modifiers (+20% surcharge on Trucks, -10% discount on Motorbikes > 7 days). Polymorphic dispatch in `Rental::getCost()` calls `vehicle->calculateCost(days)` dynamically. |
| **Design Justification** | x 3 | **2** / 4 | **6 / 12** | **Developing.** Good architecture implemented in code, but the standalone written `DesignNote.txt` file answering the required design questions (Section 4b) was omitted. |
| **Encapsulation & Responsibility** | x 2 | **4** / 4 | **8 / 8** | **Excellent.** All classes (`Vehicle`, `Customer`, `Rental`, `RentalSystem`) have private data members and controlled getter/setter access. Clean separation of concerns with dynamic destructor cleanup in `RentalSystem`. |
| **Working Demo** | x 2 | **2** / 4 | **4 / 8** | **Developing.** `main()` defines the complete workflow (creating 3 vehicles, 2 customers, 2 rentals, vehicle return, and summary). However, lines 2–4 (`#include "Car.h"`, etc.) were commented out in `main.cpp`, causing compilation to fail until the include directives are uncommented. |
| **Code Quality** | x 1 | **3** / 4 | **3 / 4** | **Good.** Code logic is clean and readable with header guards throughout, though entire class definitions and method implementations are kept in single header files rather than split into `.h`/`.cpp`. |

---

### 📈 **Summary of Results**

* **Weighted Total Marks:** **37 / 48 (77.1%)**
* **Grade Status:** **Passed (Good)**
* **Plagiarism Penalty:** **0 Marks** (Independent individual submission)

---

### 💬 **Overall Teacher Remarks**

**Dear Sahadat,** your Lab 14 submission exhibits solid OOP design, effective polymorphism, and clean memory management. Please make sure not to leave essential header `#include` statements commented out in your driver file (`main.cpp`).
