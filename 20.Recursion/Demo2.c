#include <stdio.h>
void printSum(int i, int n, int sum)
{
    if (i == n)
    {
        sum += i;
        printf("%d ", sum);
        return;
    }
    sum += i;
    printSum(i + 1, n, sum);
}
int main()
{
    int n = 5;
    int sum = 0;
    // for(int i=1;i<=n;i++){
    //     sum+=i;
    // }
    // printf("%d ",sum);
    printSum(1, 5, 0);
    return 0;
}