#include <stdio.h>
int global = 5;
void display()
{
	printf("%d\n", global);
}

int main()
{
	printf("Before change within main: ");
	display();
	printf("After change within main: ");
	global = 10;
	display();
}
