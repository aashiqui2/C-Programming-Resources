#include <stdio.h>
int main()
{
	// char str[50];
	// int a = 2, b = 8;
	// sprintf(str, "%d and %d are even number", a, b);
	// puts(str);

	char str[50];
	int a = 2, b = 8, c, d;
	sprintf(str, "a = %d, b = %d", a, b);
	puts(str);
	sscanf(str, "a = %d, b = %d", &c, &d);
	printf("c = %d, d = %d\n", c, d);
	return 0;
}
