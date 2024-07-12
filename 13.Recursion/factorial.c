#include <stdio.h>
// function to print factorial of n
int factorial(int n);
int main()
{
    int n=5;
    // printf("enter n : ");
    // scanf("%d", &n);
    printf("factorial is : %d", factorial(n));
    return 0;
}
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int factnm1 = factorial(n - 1);
    printf("%d\n",factnm1);
    int factn = factnm1 * n;
    return factn;
}