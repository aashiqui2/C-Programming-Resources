#include<stdio.h>
int main()
{
int n;
printf("enter n (n>2):");
scanf("%d",&n);
int fib[n];
fib[0]=0;
fib[1]=1;
for(int i=2;i<n;i++)
{
    fib[i]=fib[i-1]+fib[i-2];
}
for(int i=0;i<n;i++)
{
    printf("%d \t",fib[i]);
}
return 0;
}