// with argument and without return value
#include <stdio.h>
void sum(int,int);
int main()
{
    int a=10,b=20;
    sum(a,b);//actual argument
    return 0;
}
void sum(int x,int y)//x nad y are formal argument
{
    int sum=x+y;
    printf("%d",sum);
}