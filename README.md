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

``` cpp
#include<iostream>
using namespace std;
int add(int a, int b) {
    if (b == 0) 
    {
        return a;
    } 
    else if (b > 0) 
    {
        return add(a + 1, b - 1);
    } 
    else 
    {
        return add(a - 1, b + 1);
    }
}

int main() 
{
    int num1, num2;
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;
    int sum = add(num1, num2);
    cout << "Sum: " << sum << endl;
    return 0;
}
```

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
### Algorithm for Factorial Calculation using Recursion

1. **Function Definition**: Define a function `fact(int n)` that takes an integer `n` as a parameter.

2. **Base Case**:
   - If `n` is less than or equal to `1`, return `1`. This is the stopping condition for the recursion.

3. **Recursive Case**:
   - If `n` is greater than `1`, return the product of `n` and the result of `fact(n - 1)`.

4. **Main Function**:
   - Declare an integer variable `a`.
   - Prompt the user to input a value for `a`.
   - Call the `fact(a)` function and output the result.

5. **End**.

### Code

```cpp
#include<iostream>
using namespace std;

int fact(int n) {
    if(n <= 1)
        return 1;
    else 
        return (n * fact(n - 1));
}

int main() {
    int a;
    cout << "Enter an integer: ";
    cin >> a;
    cout << "Factorial is: " << fact(a) << endl;
    return 0;
}
```

### Algorithm for Reversing a Number using Recursion

1. **Function Definition**: Define a function `revnum(int n)` that takes an integer `n` as a parameter.

2. **Base Case**:
   - If `n` is equal to `0`, return. This stops the recursion.

3. **Recursive Case**:
   - Print the last digit of `n` using `n % 10`.
   - Call `revnum(n / 10)` to process the remaining digits.

4. **Main Function**:
   - Declare an integer variable `num`.
   - Prompt the user to input a value for `num`.
   - Print "Reversed: " and call the `revnum(num)` function.

5. **End**.

### Code

```cpp
#include<iostream>
using namespace std;

void revnum(int n) {
    if (n == 0)
        return;

    cout << n % 10;
    revnum(n / 10);
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    
    cout << "Reversed: ";
    revnum(num);
    cout << endl;

    return 0;
}
```
### Algorithm for Reversing a String using Recursion

1. **Function Definition**: Define a function `rev(char* str)` that takes a character pointer `str` as a parameter.

2. **Base Case**:
   - If the character pointed to by `str` is not equal to the null character (`'\0'`), proceed to the next step.

3. **Recursive Case**:
   - Call `rev(str + 1)` to process the next character.
   - After the recursive call returns, print the current character (`*str`).

4. **Main Function**:
   - Declare a character array `str` initialized to "program".
   - Call the `rev(str)` function to reverse and print the string.

5. **End**.

### Code

```cpp
#include <iostream>
using namespace std;

void rev(char* str) {
   if (*str != '\0') {
       rev(str + 1);
       cout << *str;
   }
}

int main() {
    char str[] = "program";
    rev(str);
    return 0;
}
```
### Conclusion:
Recursion is a powerful programming technique that allows for elegant and efficient solutions to a variety of problems. Understanding how to properly implement and manage recursive functions is essential for any programmer. By mastering recursion, developers can write cleaner, more maintainable code while effectively solving complex problems that can be broken down into simpler subproblems. The ability to identify suitable problems for recursion and to manage base and recursive cases is crucial for successful implementation.
