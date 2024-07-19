#include <stdio.h>

int main()
{
    int x = 10;
    int *ptr = &x;
    printf("Integer Pointer: %d\n", *ptr);
    return 0;
}