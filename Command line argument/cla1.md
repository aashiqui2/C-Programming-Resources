Command-line arguments in C allow users to pass parameters to the program when it is executed. This can be useful for providing inputs without hardcoding them into the program.

The `main` function in C can take two parameters to handle command-line arguments:
- `int argc`: The argument count, which represents the number of command-line arguments.
- `char *argv[]`: The argument vector, which is an array of strings representing the arguments.

Here’s an example demonstrating the use of command-line arguments:

### Example Program
```c
#include <stdio.h>

int main(int argc, char *argv[])
{
    // Print the number of arguments
    printf("Number of arguments: %d\n", argc);

    // Loop through each argument and print it
    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    // Check if there are enough arguments
    if (argc != 3) {
        printf("Usage: %s <arg1> <arg2>\n", argv[0]);
        return 1;
    }

    // Access specific arguments
    char *arg1 = argv[1];
    char *arg2 = argv[2];

    printf("Argument 1: %s\n", arg1);
    printf("Argument 2: %s\n", arg2);

    // Perform some action with the arguments
    // For example, if the arguments are numbers, you could convert them and add them
    int num1 = atoi(arg1);
    int num2 = atoi(arg2);
    int sum = num1 + num2;

    printf("Sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}
```

### Explanation
1. **Argument Count (`argc`)**:
   - Represents the number of arguments passed to the program, including the program name.
2. **Argument Vector (`argv`)**:
   - An array of strings where each element is one of the arguments.
   - `argv[0]` is the name of the program.
   - `argv[1]` to `argv[argc-1]` are the additional arguments.

### Running the Program
Assuming the executable is named `program`, you would run it from the command line like this:
```sh
./program 5 10
```

### Output
```
Number of arguments: 3
Argument 0: ./program
Argument 1: 5
Argument 2: 10
Argument 1: 5
Argument 2: 10
Sum of 5 and 10 is 15
```

### Key Points
- **Validation**: Always validate the number of arguments (`argc`) to ensure the program behaves correctly.
- **Conversion**: If the arguments need to be numbers, convert the strings to the appropriate numeric types using functions like `atoi` for integers.
- **Usage Message**: Provide a usage message to guide users on how to run the program correctly if the wrong number of arguments is provided.

Command-line arguments enhance the flexibility of your program, allowing it to accept inputs dynamically at runtime.