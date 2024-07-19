#include <stdio.h>
int main()
{
    // case1
    // int age=22;
    // int *ptr=&age;
    // printf("ptr = %u\n",ptr);
    // ptr++;
    // printf("ptr = %u\n",ptr);
    // ptr--;
    // printf("ptr = %u\n",ptr);

    // case2
    //  float price=100.00;
    //  float *ptr=&price;
    //  printf("ptr = %u\n",ptr);
    //  ptr++;
    //  printf("ptr = %u\n",ptr);
    //  ptr--;
    //  printf("ptr = %u\n",ptr);

    // case3
    char c = '*';
    char *ptr = &c;
    printf("ptr = %u\n", ptr);
    ptr++;
    printf("ptr = %u\n", ptr);
    ptr--;
    printf("ptr = %u\n", ptr);
    return 0;
}