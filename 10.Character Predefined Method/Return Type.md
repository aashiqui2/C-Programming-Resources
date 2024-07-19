The functions `islower`, `isupper`, `isdigit`, `isspace`, `isalpha`, `isalnum`, `toupper`, and `tolower` from the `<ctype.h>` library all return an `int`. Here's a detailed explanation of the return values for each function:

### Character Classification Functions

1. **`islower`**
   ```c
   int islower(int c);
   ```
   - **Return Value**: Returns a non-zero value (true) if `c` is a lowercase letter; returns 0 (false) otherwise.

2. **`isupper`**
   ```c
   int isupper(int c);
   ```
   - **Return Value**: Returns a non-zero value (true) if `c` is an uppercase letter; returns 0 (false) otherwise.

3. **`isdigit`**
   ```c
   int isdigit(int c);
   ```
   - **Return Value**: Returns a non-zero value (true) if `c` is a digit (0-9); returns 0 (false) otherwise.

4. **`isspace`**
   ```c
   int isspace(int c);
   ```
   - **Return Value**: Returns a non-zero value (true) if `c` is a whitespace character; returns 0 (false) otherwise.

5. **`isalpha`**
   ```c
   int isalpha(int c);
   ```
   - **Return Value**: Returns a non-zero value (true) if `c` is an alphabetic letter; returns 0 (false) otherwise.

6. **`isalnum`**
   ```c
   int isalnum(int c);
   ```
   - **Return Value**: Returns a non-zero value (true) if `c` is an alphanumeric character (letter or digit); returns 0 (false) otherwise.

### Character Conversion Functions

7. **`toupper`**
   ```c
   int toupper(int c);
   ```
   - **Return Value**: Returns the uppercase equivalent of `c` if `c` is a lowercase letter; otherwise, returns `c` unchanged.

8. **`tolower`**
   ```c
   int tolower(int c);
   ```
   - **Return Value**: Returns the lowercase equivalent of `c` if `c` is an uppercase letter; otherwise, returns `c` unchanged.

### Example Usage and Return Values

Here is an example demonstrating the usage of these functions and their return values:

```c
#include <stdio.h>
#include <ctype.h>

int main() {
    char c;

    // Example for classification functions
    c = 'a';
    printf("islower('%c') = %d\n", c, islower(c));
    c = 'A';
    printf("isupper('%c') = %d\n", c, isupper(c));
    c = '1';
    printf("isdigit('%c') = %d\n", c, isdigit(c));
    c = ' ';
    printf("isspace('%c') = %d\n", c, isspace(c));
    c = 'b';
    printf("isalpha('%c') = %d\n", c, isalpha(c));
    c = '9';
    printf("isalnum('%c') = %d\n", c, isalnum(c));

    // Example for conversion functions
    c = 'd';
    printf("toupper('%c') = %c\n", c, toupper(c));
    c = 'D';
    printf("tolower('%c') = %c\n", c, tolower(c));

    return 0;
}
```

### Output Explanation
```plaintext
islower('a') = 1
isupper('A') = 1
isdigit('1') = 1
isspace(' ') = 1
isalpha('b') = 1
isalnum('9') = 1
toupper('d') = D
tolower('D') = d
```

- **Character Classification Functions**: Return 1 (true) if the character matches the condition, otherwise return 0 (false).
- **Character Conversion Functions**: Return the converted character if applicable, otherwise return the original character.

By using these functions, you can effectively classify and convert characters in your C programs.