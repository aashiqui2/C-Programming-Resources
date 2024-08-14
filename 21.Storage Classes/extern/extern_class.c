#include<stdio.h>
extern int a;
void fun1();
int main(){
    // extern int a; //(refrence to a variable)
    printf("%d\n",a);
    fun1();

return 0;
}
void fun1(){
    int a=2;
    a++;
    printf("a=%d\n",a);
}

int a=10;



/*
* it is stored in RAM
* it has global scope,till the end of the program.
* if we want to use a variable which is declared somewhere else so we can use extern keyword
*/