In C, variables are stored in different memory segments depending on their storage class. Here is where each type of variable is typically stored:

### 1. `auto` (Automatic) Variables
- **Location**: Stack
- **Details**: Automatic variables are local variables declared within a function or block and have automatic storage duration. They are created when the block in which they are defined is entered and destroyed when the block is exited. The stack is a region of memory that supports last-in, first-out (LIFO) allocation and deallocation.

### 2. `register` Variables
- **Location**: CPU Registers (if possible) or Stack
- **Details**: Register variables are a special case of automatic variables. The `register` keyword suggests to the compiler that the variable should be stored in a CPU register for faster access. If there are no available registers or if the compiler decides not to store the variable in a register, it will be stored on the stack.

### 3. `static` Variables
- **Location**: Data Segment (initialized data segment for initialized static variables, BSS segment for uninitialized static variables)
- **Details**: Static variables have a lifetime that extends across the entire run of the program. They retain their value between function calls and are initialized only once. Static variables can be local to a function (with limited scope to the function) or global (with limited scope to the file).

### 4. Global Variables
- **Location**: Data Segment (initialized data segment for initialized global variables, BSS segment for uninitialized global variables)
- **Details**: Global variables are defined outside of all functions and are accessible from any function within the same file or other files if declared with `extern`. They are allocated at program startup and deallocated when the program terminates.

### Memory Layout
Here’s a simple representation of the typical memory layout in a C program:

```
|---------------------|
|       Stack         | <- Grows downwards
|---------------------|
|        ...          |
|   Local (auto) and  |
|  register variables |
|---------------------|
|       Heap          | <- Grows upwards
|---------------------|
| Uninitialized Data  | <- BSS segment
|   (bss segment)     |
|---------------------|
| Initialized Data    | <- Data segment
|   (data segment)    |
|---------------------|
|       Code          |
|   (text segment)    |
|---------------------|
```

- **Stack**: Contains `auto` and `register` variables. The stack is used for function call management, including storing local variables, return addresses, and function call parameters.
- **Heap**: Used for dynamically allocated memory (e.g., via `malloc`).
- **BSS Segment**: Contains uninitialized global and static variables.
- **Data Segment**: Contains initialized global and static variables.
- **Text Segment**: Contains the actual compiled code (machine instructions).

Understanding these storage classes and memory segments helps in writing efficient and error-free programs, especially when managing memory and variable scope.