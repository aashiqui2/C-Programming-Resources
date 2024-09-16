#include <stdio.h>
#include <string.h>
int main()
{
    char firstStr[] = "Banana";
    char secondStr[] = "BRanana";
    int a = strcmp(firstStr, secondStr); //s1==s2 return 0, s1<s2 negative value, s1>s2 positive value
    printf("%d", a);
    return 0;
}
