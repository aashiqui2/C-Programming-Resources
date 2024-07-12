// with argument and with return value
#include <stdio.h>
int sum(int,int);
int main()
{
    int a=10,b=20;
    int result=sum(a,b);//actual argument
    printf("%d",result);
    return 0;
}
int sum(int x,int y)//x nad y are formal argument
{
    int sum=x+y;
    return sum;
}