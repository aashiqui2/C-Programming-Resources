#include <stdio.h>

int main() {
    char str[] = "Hello";
    char *c = str; // c points to the beginning of the string

    // Print each character using pointer arithmetic
    while (*c != '\0') {
        printf("%c ", *c);
        c++; // Move to the next character
    }
    printf("\n");

    return 0;
}
