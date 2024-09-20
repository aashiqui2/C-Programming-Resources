#include <stdio.h>
int main()
{
    char *canChange = "Hello World";
    puts(canChange);
    canChange = "World"; // we can change ,modify,when using pointer type
    puts(canChange);

    char cannotChange[] = "Hello World";
    puts(cannotChange);
    // cannotChange = "World"; // we cannot change ,modify,when using Array type like this error assignment to expression with array type
    puts(cannotChange);
    return 0;
}