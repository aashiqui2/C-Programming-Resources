#include <stdio.h>
#include <string.h>
// declaring union
union union_example
{
       int integer;
       float decimal;
       char name[20];
};
int main()
{
       //union union_example u = {18, 38, "Hello"};//we cannot do like this
       union union_example u;
       // u.integer=18;
       // u.decimal=38;
       // strcpy(u.name,"hello");
       // printf("\nunion data:\n integer: %d\n""decimal: %.2f\n name: %s\n",u.integer, u.decimal, u.name);

       printf("sizeof union : %d\n", sizeof(u));

       // u.integer = 183;
       // u.decimal = 90;
       // strcpy(u.name, "world");

       // printf("\nunion data:\n integer: %d\n ""decimal: %.2f\n name: %s\n",u.integer, u.decimal, u.name);

       printf("\n union data:");
       u.integer = 240;
       printf("\ninteger: %d", u.integer);

       u.decimal = 120;
       printf("\ndecimal: %f", u.decimal);

       strcpy(u.name, "C programming");
       printf("\nname: %s\n", u.name);

       u.integer = 1218;
       printf("union data:\n integer: %d\n"" decimal: %.2f\n name: %s\n",u.integer, u.decimal, u.name);

       return 0;
}