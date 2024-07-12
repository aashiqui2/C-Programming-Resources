#include <stdio.h>
#include <string.h>
int main()
{
    char firstStr[] = "Banana";
    char secondStr[] = "Banana";
    int a = strcmp(firstStr, secondStr); // return an integer str1==str2 return 0 otherwise -1
    printf("%d", a);
    return 0;
}
