#include <stdio.h>
int main()
{
    char *canChange = "Hello World";
    printf("%u\n", canChange);
    printf("%s\n", canChange);
    puts(canChange);//automatically append \n and no need format specifiers
    canChange = "World"; // we can change ,modify,when using pointer type
    printf("%s\n", canChange);
    puts(canChange);

//     char cannotChange[] = "Hello World";
//     puts(cannotChange);
   // cannotChange="World";//we cannot change ,modify,when using Array type like this
    //error assignment to expression with array type
//     puts(cannotChange);
    return 0;
}