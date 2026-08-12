# Lab 2 Evaluation Report (All Tasks)
**Student Roll Number:** 2025-SE-01  
**Student Name:** Syeda Mariam Gillani  

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** All 5 tasks are correctly structured. Each task separates the class declaration into a `.h` header file (utilizing proper preprocessor guards) and tests the functionality in a corresponding `.cpp` source file. Objects are instantiated correctly in the main functions (e.g., `Student mariam`, `Rectangle x`, `Voter v1`, `Temperature t1`, `Calculator c1`) with proper syntax. |
| **Member Variables** | 3 | **3** | **Excellent.** All required data members/attributes across the 5 tasks are defined clearly with correct C++ data types (such as `string name`, `int rollNumber`, `float marks` in Task 1; `int length`, `int width` in Task 2; `string name`, `int age` in Task 3; `float celsiusTemp`, `float fahrenheit` in Task 4; and `float num1`, `float num2` in Task 5). |
| **Member Functions (Inside/Outside)** | 3 | **3** | **Excellent.** You have followed the interface instructions precisely: <br>1. **Inside Class:** Functions are defined inside the class where requested (Task 1: `getData()`, `displayData()`; Task 5: math operations). <br>2. **Outside Class:** Functions are correctly declared inside the class and defined outside using the scope resolution operator `::` (Task 2: `setDimension()`, `area()`, `perimeter()`; Task 3: `isEligible()`). <br>3. **Logic:** The voter check (`age > 18`) aligns exactly with the requirements of Task 3. |
| **Input/Output & Execution** | 3 | **3** | **Excellent.** All 5 C++ tasks compile successfully using `g++` and run without runtime errors. The console output prompts are clear and informative, and the calculations (such as area, perimeter, temperature conversions, and arithmetic operations) are correct. |

---

### **Summary of Results**
* **Total Marks:** **12 / 12** (100%)
* **Grade Status:** **Excellent (Full Marks)**

### **Overall Teacher Remarks**
Dear Syeda Mariam,
Outstanding performance on Lab 2! You have successfully completed all 5 tasks. Your file organization is highly professional, separating class interface definitions in `.h` files from client code in `.cpp` files. 

Your code compiles cleanly, runs correctly, and perfectly matches the structural requirements of each task (defining functions inside or outside the class as requested). The input/output interaction is user-friendly and well-formatted. Keep up the excellent work!

<br><br>

---
---

# Lab 3 Evaluation Report (Encapsulation Task)
**Student Roll Number:** 2025-SE-01  
**Student Name:** Syeda Mariam Gillani  

---

### **Evaluation Rubric Table**

| **Criteria** | **Max Marks** | **Marks Obtained** | **Teacher's Feedback & Explanation** |
| :--- | :---: | :---: | :--- |
| **Class Definition & Object Usage** | 3 | **3** | **Excellent.** `Product` class structure in `product.h` and object creation `Product p;` in `product.cpp` are correctly defined with proper header guards (`#ifndef PRODUCT_H`). |
| **Member Variables** | 3 | **3** | **Excellent.** All 3 private attributes (`string name`, `double price`, `int quantity`) are defined clearly with proper C++ data types. |
| **Member Functions (Inside/Outside)** | 3 | **3** | **Excellent.** Setter validation logic (`!n.empty()`, `p > 0`, `q >= 0`) and getter functions are implemented cleanly inside the class. |
| **Use of Access Specifiers** | 3 | **3** | **Excellent.** Strict encapsulation followed: attributes are `private:` and member methods are `public:`. |
| **Use of Getters/Setters** | 3 | **3** | **Excellent.** Setters print validation error messages when invalid data is passed, and getters return the correct attributes. |
| **Input/Output & Execution** | 3 | **2.5** | **Very Good.** The test code in `main()` correctly tests invalid inputs first (`""`, `-50`, `-2`) and then assigns valid values (`"Laptop"`, `1200.50`, `5`). <br>*Minor Note (-0.5):* In `product.cpp`, `#include "product.h"` was placed on line 2 *before* `using namespace std;` on line 4, and `setprecision(2)` was used without `#include <iomanip>`. Placing `using namespace std;` inside `product.h` (or above `#include "product.h"`) fixes compilation instantly. |

---

### **Summary of Results**
* **Total Marks:** **17.5 / 18** (97.2%)
* **Grade Status:** **Excellent**

### **Overall Teacher Remarks**
Dear Syeda Mariam,
Great job on Lab 3! You wrote `using namespace std;` in `product.cpp` and your validation logic (`!n.empty()`, `price > 0`, `quantity >= 0`) is 100% correct.

Just a small tip regarding include order:
In `product.cpp`, you placed `#include "product.h"` before `using namespace std;`. Because of this order, `product.h` gets processed before `std` is declared. Either place `using namespace std;` inside `product.h` or put it before `#include "product.h"` in `product.cpp`, and add `#include <iomanip>` for `setprecision`.

Otherwise, your logic and OOP encapsulation design are fantastic. Keep up the good work!
