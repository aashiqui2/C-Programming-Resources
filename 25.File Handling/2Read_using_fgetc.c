#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Test.txt", "r");

    // if (fptr == NULL)
    // {
    //     printf("File Does not exist \n");
    // }
    // else
    // {
    //     char ch;
    //     printf("%c\n", fgetc(fptr));
    //     printf("%c\n", fgetc(fptr));
    //     printf("%c\n", fgetc(fptr));
    //     printf("%c\n", fgetc(fptr));
    //     printf("%c\n", fgetc(fptr));
    // }

    // int ch;
    // while((ch=fgetc(fptr))!=EOF)//!EOF is -1
    // {
    //     printf("%c\n", ch);
    // }

    char ch;
    ch = fgetc(fptr);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    printf("\n");



    fclose(fptr);
    // check for integer reading
    return 0;
}