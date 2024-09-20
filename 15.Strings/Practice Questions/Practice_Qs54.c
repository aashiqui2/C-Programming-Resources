//! check if the character is present in a string or not
#include <stdio.h>
#include<stdbool.h>
bool checkChar(char str[], char ch);
int main()
{
    char str[] = "helloworld";
    char ch = 'Z';
    if ( checkChar(str, ch)) {
        printf("Yes,It is present");
    } else {
        printf("No,It is not present");
    }
    return 0;
}
bool checkChar(char str[], char ch)
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        {
            return true;
        }
    }
    return false;
}