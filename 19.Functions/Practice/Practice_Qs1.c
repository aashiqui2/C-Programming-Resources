//! C program to toggle case of each character in a string
#include <stdio.h>
#include <string.h>
void toogle(char c[])
{
    int len = strlen(c);
    for (int i = 0; i < len; i++)
    {
        if (c[i] >= 65 && c[i] <= 90)
        {
            c[i] = c[i] + 32;
        }
        else if(c[i] >= 97 && c[i] <= 122)
        {
            c[i] = c[i] - 32;
        }
    }
    puts(c);
}
int main()
{
    char c[] = "HeLlO";
    toogle(c);

    return 0;
}