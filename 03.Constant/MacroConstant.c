#include <stdio.h>

#define CHAR_A 'A'
#define CHAR_NEWLINE '\n'
#define CHAR_TAB '\t'

#define DECIMAL_NUMBER 123
#define OCTAL_NUMBER 0123       
#define HEXADECIMAL_NUMBER 0x7B 

#define DECIMAL_FLOAT 123.45
#define EXPONENTIAL_FLOAT 1.2345e2

int main()
{
    // int decimal = 123;
    // int octal = 0123;
    // int hexadecimal = 0x7B;

    printf("Character A: %c\n", CHAR_A);
    printf("Newline Character: %c", CHAR_NEWLINE);
    printf("Tab Character: %cAfter tab\n", CHAR_TAB);

    printf("Decimal Number: %d\n", DECIMAL_NUMBER);
    printf("Octal Number: %d\n", OCTAL_NUMBER);
    printf("Hexadecimal Number: %d\n", HEXADECIMAL_NUMBER);

    printf("Decimal Float: %f\n", DECIMAL_FLOAT);
    printf("Exponential Float: %f\n", EXPONENTIAL_FLOAT);


    return 0;
}
