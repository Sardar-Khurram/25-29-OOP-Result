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

| **Criteria**                             | **Excellent (3)**                                                                                                                                                                                                        | **Good (2)**                                                                            | **Need Improvement (1)**                                                                                     | **Poor (0)**                                                                |
| ---------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ | --------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------ | --------------------------------------------------------------------------- |
| **Composition & Object Ownership**       | `Calculator` correctly owns a `Display` object as part of its internal structure and delegates result-display responsibility to it.                                                                                      | Composition is implemented with minor ownership or delegation issues.                   | Calculator/Display relationship is partially implemented or ownership is unclear.                            | Composition is not implemented or the relationship is completely incorrect. |
| **Aggregation & Shared Object Usage**    | A shared `Calculator` is created externally and correctly referenced/used by multiple students without being owned by them.                                                                                              | Aggregation is mostly correct with minor reference or object-management issues.         | Shared calculator concept is partially implemented or students incorrectly manage the calculator's lifetime. | Aggregation is not implemented or students incorrectly own the calculator.  |
| **Classes, Functions & Data Management** | All required classes, arithmetic operations, delegation functions, and last-result tracking are correctly implemented and used.                                                                                          | Classes and functions are mostly correct with minor omissions or implementation errors. | Several required functions, operations, or result-tracking features are missing or incorrectly implemented.  | Required classes, functions, or data handling are mostly missing.           |
| **Object Creation, Output & Execution**  | Objects are created with correct ownership relationships; addition/multiplication work correctly, results are displayed through `Display`, shared calculator usage works, and programs compile and execute successfully. | Programs mostly work with minor output, object-use, or execution issues.                | Programs partially execute or output/ownership behavior is incomplete or unclear.                            | Code does not compile/run or required functionality/output is missing.      |

### **Plagiarism Policy**
* **Copied Code Check:** If the student's code is found to be plagiarized or matching 100% with another student's code, a flat penalty of **3 marks** will be deducted from their total score.
