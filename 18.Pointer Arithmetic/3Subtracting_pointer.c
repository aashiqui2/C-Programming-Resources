#include<stdio.h>
int main(){
    int a = 20;
    int *ptr1, *ptr2;

    ptr1 = &a;
    ptr2 = &a;

    printf("Pointer ptr2 before Subtraction: ");
    printf("%u \n", ptr2);

    // Addition of 3 to ptr2
    ptr2 = ptr2 - 3;//ptr+sizeof(int)*3
    printf("Pointer ptr2 after Subtraction: ");
    printf("%u \n", ptr2);


    printf("-----ptr1---\n");
    printf("%u\n",ptr1);
    printf("%u\n",&a);
    printf("%u\n",&ptr1);
    printf("%u\n",*ptr1);
    printf("%u\n",a);

    printf("-----ptr2---\n");
    printf("%u\n",ptr2);
    printf("%u\n",&a);
    printf("%u\n",&ptr2);
    printf("%u\n",*ptr2);
    printf("%u\n",a);
return 0;
}