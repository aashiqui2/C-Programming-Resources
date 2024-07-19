#include<stdio.h>
void increment(int);
int main(){
    int a=1;
    increment(a);
    printf("%d\n",a);
return 0;
}
void increment(int a){
    a++;
    printf("%d\n",a);
}