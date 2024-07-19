#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));

    printf("enter the Number(5): ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }

    ptr = realloc(ptr, 8);
    printf("enter the Number(8): ");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &ptr[i]);
    }

    // print
    for (int i = 0; i < 8; i++)
    {
        printf("the number %d is %d\n", i, ptr[i]);
    }

    return 0;
}