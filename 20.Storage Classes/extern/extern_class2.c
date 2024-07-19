#include<stdio.h>
void display(){
    extern int x;
    x++;
    printf("hello from support file\n");
    printf("x=%d",x);   
}