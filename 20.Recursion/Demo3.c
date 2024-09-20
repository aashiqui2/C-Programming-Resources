#include<stdio.h>
int  findFact(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n * findFact(n-1);
}
int main(){
    int n=5;
    // int fact=1;
    // for(int i=1;i<=n;i++)
    // {
    //     fact*=i;
    // }
    // printf("%d",fact);

    int result=findFact(n);
    printf("%d",result);
return 0;
}