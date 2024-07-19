#include <stdio.h>
#include <string.h>

struct struct_example
{
    int integer;
    float decimal;
    char name[20];
};

void main()
{

    struct struct_example s = {18, 38, "welcome"};

    printf("structure data:\n integer: %d\n"
           "decimal: %.2f\n name: %s\n",
           s.integer, s.decimal, s.name);

    printf("\nsizeof structure : %d\n", sizeof(s));

    printf("\n Accessing all members at a time:");
    s.integer = 183;
    s.decimal = 90;
    strcpy(s.name, "Hello");

    printf("structure data:\n integer: %d\n "
           "decimal: %.2f\n name: %s\n",
           s.integer, s.decimal, s.name);

    printf("\n Accessing one member at time:");

    printf("\nstructure data:");
    s.integer = 240;
    printf("\ninteger: %d", s.integer);

    s.decimal = 120;
    printf("\ndecimal: %f", s.decimal);

    strcpy(s.name, "C programming");
    printf("\nname: %s\n", s.name);

    // difference four
    printf("\nAltering a member value:\n");
    s.integer = 1218;
    printf("structure data:\n integer: %d\n "
           " decimal: %.2f\n name: %s\n",
           s.integer, s.decimal, s.name);
}
