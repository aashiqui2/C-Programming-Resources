#include <stdio.h>
int main()
{
    // int a = 20;
    // int *ptr1 = &a;

    // int b = 20;
    // int *ptr2 = &b;

    // if(*ptr1==*ptr2){
    //     printf("same");
    // }
    // else{
    //     printf("not same");
    // }

    // if(&ptr1==&ptr2){
    //     printf("same");
    // }
    // else{
    //     printf("not same");
    // }

    // if(ptr1==ptr2){
    //     printf("same");
    // }
    // else{
    //     printf("not same");
    // }

    // ------------------------------------------------------

    // int c = 30;
    // int *ptr3 = &c;
    // int *ptr4 = &c;

    // if(ptr3==ptr4){
    //     printf("same");
    // }
    // else{
    //     printf("not same");
    // }

    // ------------------------------------------------------

    // int d = 40;
    // int *ptr5 = &d;
    // int **ptr6 = &ptr5;
    // int **ptr7 = &ptr5;
    // if (**ptr6 == **ptr7)
    // {
    //     printf("same");
    // }
    // else
    // {
    //     printf("not same");
    // }

    // ------------------------------------------------------
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("Address of age is : %u\n", &age);
    printf("Address of _age is : %u\n", &_age);
    printf("Address of ptr is : %u\n", ptr);
    printf("Address of _ptr is : %u\n", _ptr);
    printf("Difference is : %u\n", ptr - _ptr);
    _ptr = &age;
    printf("comparision = %u\n", ptr == _ptr);
    // ------------------------------------------------------
    // int age=22;
    // char _age='a';
    // int *ptr=&age;
    // char *_ptr=&_age;
    // // printf("Difference is : %u\n",ptr-_ptr);//differente cannot compare
    // printf("Difference is : %u\n",*ptr-*_ptr);
    // // ------------------------------------------------------

    // int arr[5];
    // int *ptr8 = arr;

    // int *ptr9 = &arr[0];

    // if (ptr8 == ptr9)
    // {
    //     printf("Pointer to Array Name and First Element are Equal.");
    // }
    // else
    // {
    //     printf("Pointer to Array Name and First Element are not Equal.");
    // }

    return 0;
}