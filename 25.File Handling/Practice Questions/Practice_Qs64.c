// 2 numbers -a &b are written in a file .Write a program to replace them with their sum.
#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Test.txt", "r");
    int a ;
    fscanf(fptr,"%d",&a);
    int b;
    fscanf(fptr,"%d",&b);
    fclose(fptr);
    fptr = fopen("Test.txt", "w");
    fprintf(fptr,"%d",a+b);
    fclose(fptr);
    return 0;
}