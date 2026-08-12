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