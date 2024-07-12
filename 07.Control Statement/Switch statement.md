In C, the `switch` statement allows you to execute different parts of code based on the value of an expression. It's particularly useful when you have multiple conditions that depend on the value of a single variable. Here’s a basic syntax for the `switch` statement:

```c
switch (expression) {
    case value1:
        // statements
        break;
    case value2:
        // statements
        break;
    case value3:
        // statements
        break;
    default:
        // statements
        break;
}
```

### Explanation:

- **expression**: This is evaluated once and compared with the values of each case. The type of `expression` can be an integer, a character, or an enumeration constant.
- **case valueN**: Each `case` checks if the expression matches `valueN`. If it matches, the statements following this case will execute until a `break` statement is encountered.
- **break**: The `break` statement is used to exit from the `switch` statement. If omitted, the program will continue executing the next case (this is called "fall-through").
- **default**: This is an optional case that executes if none of the specified `case` values match the expression. It's similar to the `else` in an `if-else` structure.

### Example:

```c
#include <stdio.h>

int main() {
    int number = 2;

    switch (number) {
        case 1:
            printf("Number is 1\n");
            break;
        case 2:
            printf("Number is 2\n");
            break;
        case 3:
            printf("Number is 3\n");
            break;
        default:
            printf("Number is not 1, 2, or 3\n");
            break;
    }

    return 0;
}
```

In this example, since `number` is 2, the output will be:

```
Number is 2
```

### Important Points:
- The `switch` statement can only evaluate constant expressions (e.g., `1`, `2`, `3`, etc.).
- The `break` statement is essential to prevent "fall-through" behavior unless that behavior is desired.
- The `default` case is optional but useful for handling unexpected values.