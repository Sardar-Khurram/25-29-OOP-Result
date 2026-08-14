# Lab 5 Evaluation Report (Inheritance)

**Student Roll Number:** 2024-SE-36  
**Student Name:** Sahadat Ali
**Task Folder Location:** `LAB_4_Inheritence_Sahadat_Ali\`

---

### 📊 **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Inheritance Implementation** | 3 | **3** | **Full Credit:** All 4 types of inheritance (Single, Multilevel, Hierarchical, and Multiple) are correctly implemented structurally with clean header files ([SingleInheritance.h](file:///c:/University/OOP-25-29/2024-SE-36/LAB_4_Inheritence_Sahadat_Ali/SingleInheritance.h), [MultilevelInheritance.h](file:///c:/University/OOP-25-29/2024-SE-36/LAB_4_Inheritence_Sahadat_Ali/MultilevelInheritance.h), [HierarchicalInheritance.h](file:///c:/University/OOP-25-29/2024-SE-36/LAB_4_Inheritence_Sahadat_Ali/HierarchicalInheritance.h), and [MultipleInheritance.h](file:///c:/University/OOP-25-29/2024-SE-36/LAB_4_Inheritence_Sahadat_Ali/MultipleInheritance.h)) and valid inheritance syntax. |
| **Classes, Attributes & Functions** | 3 | **1** | **Major Deviation (-2):** Required classes, attributes, and methods from the lab prompt were completely replaced with different domain classes:<br>• **Single Inheritance:** Implemented `BankAccount` → `SavingsAccount` instead of `Person` → `Student`.<br>• **Multilevel Inheritance:** Implemented `Vehicle` → `Car` → `ElectricCar` instead of `Person` → `Employee` → `Manager`.<br>• **Hierarchical Inheritance:** Implemented `Vehicle` → `Car`, `Bike`, `Truck` instead of `Employee` → `Developer`, `Designer`.<br>• **Multiple Inheritance:** Implemented `Camera` + `MusicPlayer` → `Smartphone` instead of `Printer` + `Scanner` → `Photocopier`. |
| **Object Creation & Functionality** | 3 | **2** | **Partial Deduction (-1):** Object instantiation and function calls are properly structured in [Main.cpp](file:///c:/University/OOP-25-29/2024-SE-36/LAB_4_Inheritence_Sahadat_Ali/Main.cpp), but they perform operations for alternate custom tasks rather than the assigned rubric scenarios. |
| **Input, Output & Execution** | 3 | **3** | **Full Credit:** Code compiles cleanly, executes without runtime errors, and displays organized console output for all custom modules. |

---

### 📈 **Summary of Results**

* **Core Rubric Score:** **9 / 12**
* **Plagiarism Penalty:** **0 Marks**
* **Final Marks:** **9 / 12 (75.0%)**
* **Grade Status:** **Satisfactory**

---

### ⚠️ **Plagiarism Audit Detail**

> **No plagiarism penalty applied.**  
> No match was found for 2024-SE-36.

---

### 💬 **Overall Teacher Remarks**

Dear Sahadat Ali,

Your C++ implementation demonstrates strong code organization, correct syntax for inheritance mechanisms, modular header structure, and clean compilation.

However, marks were lost because the submission implemented entirely different problem scenarios and class structures compared to the rubric requirements:
1. **Single Inheritance:** Used `BankAccount` & `SavingsAccount` instead of `Person` & `Student`.
2. **Multilevel Inheritance:** Used `Vehicle`, `Car`, & `ElectricCar` instead of `Person`, `Employee`, & `Manager`.
3. **Hierarchical Inheritance:** Derived `Car`, `Bike`, and `Truck` from `Vehicle` instead of `Developer` and `Designer` from `Employee`.
4. **Multiple Inheritance:** Derived `Smartphone` from `Camera` & `MusicPlayer` instead of `Photocopier` from `Printer` & `Scanner`.

In future lab assignments, please make sure to strictly follow the specific class names, member attributes, and task prompts outlined in the lab guidelines to secure full marks. Good effort overall!
