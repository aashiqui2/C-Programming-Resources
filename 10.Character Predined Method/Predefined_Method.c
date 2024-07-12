#include <stdio.h>
#include <ctype.h>
int main()
{
    char c;
    c = 'a';
    printf("islower('%c') = %d\n", c, islower(c));
    c = 'A';
    printf("isupper('%c') = %d\n", c, isupper(c));
    c = '1';
    printf("isdigit('%c') = %d\n", c, isdigit(c));
    c = ' ';
    printf("isspace('%c') = %d\n", c, isspace(c));
    c = 'b';
    printf("isalpha('%c') = %d\n", c, isalpha(c));
    c = '9';
    printf("isalnum('%c') = %d\n", c, isalnum(c));
    c = 'd';
    printf("toupper('%c') = %c\n", c, toupper(c));
    c = 'D';
    printf("tolower('%c') = %c\n", c, tolower(c));
    return 0;
}