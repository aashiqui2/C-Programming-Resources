

- **`tolower(c)`** and **`toupper(c)`**: These functions from `<ctype.h>` library convert the character `c` between lowercase and uppercase, respectively. If the character is already in the desired case or not an alphabetic character, they return the character unchanged.

- **`isdigit(c)`**: Checks if `c` is a digit character (0-9). It returns a non-zero value (`1` in this case) if `c` is a digit, otherwise it returns `0`.

- **`isalnum(c)`**: Checks if `c` is an alphanumeric character (a letter or a digit). It returns a non-zero value (`1` in this case) if `c` is alphanumeric, otherwise it returns `0`.

- **`isalpha(c)`**: Checks if `c` is an alphabetic character (a letter). It returns a non-zero value (`1` in this case) if `c` is a letter, otherwise it returns `0`.

```c
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "Hello, World!\n";
    int i = 0;

    while (str[i]) {
        if (isspace(str[i])) {
            printf("Character '%c' at index %d is a whitespace character.\n", str[i], i);
        } else {
            printf("Character '%c' at index %d is not a whitespace character.\n", str[i], i);
        }
        i++;
    }

    return 0;
}```




