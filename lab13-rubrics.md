# SECTION 3 — Student Practice Exercises

Complete each task in order. Save each in a separate `.cpp` file.

* **Reminder:** Always put code inside `main()` or another function!  
  Object creation and method calls must be inside `main()`.  
  Only class/function definitions go outside `main()`.

---

## 1 Function Template — `printTwice()`

**Objectives:**
* Write a function template `printTwice(T val)` that prints the value twice on separate lines.
* Call it in `main()` with an `int`, a `double`, and a `string`.

**Hints:**
* Use `cout` inside the function body.
* The function return type should be `void`.

---

## 2 Function Template — `findMin()`

**Objectives:**
* Write a function template `findMin(T a, T b)` that returns the smaller of two values.
* Test it in `main()` with integers, doubles, and characters.
* Print the result of each call.

**Hints:**
* Use the `<` operator to compare.
* The return type is `T`.

# Class Template — Pair<T>

## Objectives:

* Create a class template `Pair<T>` that stores two values of the same type.
* Add a constructor, `getFirst()`, `getSecond()`, and a `display()` method.
* In `main()`, create a `Pair<int>`, `Pair<double>`, and `Pair<string>`.
* Call `display()` on each.

## Hints:

→ Store values as private members: `T first, second;`
→ `display()` should print: `First: X Second: Y`

---

# 4 ★ Challenge — Class Template: Calculator<T>

## Objectives:

* Write a class template `Calculator<T>` that stores two values `a` and `b`.
* Add methods: `add()`, `subtract()`, `multiply()` — each returns `T`.
* In `main()`, test with `int` values and `double` values.
* Print all three results for each type.

## Hints:

→ Constructor: `Calculator(T x, T y)` sets `a=x` and `b=y`.
→ Each method simply performs the operation on `a` and `b` and returns the result.


| **Criteria**                                          | **Excellent (3)**                                                                                                                                                                                                                                                                                    | **Good (2)**                                                                                     | **Need Improvement (1)**                                                                             | **Poor (0)**                                                                                                  |
| ----------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------ | ---------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------- |
| **Function Templates — `printTwice()` & `findMin()`** | Both function templates are correctly implemented with the required signatures and return types. `printTwice(T val)` prints the value twice on separate lines, and `findMin(T a, T b)` correctly returns the smaller value using `<`.                                                                | Both templates are implemented with minor syntax, signature, or logic issues.                    | One template is incomplete/incorrect, or significant issues exist in both implementations.           | Function templates are not implemented or are completely incorrect.                                           |
| **Required Type Testing & Results**                   | `printTwice()` is correctly called with `int`, `double`, and `string`; `findMin()` is correctly tested with `int`, `double`, and `char`, and all results are printed.                                                                                                                                | Required types are mostly tested and displayed with minor omissions or errors.                   | Some required types/tests or result displays are missing or incorrect.                               | Required template tests are mostly missing or incorrect.                                                      |
| **Class Templates — `Pair<T>` & `Calculator<T>`**     | `Pair<T>` correctly stores two private values of type `T`, provides the required constructor, `getFirst()`, `getSecond()`, and `display()`. `Calculator<T>` correctly stores `a` and `b` and implements `add()`, `subtract()`, and `multiply()`, each returning `T`.                                 | Both class templates are mostly correct with minor structural, method, or implementation issues. | One class template is incomplete, or several required members/methods are missing or incorrect.      | Class templates are not implemented or are largely incorrect.                                                 |
| **Object Creation, `main()` Usage & Execution**       | All object creation and template function/method calls are correctly placed inside `main()`. `Pair<int>`, `Pair<double>`, and `Pair<string>` are tested; `Calculator<T>` is tested with both `int` and `double`; all required results are printed and the programs compile and execute successfully. | Programs mostly compile and execute correctly with minor placement, output, or execution issues. | Programs partially execute or contain significant `main()` usage, object-creation, or output issues. | Code does not compile/run, required objects/calls are missing, or required functionality is not demonstrated. |

### **Plagiarism Policy**
* **Copied Code Check:** If the student's code is found to be plagiarized or matching 100% with another student's code, a flat penalty of **3 marks** will be deducted from their total score.