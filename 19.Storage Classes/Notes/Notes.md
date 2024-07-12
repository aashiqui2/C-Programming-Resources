#  4 Storage classes in c
* auto (default)
* extern
* register
* static

points to remember is 
* default value
* scope
* location
* lifetime


In C, storage classes define the scope, visibility, and lifetime of variables and/or functions within a program. The four main storage classes in C are:

1. `auto`
2. `register`
3. `static`
4. `extern`

### 1. `auto`
The `auto` storage class is the default for all local variables. It specifies that the variable has automatic storage duration, meaning it is allocated and deallocated automatically when the block in which it is defined is entered and exited, respectively.

Example:
```c
#include <stdio.h>

void function() {
    auto int a = 10;  // 'auto' is optional here
    printf("Value of a: %d\n", a);
}

int main() {
    function();
    return 0;
}
```

### 2. `register`
The `register` storage class is used to suggest that the variable be stored in a CPU register instead of RAM for faster access. However, it's just a suggestion, and the compiler may ignore it.

Example:
```c
#include <stdio.h>

void function() {
    register int b = 20;
    printf("Value of b: %d\n", b);
}

int main() {
    function();
    return 0;
}
```

### 3. `static`
The `static` storage class can be used with both local and global variables. For local variables, it extends the lifetime of the variable to the entire program execution but limits its scope to the block where it is defined. For global variables and functions, it limits their scope to the file containing them.

Example (local variable):
```c
#include <stdio.h>

void function() {
    static int count = 0;  // Retains its value between function calls
    count++;
    printf("Count: %d\n", count);
}

int main() {
    function();
    function();
    function();
    return 0;
}
```

Example (global variable):
```c
#include <stdio.h>

static int global_var = 0;  // Accessible only within this file

void function() {
    global_var++;
    printf("Global variable: %d\n", global_var);
}

int main() {
    function();
    function();
    function();
    return 0;
}
```

### 4. `extern`
The `extern` storage class is used to declare a global variable or function in another file. It tells the compiler that the variable or function is defined in another file.

Example (file1.c):
```c
#include <stdio.h>

int global_var = 100;  // Definition of the global variable

void function() {
    printf("Global variable in file1: %d\n", global_var);
}
```

Example (file2.c):
```c
#include <stdio.h>

extern int global_var;  // Declaration of the global variable

void another_function() {
    printf("Global variable in file2: %d\n", global_var);
}

int main() {
    another_function();
    return 0;
}
```

In this example, `global_var` is defined in `file1.c` and declared in `file2.c` using the `extern` keyword.

By using these storage classes, you can control the scope, visibility, and lifetime of your variables and functions in C, allowing for better management of resources and program structure.