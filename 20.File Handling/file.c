#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Test.txt", "w");
    if (fptr == NULL)
    {
        printf("The File is Not exist\n");
    }
    else
    {
        fclose(fptr);
    }
    return 0;
}