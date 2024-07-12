In the C programming language, there are several built-in data types that you can use to declare variables and functions. Here's a list of some commonly used data types in C:

1. **Basic Data Types:**
   - **int:** Integer type, typically 4 bytes.
   - **char:** Character type, typically 1 byte.
   - **float:** Single-precision floating point, typically 4 bytes.
   - **double:** Double-precision floating point, typically 8 bytes.

2. **Derived Data Types:**
   - **Arrays:** A collection of similar data elements. For example, `int arr[5]` declares an array of 5 integers.
   - **Pointers:** Variables that store memory addresses. For example, `int *ptr` declares a pointer to an integer.
   - **Structures:** A user-defined data type that groups related variables under one name. For example, `struct student { int id; char name[20]; };` defines a structure for a student.
   - **Unions:** Similar to structures, but all members share the same memory location. Only one member can contain a value at any given time.
   - **Enumerations (enums):** A user-defined data type used to assign names to integral constants. For example, `enum day { Sunday, Monday, Tuesday, ... };`.

3. **Modifiers:**
   - **signed:** It is used with integer data types to allow negative numbers. (e.g., `signed int x;`)
   - **unsigned:** It is used with integer data types to allow only non-negative numbers. (e.g., `unsigned int y;`)
   - **short:** It reduces the storage size of integer types. (e.g., `short int z;`)
   - **long:** It increases the storage size of integer types. (e.g., `long int a;`)

4. **Void:** It indicates that a function does not return a value or that a pointer does not point to any data type. (e.g., `void func();`, `void *ptr;`)

These are some of the basic data types available in C. You can use these data types to create variables and define functions according to your program's requirements.

Here's a table summarizing common data types in C, including their size, range, and format specifiers:

| Data Type         | Size (in bytes) | Range                                                | Format Specifier |
|-------------------|-----------------|------------------------------------------------------|------------------|
| char              | 1               | -128 to 127 (signed) or 0 to 255 (unsigned)         | %c               |
| unsigned char     | 1               | 0 to 255                                             | %c               |
| signed char       | 1               | -128 to 127                                          | %c               |
| int               | 4               | -2,147,483,648 to 2,147,483,647                      | %d or %i         |
| unsigned int      | 4               | 0 to 4,294,967,295                                   | %u               |
| short int         | 2               | -32,768 to 32,767                                    | %hd              |
| unsigned short int| 2               | 0 to 65,535                                          | %hu              |
| long int          | 4 or 8          | -2,147,483,648 to 2,147,483,647 (32-bit)<br>-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 (64-bit) | %ld or %li       |
| unsigned long int | 4 or 8          | 0 to 4,294,967,295 (32-bit)<br>0 to 18,446,744,073,709,551,615 (64-bit) | %lu              |
| long long int     | 8               | -(2^63) to (2^63)-1                                  | %lld or %lli     |
| unsigned long long int | 8          | 0 to 18,446,744,073,709,551,615                      | %llu             |
| float             | 4               | 3.4e-38 to 3.4e38 (6 decimal places precision)       | %f               |
| double            | 8               | 1.7e-308 to 1.7e308 (15 decimal places precision)    | %lf or %e        |
| long double       | 10 or 16        | 3.4e-4932 to 1.1e4932 (19 decimal places precision)  | %Lf or %Le       |
| void              | N/A             | N/A                                                  | N/A              |

Please note that the size of data types may vary depending on the compiler and the system architecture. Also, the range values are approximate and may differ slightly in some cases. Format specifiers are used in printf() and scanf() functions to specify the type of data being printed or scanned.