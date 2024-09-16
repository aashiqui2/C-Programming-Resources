To read a string in C, you can use various functions from the standard input/output library (`stdio.h`). Here are some common methods:

1. **`scanf` function**:
   - `scanf` can be used to read a string input from the user. Note that it stops reading at whitespace.
   ```c
   #include <stdio.h>

   int main() {
       char str[100];
       printf("Enter a string: ");
       scanf("%s", str);
       printf("You entered: %s\n", str);
       return 0;
   }
   ```

2. **`gets` function** (Note: `gets` is deprecated and unsafe as it doesn't perform bounds checking):
   ```c
   #include <stdio.h>

   int main() {
       char str[100];
       printf("Enter a string: ");
       gets(str);
       printf("You entered: %s\n", str);
       return 0;
   }
   ```

3. **`fgets` function**:
   - `fgets` is safer than `gets` as it allows you to specify the maximum number of characters to read.
   ```c
   #include <stdio.h>

   int main() {
       char str[100];
       printf("Enter a string: ");
       fgets(str, sizeof(str), stdin);
       printf("You entered: %s\n", str);
       return 0;
   }
   ```

4. **`scanf` with format specifiers to read until newline**:
   - You can use `scanf` with a character set to read until a newline is encountered.
   ```c
   #include <stdio.h>

   int main() {
       char str[100];
       printf("Enter a string: ");
       scanf("%[^\n]", str);
       printf("You entered: %s\n", str);
       return 0;
   }
   ```

### Summary
- **`scanf("%s", str)`**: Reads a word (stops at whitespace).
- **`gets(str)`**: Reads a line (deprecated and unsafe).
- **`fgets(str, sizeof(str), stdin)`**: Reads a line with bounds checking.
- **`scanf("%[^\n]", str)`**: Reads a line until newline character.

For most applications, it's recommended to use `fgets` for its safety and reliability.






























