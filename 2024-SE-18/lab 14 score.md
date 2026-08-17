# Lab 14 Evaluation Report (In-Class Lab: Vehicle Rental System)

**Student Roll Number:** 2024-SE-18  
**Student Name:** Syed Abdul Rehman Naseem  
**Task Folder Location:** `Open_Ended_Lab\`  

---

### 📊 **Evaluation Rubric & Score Sheet (Max 48 Marks)**

| **Criterion** | **Weight** | **Raw Score (1–4)** | **Weighted Marks** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :---: | :--- |
| **OOP Design** | x 4 | **4** / 4 | **16 / 16** | **Excellent.** Abstract base class `Vehicle` with pure virtual methods (`virtual void display() const = 0;`, `virtual std::string getType() const = 0;`) and virtual destructor. Clean inheritance hierarchy for `Car`, `Motorbike`, and `Truck`. Uses custom `Fleet<Vehicle>` class template and smart pointers (`std::shared_ptr`). |
| **Design Justification** | x 3 | **2** / 4 | **6 / 12** | **Developing.** The code architecture and inline documentation show intentional design choices, but a standalone `DesignNote.txt` document explicitly answering the required design questions (Section 4b) was omitted. |
| **Encapsulation & Responsibility** | x 2 | **4** / 4 | **8 / 8** | **Excellent.** Flawless encapsulation with private data members across all 8 classes. Deliberate access control and single-responsibility principles followed throughout. |
| **Working Demo** | x 2 | **4** / 4 | **8 / 8** | **Excellent.** Compiles cleanly under C++17 with zero errors/warnings. `main()` covers the complete scenario: fleet addition, customer registration, rental processing, already-rented vehicle prevention, return processing, active vs available vehicle summaries, template demonstration, and dynamic runtime dispatch. |
| **Code Quality** | x 1 | **4** / 4 | **4 / 4** | **Excellent.** Professional modular structure with header/source split across all classes, header guards, consistent naming, `const` correctness, and leak-free memory management. |

---

### 📈 **Summary of Results**

* **Weighted Total Marks:** **42 / 48 (87.5%)**
* **Grade Status:** **Passed (Excellent)**
* **Plagiarism Penalty:** **0 Marks** (Independent individual submission)

---

### 💬 **Overall Teacher Remarks**

**Dear Syed Abdul Rehman,** your Lab 14 submission demonstrates an outstanding grasp of object-oriented design principles, custom template classes, and clean C++ modular architecture. Ensure to include the written `DesignNote.txt` in future design labs to secure full marks in design justification.
