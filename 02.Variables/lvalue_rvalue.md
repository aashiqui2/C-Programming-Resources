In C, the concepts of lvalue and rvalue are crucial for understanding how variables and values are handled in expressions. Let's break down each term with examples:

### Lvalue (Locator Value)
An lvalue in C is an expression that refers to a memory location. It can appear on the left-hand side of an assignment operator. Lvalues can be assigned values.

### Rvalue (Right-hand Value)
An rvalue is an expression that is not an lvalue. It is a temporary value that does not have a persistent memory location. Rvalues can appear on the right-hand side of an assignment operator.

### Example in C
```c
#include <stdio.h>

int main() {
    int x = 10;  // 'x' is an lvalue and '10' is an rvalue
    int y;      // 'y' is an lvalue

    y = x;      // 'x' is an rvalue in this context, 'y' is an lvalue
    y = 20;     // '20' is an rvalue

    // Invalid: rvalue cannot be on the left-hand side of an assignment
    // 10 = y; // This will cause a compilation error

    printf("x = %d, y = %d\n", x, y);

    return 0;
}
```

### Explanation
1. `int x = 10;`
   - Here, `x` is an lvalue because it refers to a memory location where the value `10` is stored. The `10` is an rvalue.

2. `int y;`
   - `y` is an lvalue because it refers to a memory location where a value can be stored.

3. `y = x;`
   - `x` is used as an rvalue here because it represents the value stored in `x` (which is `10`). `y` is an lvalue because it refers to a memory location where the value `10` will be stored.

4. `y = 20;`
   - `20` is an rvalue because it is a constant value. `y` is an lvalue where the value `20` will be stored.

5. `10 = y;`
   - This line is invalid because `10` is an rvalue and cannot appear on the left-hand side of an assignment operator. The left-hand side of an assignment must be an lvalue.

### Key Points
- **Lvalue**: Refers to a memory location. Can be on the left-hand side of an assignment.
- **Rvalue**: Represents a value. Cannot be on the left-hand side of an assignment.

Understanding lvalues and rvalues is essential for working with variables, pointers, and expressions in C.

# **Lvalue (Locator Value)** : 
An expression that refers to a memory location and can appear on the left-hand side of an assignment.
# **Rvalue (Right-hand Value):
 A temporary value that cannot appear on the left-hand side of an assignment.