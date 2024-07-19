#include <stdio.h>

int main() {
    int x = 5;
    const int *ptr = &x; // Pointer to a constant integer
    // *ptr = 10; // Not allowed: Cannot modify the value at the address ptr points to
    int y = 10;
    ptr = &y; // Allowed: ptr can point to a different address
    printf("Pointer to Constant: %d\n", *ptr); // Prints the value of y
    return 0;
}
