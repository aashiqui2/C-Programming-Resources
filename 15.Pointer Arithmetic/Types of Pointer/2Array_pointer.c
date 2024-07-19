#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr; // Pointer to the first element of the array
    printf("Array Pointer: %d\n", *ptr);
    return 0;
}