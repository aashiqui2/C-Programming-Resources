#include <stdio.h>

int main()
{
    int *ptr; // Wild pointer (uninitialized)
    // printf("%d\n", *ptr); // Dangerous! (Commented out)
    return 0;
}