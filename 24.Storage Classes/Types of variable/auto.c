// C program to demonstrate use of automatic variable
#include <stdio.h>

void function()
{
	int x = 10; // local variable (also automatic)
	auto int y = 20; // automatic variable
	printf("Auto Variable: %d", y);
}
int main()
{

	function();
	return 0;
}
