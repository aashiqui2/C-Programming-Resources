#include <stdio.h>

int main()
{
    int x = 5;
    int *ptr = &x;
    int **dptr = &ptr; // Pointer to pointer
    printf("Double Pointer: %d\n", **dptr);
    return 0;
}