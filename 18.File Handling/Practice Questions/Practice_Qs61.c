// make a program to read 5 integer from a file.
#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Test.txt", "r");
    int n;
    fscanf(fptr,"%d",&n);
    printf("The number = %d\n",n);
    fscanf(fptr,"%d",&n);
    printf("The number = %d\n",n);
    fscanf(fptr,"%d",&n);
    printf("The number = %d\n",n);
    fscanf(fptr,"%d",&n);
    printf("The number = %d\n",n);
    fscanf(fptr,"%d",&n);
    printf("The number = %d\n",n);
    
    fclose(fptr);
    return 0;
}

