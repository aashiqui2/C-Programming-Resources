#include <stdio.h>
int main()
{

	const int int_const = 25;

	const char char_const = 'A';

	const float float_const = 15.66;

	printf("Printing value of Integer Constant: %d\n", int_const);
	printf("Printing value of Character Constant: %c\n", char_const);
	printf("Printing value of Float Constant: %f\n", float_const);

	const int var = 10; // C allows direct pointer manipulation 
	printf("Initial Value of Constant: %d\n", var);

	int *ptr = &var;

	*ptr = 500;
	printf("Final Value of Constant: %d", var);
	return 0;
}
