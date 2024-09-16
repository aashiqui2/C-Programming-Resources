#include <stdio.h>
int main()
{
    // fgetc
    // char str[10];
    // printf("Enter a string: ");
    // gets(str);//depreciated
    // printf("You entered: %s\n", str);

    // fgets
    char str[10];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); //(n-1)character
    printf("You entered: %s\n", str);
    return 0;
}