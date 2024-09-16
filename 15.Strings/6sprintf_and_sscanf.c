#include <stdio.h>  
int main() 
{ 
	// char str[50]; 
	// int a = 2, b = 8; 

	// sprintf(str, "%d and %d are even number", a, b); 
	// puts(str);


	char str[50]; 
	int a = 2, b = 8, c, d; 
	sprintf(str, "a = %d and b = %d", a, b); 
    printf("%s\n",str);
	sscanf(str, "a = %d and b = %d", &c, &d); 
	printf("c = %d and d = %d", c, d); 
	return 0;
} 

