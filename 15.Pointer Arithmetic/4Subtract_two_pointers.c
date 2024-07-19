#include <stdio.h>
int main()
{

    int a = 6;
    int b = 4;

    int *ptr1, *ptr2;

    ptr1 = &a;
    ptr2 = &b;

    printf("-----------------Int pointer subtraction -------------\n");
    printf(" ptr1 = %u\n", ptr1);
    printf(" ptr2 = %u\n", ptr2);
    printf("Address of ptr1 = %u\n", &ptr1);
    printf("Address of ptr2 = %u\n", &ptr2);
    printf("Address of a = %u\n", &a);
    printf("Address of b = %u\n", &b);

    a = ptr1 - ptr2;

    printf("Subtraction of ptr1 & ptr2 is %d\n", a);

    printf("-----------------char pointer subtraction -------------\n");
    char c = 'b';
    char d = 'a';

    char *ptr3;
    char *ptr4;

    ptr3 = &c;
    ptr4 = &d;

    printf(" ptr3 = %u\n", ptr3);
    printf(" ptr4 = %u\n", ptr4);
    printf("Address of ptr3 = %u\n", &ptr3);
    printf("Address of ptr4 = %u\n", &ptr4);
    printf("Address of c = %u\n", &c);
    printf("Address of d = %u\n", &d);

    c = ptr3 - ptr4;

    printf("Subtraction of ptr3 & ptr4 is %d\n", c);

    return 0;
}