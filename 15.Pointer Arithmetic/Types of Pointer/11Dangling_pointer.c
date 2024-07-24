#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 42;
    free(ptr); // free the memory
    // ptr is now a dangling pointer
    printf("%d\n", *ptr); // undefined behavior
    return 0;
}
