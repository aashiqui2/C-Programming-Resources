#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Test.txt", "w");
    fputc('M',fptr);
    fputc('A',fptr);
    fputc('N',fptr);
    fputc('G',fptr);
    fputc('O',fptr);
   
    fclose(fptr);

    return 0;
}