// without argument and without return value
#include <stdio.h>
void sum();
int main()
{
    sum();
    return 0;
}
void sum()
{
    int a = 10;
    int b = 20;
    int c = a + b;
    printf("%d", c);
}