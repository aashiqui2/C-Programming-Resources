#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Test.txt", "r");
    if (fptr == NULL)
    {
        printf("file does not exist");
    }

    // int ch;
    // int a, b, c;
    // ch = fscanf(fptr, "%d %d %d", &a, &b, &c); //! it returns the number of input items converted and assigned
    // printf("%d\n",ch);
    // printf("%d %d %d\n", a, b, c);

    // int num;
    // float decimal;
    // char str[100];
    // if (fscanf(fptr, "%d %f %s", &num, &decimal, str) == 3)
    // {
    //     printf("Integer: %d\n", num);
    //     printf("Float: %.2f\n", decimal);
    //     printf("String: %s\n", str);
    // }
    // else
    // {
    //     printf("Error reading data!\n");
    // }

    //! if the input has charcter to read need to specify proper format specifier
    // int a;
    // float b;
    // char c[10];
    // while(fscanf(fptr,"%d %f %s",&a,&b,c)!=EOF)
    // {
    //     printf("Integer: %d\n", a);
    //     printf("Float: %.2f\n", b);
    //     printf("String: %s\n", c);
    // }

    // char ch;
    // while(fscanf(fptr, "%c", &ch)!=EOF)
    // {
    // printf("The character %c\n", ch);
    // }

    fclose(fptr);
    return 0;
}