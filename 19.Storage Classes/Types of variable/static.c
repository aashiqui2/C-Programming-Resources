// C program to demonstrate use of static variable
#include <stdio.h>

void function()
{
	int x = 20; // local variable
	static int y = 30; // static variable
	x = x + 10;
	y = y + 10;
	printf("\tLocal: %d\n\tStatic: %d\n", x, y);
}

int main()
{
	printf("First Call\n");
	function();
	printf("Second Call\n");
	function();
	printf("Third Call\n");
	function();
	return 0;
}
