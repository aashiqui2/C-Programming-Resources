
//write a program to print the string character by character?
#include <stdio.h>
void printString(char arr[]);
int main()
{
    char FirstName[] = "Aashiqui";
    char LastName[] = "Bhai";
    printString(FirstName);
    printString(LastName);

    return 0;
}
void printString(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}