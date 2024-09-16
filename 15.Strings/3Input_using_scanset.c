// scanset characters
#include <stdio.h>
int main()
{

	char str[20];
	// to get multiple words with whitespaces(skips only white space)
	//  scanf("%[^\n]s", str);

	// take only A-Z(UPPERCASE AS INPUT)
	// if first character is lowercase means it won't take any input
	// scanf("%[A-Z]s",str);

	// take only a-z(LOWERCASE AS INPUT)
    // if first character is Uppercase means it won't take any input
	// scanf("%[a-z]s", str); 


    // if first character is Not a Number means it won't take any input
	// take only 0-9(Numbers AS INPUT)
	// scanf("%[0-9]s", str); 

    // if first character is  a Number,alphabhet means it won't take any input,oterwise it only take special character
	// scanf("%[^A-Za-z0-9]s",str);

	
	printf("%s", str);

	return 0;
}
