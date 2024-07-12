The `strcspn` function in C is used to find the length of the initial segment of a string that does not contain any characters from a specified set of characters. It is part of the `<string.h>` library.

Here is the prototype for `strcspn`:

```c
size_t strcspn(const char *str1, const char *str2);
```

- `str1` is the string to be scanned.
- `str2` is the string containing the characters to match in `str1`.

`strcspn` returns the number of characters in the initial segment of `str1` which are not in `str2`.

### Example

Let's see an example to understand how `strcspn` works:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "hello world";
    char str2[] = " ";

    // Find the length of the initial segment of str1 not containing any character from str2
    size_t length = strcspn(str1, str2);

    printf("Length of initial segment without any characters from str2: %zu\n", length);
    return 0;
}
```

In this example:
- `str1` is `"hello world"`.
- `str2` is `" "` (a single space character).

The `strcspn` function will return `5` because the initial segment of `str1` that does not contain a space character is `"hello"`, which has a length of 5.

### Using `strcspn` to Remove Newline Characters

In the context of the previous program, `strcspn` is used to remove the newline character that `fgets` might append at the end of the input string. Here's how it works:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char s1[30], s2[10];
    int c = 0, i, j;
    
    printf("Enter the string s1: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter the string s2: ");
    fgets(s2, sizeof(s2), stdin);

    // Remove the newline character from s1 if it exists
    s1[strcspn(s1, "\n")] = '\0';

    // Remove the newline character from s2 if it exists
    s2[strcspn(s2, "\n")] = '\0';

    // Find the length of s1
    for(i = 0; s1[i] != '\0'; i++) {
        c++;
    }

    // Concatenate s2 to s1
    for(i = c, j = 0; s2[j] != '\0'; i++, j++) {
        s1[i] = s2[j];
    }
    s1[i] = '\0';

    printf("%s\n", s1);

    return 0;
}
```

In this program:
- `s1[strcspn(s1, "\n")] = '\0';` finds the position of the newline character (if it exists) and replaces it with a null terminator, effectively removing it.
- The same is done for `s2` to ensure that the newline character is not included in the concatenation.