When using `scanf("%s", name);`, `scanf` does not automatically limit the number of characters it reads based on the size of the array. If the input string exceeds the size of the array, it will continue to write past the end of the array, causing a buffer overflow.

Here's a detailed explanation:

### Buffer Overflow Scenario

Consider this code:
```c
#include <stdio.h>

int main() {
    char name[5];
    printf("Enter a string: ");
    scanf("%s", name);  // Unsafe: no limit on input length
    printf("You entered: %s\n", name);
    return 0;
}
```

- **Input**: `aashiqui`
- **Expected Behavior**: Buffer overflow, undefined behavior

### What Actually Happens

1. **Array Declaration**:
   ```c
   char name[5];
   ```
   This declares an array `name` that can hold up to 4 characters plus a null terminator (`'\0'`).

2. **Input Handling with `scanf`**:
   ```c
   scanf("%s", name);
   ```
   `scanf` reads input until it encounters a whitespace character (space, tab, newline). It does not check the size of the array `name`. If you input `aashiqui` (8 characters), `scanf` will attempt to write all 8 characters plus the null terminator into the `name` array.

3. **Buffer Overflow**:
   Since `name` can only hold 5 characters (`4 + '\0'`), writing 9 characters (`8 + '\0'`) will overflow the buffer. This can corrupt adjacent memory, leading to undefined behavior, crashes, or security vulnerabilities.

### Correct Approach with `scanf`

You should limit the number of characters `scanf` reads to prevent buffer overflow. Use a width specifier in the format string:

```c
#include <stdio.h>

int main() {
    char name[5];
    printf("Enter a string: ");
    scanf("%4s", name);  // Limit input to 4 characters (+1 for '\0')
    printf("You entered: %s\n", name);
    return 0;
}
```

- **Input**: `aashiqui`
- **Output**: `You entered: aash`

Here, `scanf("%4s", name);` ensures that `scanf` reads at most 4 characters, leaving space for the null terminator.

### Correct Approach with `fgets`

Alternatively, use `fgets` for safe input handling:

```c
#include <stdio.h>

int main() {
    char name[5];
    printf("Enter a string: ");
    fgets(name, sizeof(name), stdin);  // Read up to sizeof(name)-1 characters
    printf("You entered: %s\n", name);
    return 0;
}
```

- **Input**: `aashiqui`
- **Output**: `You entered: aash`

`fgets(name, sizeof(name), stdin)` reads up to `sizeof(name)-1` characters, ensuring null termination and preventing buffer overflow.

### Summary
- **Buffer Overflow Risk**: `scanf("%s", name);` reads input without checking the array size, leading to potential buffer overflow.
- **Preventing Overflow with `scanf`**: Use a width specifier, e.g., `scanf("%4s", name);`, to limit input length.
- **Safer Alternative with `fgets`**: `fgets(name, sizeof(name), stdin);` safely reads input, respecting array boundaries and ensuring null termination.