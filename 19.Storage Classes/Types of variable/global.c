// C program to demonstrate use of global variable
#include <stdio.h>

int x = 20; // global variable

void function1() 
{
     printf("Function 1: %d\n", x); 
     
}

void function2() 
{ 
    printf("Function 2: %d\n", x);
}

int main()
{

    function1();
    function2();
    return 0;
}
