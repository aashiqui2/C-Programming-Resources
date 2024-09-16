#include <stdio.h>
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    printf("Address of the first element %u\n", &a[0]);
    printf("Address of the Array %u\n", a); // base address
    return 0;
}