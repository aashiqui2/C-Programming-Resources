#include<stdio.h>
// static int x;
// int x;
void display();
void main(){
    display();
    display();
    //printf("%d",x);//undeclared
}
void display(){
    static int x;//This statement is skipped it only executed only once 
    x+=10;
    printf("x=%d\n",x);
}

/*
* stored in RAM
* it has block,function and program scope
* lifetime will be till the end of the program
*/