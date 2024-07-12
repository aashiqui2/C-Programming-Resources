#include <stdio.h>
#include <stdbool.h>

int main()
{
   
    char letter = 'A';
    int number = 10;
    float fraction = 3.14f;
    double pi = 3.14159265359;
    bool flag = true; // Note: bool requires <stdbool.h>

    printf("Letter: %c\n", letter);
    printf("Number: %d\n", number);
    printf("Fraction: %f\n", fraction);
    printf("Pi: %lf\n", pi);
    printf("Flag: %s\n", flag ? "true" : "false");

    return 0;
}
