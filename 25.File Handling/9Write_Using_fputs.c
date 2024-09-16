#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Test.txt", "w");

    fputs("Programming in C is really a fun !", fptr);
    fputs("\n", fptr);
    fputs("Let’s enjoy it \n", fptr);

    fclose(fptr);

    return 0;
}