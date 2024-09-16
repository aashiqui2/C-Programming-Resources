Sure, here are examples of each type of if statement in C:

### `if` Statement
Executes a block of code if a specified condition is true.

```c
#include <stdio.h>

int main() {
    int a = 10;

    if (a > 5) {
        printf("a is greater than 5\n");
    }

    return 0;
}
```

### `if-else` Statement
Executes one block of code if a condition is true, and another block if it is false.

```c
#include <stdio.h>

int main() {
    int a = 3;

    if (a > 5) {
        printf("a is greater than 5\n");
    } else {
        printf("a is not greater than 5\n");
    }

    return 0;
}
```

### `if-else if-else` Statement
Checks multiple conditions, executing the corresponding block of code for the first true condition.

```c
#include <stdio.h>

int main() {
    int a = 10;

    if (a > 15) {
        printf("a is greater than 15\n");
    } else if (a > 5) {
        printf("a is greater than 5 but less than or equal to 15\n");
    } else {
        printf("a is less than or equal to 5\n");
    }

    return 0;
}
```

### Nested `if` Statement
An `if` statement inside another `if` statement.

```c
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    if (a > 5) {
        if (b > 15) {
            printf("a is greater than 5 and b is greater than 15\n");
        } else {
            printf("a is greater than 5 but b is not greater than 15\n");
        }
    } else {
        printf("a is not greater than 5\n");
    }

    return 0;
}
```

