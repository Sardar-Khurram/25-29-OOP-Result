# Composition Task
**Prepared by:** Engr. M.Awais 10

Design a simple `Calculator` class that can perform basic arithmetic operations such as addition and multiplication.  
The calculator should display results using a separate class called `Display`.  
The `Calculator` class must own a `Display` object as a part of its internal structure.  
When the calculator performs a calculation, it should delegate the responsibility of showing the result to the `Display`.  
The display should also keep track of the last result shown.

---

# Aggregation Task
**Prepared by:** Engr. M.Awais 11

In a classroom, multiple students are solving math problems.  
However, instead of each student having their own calculator, the teacher provides one shared calculator that all students can use.  

Each student can:
* Use the calculator to perform addition or multiplication.
* Request the result of an operation by calling the calculator.

The calculator is not owned by any student. It is created and managed externally (by the teacher or system), and students just refer to it.