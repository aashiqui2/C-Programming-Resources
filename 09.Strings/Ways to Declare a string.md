Sure! Below are the various ways to declare a string in C, along with the corresponding `printf` statements to print the strings.

### 1. **Using a Character Array**
 - You can declare a string as an array of characters. The size of the array should be large enough to hold the string plus the null terminator (`\0`).
   ```c
   #include <stdio.h>

   int main() {
       char str[6] = "Hello";
       printf("%s\n", str);  // Prints: Hello
       return 0;
   }
   ```

### 2. **Using a String Literal**
 - You can initialize a string directly using a string literal. The size of the array is automatically determined by the length of the string plus the null terminator.
   ```c
   #include <stdio.h>

   int main() {
       char str[] = "Hello";
       printf("%s\n", str);  // Prints: Hello
       return 0;
   }
   ```

### 3. **Using a Pointer to a String Literal**
 - You can declare a string using a pointer to a character, and initialize it with a string literal. This is read-only and should not be modified.
   ```c
   #include <stdio.h>

   int main() {
       char *str = "Hello";
       printf("%s\n", str);  // Prints: Hello
       return 0;
   }
   ```

### 4. **Dynamic Memory Allocation**
 - You can allocate memory for a string dynamically using `malloc` or `calloc`, and then copy the string into the allocated space.
   ```c
   #include <stdio.h>
   #include <stdlib.h>
   #include <string.h>

   int main() {
       char *str = (char *)malloc(6 * sizeof(char)); // Allocate memory for 6 characters
       strcpy(str, "Hello");
       printf("%s\n", str);  // Prints: Hello
       free(str);  // Free the allocated memory
       return 0;
   }
   ```

### 5. **Using Pointers and Arrays**
 - You can declare an array of pointers, where each pointer points to the first character of a string literal.
   ```c
   #include <stdio.h>

   int main() {
       char *str[] = {"Hello", "World"};
       printf("%s %s\n", str[0], str[1]);  // Prints: Hello World
       return 0;
   }
   ```

Each code snippet includes a `printf` statement that correctly prints the string(s) stored in the variable.

