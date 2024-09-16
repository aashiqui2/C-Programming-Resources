#include <stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    char filename[100],ch;
    gets(filename);
    fptr = fopen(filename, "r");
    if (fptr == NULL)
    {
        printf("File does not exist");
        exit(-1);
    }
    printf("The contents of %s file are :\n", filename);
    while ((ch = getc(fptr)) != EOF)
        printf("%c", ch);

    return 0;
}