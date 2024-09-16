#include<stdio.h>
struct student{
    short s[5];
    union{
        float y;
        long z;
    }u;
}t;
int main(){
    struct student s;
    printf("%d",sizeof(s));
return 0;
}