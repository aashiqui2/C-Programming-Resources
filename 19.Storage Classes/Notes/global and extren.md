In C programming, global variables and the `extern` keyword are related concepts but serve different purposes:

1. **Global Variables**: These are variables declared outside of any function. They have global scope, meaning they can be accessed and modified from any part of the program (file) where they are declared.

2. **Extern Keyword**: When used with variables, `extern` is used to declare a variable that is defined elsewhere in the program (typically in another file). It informs the compiler that the variable is defined in another module and allows the program to access that variable.

Here's how they are related:
- **Declaration and Definition**: If you declare a global variable in one file and want to use it in another file, you declare it as `extern` in the second file. This tells the compiler that the variable exists somewhere else and should be linked at runtime.

- **Linkage**: Global variables without the `extern` keyword have external linkage by default. This means they can be accessed from other files if not explicitly declared `static`.

Here’s a simple example to illustrate:

**File1.c:**
```c
int globalVar = 10; // Global variable
```

**File2.c:**
```c
extern int globalVar; // Declaration of globalVar from File1.c

void printGlobalVar() {
    printf("Value of globalVar: %d\n", globalVar);
}
```

In this example:
- `globalVar` is defined in `File1.c` as a global variable.
- In `File2.c`, `extern int globalVar;` informs the compiler that `globalVar` is defined somewhere else (externally), allowing `printGlobalVar()` to use `globalVar` without redefining it.

Thus, global variables and the `extern` keyword are closely related in how they allow data sharing between different parts of a C program, especially across different source files.