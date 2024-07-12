#include <stdio.h>

// In C internally the default
// type of 'var' is int
enum VARS { var =  9223372036854775807 };

// where mytype = int, char, long etc.
// but it can't be float, double or
// user defined data type.
int main()
{
	printf("The value of var: %lld", var);

	return 0;
}
