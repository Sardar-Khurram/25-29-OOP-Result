# Task 1: Online Shopping System (Constructor)

Create a base class `Product` with properties `name` and `price`.  
Create a derived class `Electronics` with property `warrantyYears`.  
Use constructor chaining to initialize all values and display them.

---

# Task 2: Ride Booking System (Constructor- Multi-level)

Create classes `Vehicle` -> `Car` -> `ElectricCar`.  
Each class should have a constructor printing a message.  
Pass values through constructors and observe execution order.

---

# Task 3: File Handling System (Destructor)

Create a base class `File` that prints `'File opened'` in constructor and `'File closed'` in destructor.  
Create a derived class `TextFile` that prints its own messages.  
Create object and observe destructor order.

---

# Task 4: Device and Sensor System (Destructor with Dynamic Memory)

Create base class `Device` with properties `deviceName`, `deviceID`, and dynamically allocated data.  
Create derived class `Sensor` with `sensorType` and dynamically allocated `sensorValue`.  
Use constructors to allocate memory and destructors to free memory.  
Test using `new` and `delete`.

| **Criteria**                                   | **Excellent (3)**                                                                                                                                                        | **Good (2)**                                                                                        | **Need Improvement (1)**                                                                                          | **Poor (0)**                                                              |
| ---------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------ | --------------------------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------- |
| **Constructor & Inheritance Implementation**   | All required classes, inheritance relationships, and constructors are correctly implemented, including constructor chaining and multilevel constructor execution order.  | Most constructors and inheritance relationships are correct with minor syntax or structural issues. | Some constructors, inheritance relationships, or chaining requirements are incomplete or incorrectly implemented. | Constructors/inheritance are not implemented or are completely incorrect. |
| **Destructor & Memory Management**             | Destructors are correctly implemented; destructor execution order is demonstrated, and dynamically allocated memory is properly released using destructors and `delete`. | Destructor and memory management mostly work with minor errors or omissions.                        | Some destructor behavior or memory cleanup is incomplete, incorrect, or unclear.                                  | Destructors are missing or dynamic memory is not properly managed.        |
| **Classes, Attributes & Object Functionality** | All required classes, attributes, constructors/destructors, and object relationships are correctly defined and demonstrated in working objects.                          | Classes and functionality are mostly correct with minor omissions or errors.                        | Several attributes or required class functionality are missing or incorrectly implemented.                        | Required classes, attributes, or functionality are mostly missing.        |
| **Input, Output & Execution**                  | All programs compile and execute successfully; required constructor/destructor messages, values, and execution order are clearly demonstrated.                           | Programs mostly compile and execute correctly with minor input, output, or execution issues.        | Programs partially execute or required output/execution order is incomplete or unclear.                           | Code does not compile/run or required output is missing.                  |

### **Plagiarism Policy**
* **Copied Code Check:** If the student's code is found to be plagiarized or matching 100% with another student's code, a flat penalty of **3 marks** will be deducted from their total score.
