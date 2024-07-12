In C programming, operators are special symbols or keywords that are used to perform operations on variables and values. C supports a variety of operators, which can be categorized into several types:

### 1. Arithmetic Operators
Arithmetic operators perform mathematical operations like addition, subtraction, multiplication, division, and modulus.

```c
#include <stdio.h>

int main() {
    int a = 10, b = 4;
    int result;

    // Addition
    result = a + b;
    printf("Addition: %d\n", result);

    // Subtraction
    result = a - b;
    printf("Subtraction: %d\n", result);

    // Multiplication
    result = a * b;
    printf("Multiplication: %d\n", result);

    // Division
    result = a / b;
    printf("Division: %d\n", result);

    // Modulus
    result = a % b;
    printf("Modulus: %d\n", result);

    return 0;
}
```

### 2. Relational Operators
Relational operators compare two values and return a result of `1` (true) or `0` (false).

```c
#include <stdio.h>

int main() {
    int a = 10, b = 4;
    int result;

    // Greater than
    result = (a > b);
    printf("Greater than: %d\n", result);

    // Less than
    result = (a < b);
    printf("Less than: %d\n", result);

    // Greater than or equal to
    result = (a >= b);
    printf("Greater than or equal to: %d\n", result);

    // Less than or equal to
    result = (a <= b);
    printf("Less than or equal to: %d\n", result);

    // Equal to
    result = (a == b);
    printf("Equal to: %d\n", result);

    // Not equal to
    result = (a != b);
    printf("Not equal to: %d\n", result);

    return 0;
}
```

### 3. Logical Operators
Logical operators are used to combine relational expressions.

```c
#include <stdio.h>

int main() {
    int a = 1, b = 0;
    int result;

    // Logical AND
    result = (a && b);
    printf("Logical AND: %d\n", result);

    // Logical OR
    result = (a || b);
    printf("Logical OR: %d\n", result);

    // Logical NOT
    result = !a;
    printf("Logical NOT (a): %d\n", result);

    result = !b;
    printf("Logical NOT (b): %d\n", result);

    return 0;
}
```

### 4. Bitwise Operators
Bitwise operators perform operations on bits of integers.

```c
#include <stdio.h>

int main() {
    int a = 5, b = 3;
    int result;

    // Bitwise AND
    result = a & b;
    printf("Bitwise AND: %d\n", result);

    // Bitwise OR
    result = a | b;
    printf("Bitwise OR: %d\n", result);

    // Bitwise XOR
    result = a ^ b;
    printf("Bitwise XOR: %d\n", result);

    // Bitwise NOT
    result = ~a;
    printf("Bitwise NOT (a): %d\n", result);

    return 0;
}
```

### 5. Assignment Operators
Assignment operators are used to assign values to variables.

```c
#include <stdio.h>

int main() {
    int a = 10, b = 5;
    int result;

    // Simple assignment
    result = a;
    printf("Simple assignment: %d\n", result);

    // Addition assignment
    result += b;
    printf("Addition assignment: %d\n", result);

    // Subtraction assignment
    result -= b;
    printf("Subtraction assignment: %d\n", result);

    // Multiplication assignment
    result *= b;
    printf("Multiplication assignment: %d\n", result);

    // Division assignment
    result /= b;
    printf("Division assignment: %d\n", result);

    // Modulus assignment
    result %= b;
    printf("Modulus assignment: %d\n", result);

    return 0;
}
```

### 6. Increment and Decrement Operators
Increment (`++`) and decrement (`--`) operators increase or decrease the value of variables by 1.

```c
#include <stdio.h>

int main() {
    int a = 10;
    
    // Increment operator
    printf("Original value of a: %d\n", a);
    printf("After incrementing: %d\n", ++a);

    // Decrement operator
    printf("After decrementing: %d\n", --a);

    return 0;
}
```

These examples cover the basic categories of operators in C. Operators are fundamental to performing computations and making decisions in programs, allowing manipulation and comparison of data in various ways.