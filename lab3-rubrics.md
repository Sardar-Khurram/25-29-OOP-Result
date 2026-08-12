# Task 5: Encapsulation

Create a **Product** class with proper **encapsulation**.

### Private Data Members
* `string name`
* `double price`
* `int quantity`

### Public Methods
* `void setName(string n)` - Validate non-empty name.
* `void setPrice(double p)` - Validate price > 0.
* `void setQuantity(int q)` - Validate quantity >= 0.
* Getters for all fields.

### Test Code
```cpp
int main() {
    Product p;

    p.setName("");       // Should print error message
    p.setPrice(-50);     // Should print error message
    p.setQuantity(-2);   // Should print error message

    p.setName("Laptop");
    p.setPrice(1200.50);
    p.setQuantity(5);

    cout << "Product: " << p.getName() << endl;
    cout << "Price: $" << p.getPrice() << endl;
    cout << "Quantity: " << p.getQuantity() << endl;

    return 0;
}
```

---

### **Evaluation Rubric**

| **Criteria** | **Excellent (3)** | **Good (2)** | **Need Improvement (1)** | **Poor (0)** |
| :--- | :--- | :--- | :--- | :--- |
| **Class Definition & Object Usage** | Correct class structure with object creation; proper syntax. | Minor syntax issues but structure is mostly correct. | Major issues in class or object usage. | Not attempted / completely incorrect. |
| **Member Variables** | Relevant attributes defined clearly with proper data types. | Attributes defined with minor issues. | Attributes poorly defined or unclear. | No meaningful use of member variables. |
| **Member Functions (Inside/Outside)** | Functions defined and used correctly as per instruction. | Functions implemented with small syntax/placement errors. | Poor function structure or logic missing. | No functions defined or irrelevant code. |
| **Use of Access Specifiers** | All data members are private/protected and accessed via public methods. | All data members are private/protected and accessed via public methods. | All data members are private/protected and accessed via public methods. | All data members are private/protected and accessed via public methods. |
| **Use of Getters/Setters** | Proper getters/setters used with validation and clear naming. | Basic getters/setters present, may lack validation or clarity. | Few or inconsistent getters/setters. | No use of getters/setters; direct access. |
| **Input/Output & Execution** | Takes input and displays output correctly and clearly. | Input/output mostly works with small issues. | Output unclear or partially working. | Code does not run or no input/output. |

---

### **Plagiarism Policy**
* **Copied Code Check:** If a student's code is found to be plagiarized or 100% identical to another student's submission, a flat penalty of **5 marks** will be deducted from their total score.
