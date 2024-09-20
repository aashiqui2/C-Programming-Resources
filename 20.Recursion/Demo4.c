#include <stdio.h>
void fibonoci(int a,int b,int n)
{
    if(n==0)
    {
        return;
    }
    int c=a+b;
    printf("%d ",c);
    fibonoci(b,c,n-1);
}
int main()
{
    int a = 0, b = 1;
    int n=5;
    // printf("%d %d ", a, b);
    // for (int i = 1; i <= 5; i++)
    // {
    //     int c = a + b;
    //     printf("%d ",c);
    //     a = b;
    //     b = c;
    // }
    printf("%d %d ",a,b);
    fibonoci(a,b,n-2);
    return 0;
}