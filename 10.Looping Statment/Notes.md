In C, there are several types of loops used to repeat a block of code multiple times. The primary loops in C are:

1. **`for` loop**
2. **`while` loop**
3. **`do-while` loop**

### 1. `for` loop

The `for` loop is typically used when you know in advance how many times you want to execute a statement or a block of statements.

#### Syntax:
```c
for (initialization; condition; increment/decrement) {
    // statements
}
```

#### Example:
```c
#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        printf("i = %d\n", i);
    }
    return 0;
}
```

### 2. `while` loop

The `while` loop repeats a block of code as long as a specified condition is true. It is used when the number of iterations is not known before entering the loop.

#### Syntax:
```c
while (condition) {
    // statements
}
```

#### Example:
```c
#include <stdio.h>

int main() {
    int i = 0;
    while (i < 5) {
        printf("i = %d\n", i);
        i++;
    }
    return 0;
}
```

### 3. `do-while` loop

The `do-while` loop is similar to the `while` loop, but it checks the condition after executing the statements inside the loop. Therefore, the statements inside the `do-while` loop are executed at least once.

#### Syntax:
```c
do {
    // statements
} while (condition);
```

#### Example:
```c
#include <stdio.h>

int main() {
    int i = 0;
    do {
        printf("i = %d\n", i);
        i++;
    } while (i < 5);
    return 0;
}
```

### Summary:
- Use the `for` loop when you know the number of iterations in advance.
- Use the `while` loop when the condition to terminate the loop is checked before the loop starts.
- Use the `do-while` loop when you want the loop body to execute at least once, regardless of the condition.