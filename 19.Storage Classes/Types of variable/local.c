// C program to declare and print local variable inside a
// function.
#include <stdio.h>

void function()
{
	int x = 10; // local variable
	printf("%d", x);
}

int main()
{
    function();
}
