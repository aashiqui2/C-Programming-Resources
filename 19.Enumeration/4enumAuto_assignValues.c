#include<stdio.h>
int main(){
    enum Point {y=2,x=32,t,z=0};
    printf("%d %d %d %d",x,y,z,t);
return 0;
}

//? we can assign values in an order. all unsigned names will get values as value of previous name+1;