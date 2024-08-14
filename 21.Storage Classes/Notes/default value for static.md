In C, static variables are automatically initialized to default values if they are not explicitly initialized by the programmer. These default values are zero for numeric types, null for pointers, and specific values for other types. Here is a summary of the default values for static variables of different data types:

### Default Values for Static Variables

1. **Integer Types (`int`, `short`, `long`, `long long`, `unsigned int`, `unsigned short`, `unsigned long`, `unsigned long long`):**
   - Default value: `0`

2. **Floating-Point Types (`float`, `double`, `long double`):**
   - Default value: `0.0`

3. **Character Types (`char`, `signed char`, `unsigned char`):**
   - Default value: `0` (which is the null character `'\0'` for `char`)

4. **Pointer Types:**
   - Default value: `NULL` (which is typically represented as `0`)

5. **Aggregate Types (Arrays, Structures, Unions):**
   - All elements of arrays and all members of structures and unions are initialized to their respective default values (e.g., all elements of an `int` array are set to `0`, all members of a `struct` are initialized to `0`, `0.0`, `NULL`, etc. as appropriate).

### Example

Here is an example demonstrating the default initialization of various static variables:

```c
#include <stdio.h>

struct ExampleStruct {
    int a;
    float b;
    char c;
};

void function() {
    static int int_var;
    static float float_var;
    static char char_var;
    static int *ptr_var;
    static int array_var[5];
    static struct ExampleStruct struct_var;

    printf("Default value of static int: %d\n", int_var);
    printf("Default value of static float: %f\n", float_var);
    printf("Default value of static char: %d\n", char_var); // Printed as an integer
    printf("Default value of static pointer: %p\n", (void*)ptr_var);
    printf("Default value of static int array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array_var[i]);
    }
    printf("\n");
    printf("Default values of static struct: %d, %f, %d\n", struct_var.a, struct_var.b, struct_var.c);
}

int main() {
    function();
    return 0;
}
```

### Output

```
Default value of static int: 0
Default value of static float: 0.000000
Default value of static char: 0
Default value of static pointer: (nil)
Default value of static int array: 0 0 0 0 0 
Default values of static struct: 0, 0.000000, 0
```

This output confirms that static variables are initialized to their default values when not explicitly initialized by the programmer. The integer and character types are set to `0`, floating-point types are set to `0.0`, pointers are set to `NULL`, and all elements of arrays and members of structures are initialized to `0` or their respective default values.