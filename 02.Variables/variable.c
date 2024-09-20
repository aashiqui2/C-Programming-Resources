#include <stdio.h>
int main()
{
	// declaration with definition
	 int a;//a will have some garbage values
	printf("Defined_var: %d\n", a);
	// initialization
	a = 12;
	// declaration + definition + initialization
	int b = 25;
	printf("Value of defined_var after initialization: %d\n",a);
	printf("Value of ini_var: %d\n", b);

	int $c=2;
	int _d=3;
	int _e_21=4;
	int _=12;
	printf("%d\n",$c);
	printf("%d\n",_d);
	printf("%d\n",_e_21);
	printf("%d\n",_);
	return 0;
}
