// without argument and with return value
#include <stdio.h>
int sum();
int main()
{
    int result=sum();
    printf("%d",result);

    return 0;
}
int sum()
{
    int a = 10;
    int b = 20;
    int c = a + b;
    return c;
}