# Experiment-15
# Recursion 

### Aim:
The aim of this study is to understand and implement recursion.

### Theory:
Recursion is a method of solving problems where a function calls itself directly or indirectly. This technique is particularly useful for tasks that can be defined in terms of smaller subproblems. Each recursive call simplifies the problem, bringing it closer to a base case, which is a condition under which the function stops calling itself.

#### Key Components of Recursion:
1. **Base Case**: The condition that stops the recursion. Without a base case, the recursion would continue indefinitely, leading to a stack overflow.
2. **Recursive Case**: The part of the function that includes the recursive call. This is where the function reduces the problem's complexity and moves toward the base case.

#### Advantages of Recursion:
- **Simplifies Code**: Recursive solutions can be more concise and easier to read than their iterative counterparts.
- **Natural Fit for Certain Problems**: Problems like tree traversal, factorial calculation, and Fibonacci sequence generation are more naturally expressed using recursion.
- **Problem Decomposition**: Recursion allows complex problems to be broken down into simpler, manageable subproblems.

#### Applications:
- **Mathematical Computations**: Calculating factorials, Fibonacci numbers, etc.
- **Data Structures**: Traversing trees and graphs.
- **Algorithms**: Implementing algorithms like quicksort, mergesort, and depth-first search.

### Algorithm for Recursive Addition

1. **Function Definition**: Define a function `add(int a, int b)` that takes two integers as parameters.
   
2. **Base Case**:
   - If `b` is equal to `0`, return `a`. This is the stopping condition for the recursion.

3. **Recursive Case**:
   - If `b` is greater than `0`:
     - Call `add(a + 1, b - 1)`. This increases `a` by `1` and decreases `b` by `1`.
   - If `b` is less than `0`:
     - Call `add(a - 1, b + 1)`. This decreases `a` by `1` and increases `b` by `1`.

4. **Main Function**:
   - Declare two integers `num1` and `num2`.
   - Prompt the user to input values for `num1` and `num2`.
   - Call the `add(num1, num2)` function and store the result in `sum`.
   - Output the value of `sum`.

5. **End**.

### Conclusion:
Recursion is a powerful programming technique that allows for elegant and efficient solutions to a variety of problems. Understanding how to properly implement and manage recursive functions is essential for any programmer. By mastering recursion, developers can write cleaner, more maintainable code while effectively solving complex problems that can be broken down into simpler subproblems. The ability to identify suitable problems for recursion and to manage base and recursive cases is crucial for successful implementation.
