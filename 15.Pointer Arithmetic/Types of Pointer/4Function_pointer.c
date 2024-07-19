#include <stdio.h>

void greet() {
    printf("Hello, World!\n");
}

int main() {
    void (*funcPtr)() = greet;
    funcPtr(); // Call the function through pointer
    return 0;
}