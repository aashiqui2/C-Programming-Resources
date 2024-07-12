#include <stdio.h>
int isprime(int);
int main()
{
    int a = 2, b = 20;
    for (int i = a; i < b; i++)
    {
        if (isprime(i))
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
int isprime(int n)
{
    int div = 2;
    while (div <= n / 2)
    {
        if (n % div != 0)
        {
            return 1;
        }
        else{
            return 0;
        }
        div++;
    }
    return 1;
}