#include <stdio.h>
int main()
{

    int a = 6;
    int b = 8;

    int *ptr1, *ptr2;

    ptr1 = &a;
    ptr2 = &b;

    printf("-----------------Int pointer subtraction -------------\n");
    printf(" ptr1 = %u\n", ptr1);
    printf(" ptr2 = %u\n", ptr2);
    printf("Address of a = %u\n", &a);
    printf("Address of b = %u\n", &b);
    printf("Address of ptr1 = %u\n", &ptr1);
    printf("Address of ptr2 = %u\n", &ptr2);

    a = ptr1 - ptr2;

    printf("Subtraction of ptr1 & ptr2 is %d\n", a); // 1 bytes
    printf("%d\n", sizeof(int));

    printf("-----------------char pointer subtraction -------------\n");
    char c = 'b';
    char d = 'a';

    char *ptr3;
    char *ptr4;

    ptr3 = &c;
    ptr4 = &d;

    printf(" ptr3 = %u\n", ptr3);
    printf(" ptr4 = %u\n", ptr4);
    printf("Address of c = %u\n", &c);
    printf("Address of d = %u\n", &d);
    printf("Address of ptr3 = %u\n", &ptr3);
    printf("Address of ptr4 = %u\n", &ptr4);

    c = ptr3 - ptr4;

    printf("Subtraction of ptr3 & ptr4 is %d\n", c); // 1 bytes
    printf("%d\n", sizeof(char));
    printf("-----------------double pointer subtraction -------------\n");
    double e = 2.1233;
    double f = 3.242;

    double *ptr5 = &e;
    double *ptr6 = &f;

    printf(" ptr5 = %u\n", ptr5);
    printf(" ptr6 = %u\n", ptr6);
    printf("Address of e = %u\n", &e);
    printf("Address of f = %u\n", &f);
    printf("Address of ptr5 = %u\n", &ptr5);
    printf("Address of ptr6 = %u\n", &ptr6);
    e = ptr5 - ptr6;
    printf("Subtraction of ptr3 & ptr4 is %lf\n", e);
    printf("%d\n", sizeof(double));
    printf("%d\n", ptr5 - ptr6);

    return 0;
}