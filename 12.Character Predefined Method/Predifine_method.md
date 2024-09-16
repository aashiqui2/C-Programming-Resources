In C, there are several functions provided by the `<ctype.h>` library for character classification and conversion. Here are descriptions and examples of `islower`, `isupper`, `isdigit`, `isspace`, `isalpha`, `isalnum`, `toupper`, and `tolower`:

### Character Classification Functions

1. **`islower`**
   - Checks if a character is a lowercase letter.

   ```c
   #include <stdio.h>
   #include <ctype.h>

   int main() {
       char c = 'a';
       if (islower(c)) {
           printf("%c is a lowercase letter.\n", c);
       } else {
           printf("%c is not a lowercase letter.\n", c);
       }
       return 0;
   }
   ```

2. **`isupper`**
   - Checks if a character is an uppercase letter.

   ```c
   #include <stdio.h>
   #include <ctype.h>

   int main() {
       char c = 'A';
       if (isupper(c)) {
           printf("%c is an uppercase letter.\n", c);
       } else {
           printf("%c is not an uppercase letter.\n", c);
       }
       return 0;
   }
   ```

3. **`isdigit`**
   - Checks if a character is a digit (0-9).

   ```c
   #include <stdio.h>
   #include <ctype.h>

   int main() {
       char c = '1';
       if (isdigit(c)) {
           printf("%c is a digit.\n", c);
       } else {
           printf("%c is not a digit.\n", c);
       }
       return 0;
   }
   ```

4. **`isspace`**
   - Checks if a character is a whitespace character.

   ```c
   #include <stdio.h>
   #include <ctype.h>

   int main() {
       char c = ' ';
       if (isspace(c)) {
           printf("'%c' is a whitespace character.\n", c);
       } else {
           printf("'%c' is not a whitespace character.\n", c);
       }
       return 0;
   }
   ```

5. **`isalpha`**
   - Checks if a character is an alphabetic letter.

   ```c
   #include <stdio.h>
   #include <ctype.h>

   int main() {
       char c = 'A';
       if (isalpha(c)) {
           printf("%c is an alphabetic letter.\n", c);
       } else {
           printf("%c is not an alphabetic letter.\n", c);
       }
       return 0;
   }
   ```

6. **`isalnum`**
   - Checks if a character is an alphanumeric character (letter or digit).

   ```c
   #include <stdio.h>
   #include <ctype.h>

   int main() {
       char c = 'A';
       if (isalnum(c)) {
           printf("%c is an alphanumeric character.\n", c);
       } else {
           printf("%c is not an alphanumeric character.\n", c);
       }
       return 0;
   }
   ```

### Character Conversion Functions

7. **`toupper`**
   - Converts a lowercase letter to an uppercase letter. If the character is not a lowercase letter, it is returned unchanged.

   ```c
   #include <stdio.h>
   #include <ctype.h>

   int main() {
       char c = 'a';
       char upper = toupper(c);
       printf("Uppercase of %c is %c.\n", c, upper);
       return 0;
   }
   ```

8. **`tolower`**
   - Converts an uppercase letter to a lowercase letter. If the character is not an uppercase letter, it is returned unchanged.

   ```c
   #include <stdio.h>
   #include <ctype.h>

   int main() {
       char c = 'A';
       char lower = tolower(c);
       printf("Lowercase of %c is %c.\n", c, lower);
       return 0;
   }
   ```

### Summary
- **Character Classification**:
  - `islower`: Checks if a character is lowercase.
  - `isupper`: Checks if a character is uppercase.
  - `isdigit`: Checks if a character is a digit.
  - `isspace`: Checks if a character is whitespace.
  - `isalpha`: Checks if a character is an alphabetic letter.
  - `isalnum`: Checks if a character is alphanumeric (letter or digit).

- **Character Conversion**:
  - `toupper`: Converts a lowercase letter to uppercase.
  - `tolower`: Converts an uppercase letter to lowercase.