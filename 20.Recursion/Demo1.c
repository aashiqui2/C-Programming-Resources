#include <stdio.h>
void printNum(int n)
{
    //! 1-5
    // if (n > 0)
    // {
    //     printNum(n - 1);
    //     printf("%d ", n);
    // }

    //!5-1
    // if(n<1)
    // {
    //     return;
    // }
    // printf("%d ",n);
    // printNum(n-1);
}
int main()
{
    // for(int i=1;i<=5;i++)
    // {
    //     printf("%d ",i);
    // }
    // printNum(5);

    // for(int i=5;i>=1;i--)
    // {
    //     printf("%d ",i);
    // }
    printNum(5);
    return 0;
}