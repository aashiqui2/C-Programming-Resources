#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Test.txt", "w");
    fprintf(fptr,"%c",'M');
    fprintf(fptr,"%c",'A');
    fprintf(fptr,"%c",'N');
    fprintf(fptr,"%c",'G');
    fprintf(fptr,"%c",'0');
    fprintf(fptr,"Programming in c is Fun");
   
    fclose(fptr);

    return 0;
}