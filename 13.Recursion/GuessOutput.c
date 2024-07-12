#include<stdio.h>
// void fun(int n){
//     if(n==0)
//       return;
//     printf("%d",n%2);
//     fun(n/2);

// }

// int fun(int x,int y){
//     if(y==0) return 0;
//     return(x+fun(x,y-1));
// }

// int f(int n){
//     if(n<=1)
//       return 1;
//     if(n%2==0)
//       return f(n/2);
//     return f(n/2)+f(n/2+1);
// }

// unsigned int foo(unsigned int n,unsigned int r){
//     if(n>0) return (n%r +foo(n/r,r));
//     else return 0;
// }

int f(int n){
    static int i=1;
    if(n>=5) return n;
    n=n+i;
    i++;
    return f(n);
}
int main(){
    // fun(25);
    // fun(3,2);
    // printf("%d",f(11));
    // printf("%d",foo(345,10));
    printf("%d",f(1));

return 0;
}