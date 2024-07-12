#include <stdio.h>
#include <string.h>
int main()
{
    char firstStr[] = "Hello ";
    char secondStr[] = "world";
    strcat(firstStr, secondStr);
    puts(firstStr);
    return 0;
}
