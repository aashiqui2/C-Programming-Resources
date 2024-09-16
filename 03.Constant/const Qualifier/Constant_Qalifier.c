#include<stdio.h>
int main(){
    // const int var=20;
    // var=30;// assignment of read-only variable
    // printf("%d\n",var);
    
    //? pointer to variable
    // int a=10;
    // int *ptr=&a;
    // *ptr=100;//valid
    // int b=300;
    // ptr=&b;//valid
    // printf("%d \n",*ptr);

    // ? pointer to constant
    // int a=10;
    // int b=20;
    // const int *ptr=&a;
    // int const *ptr=&a;
    // *ptr=40;//invalid
    // ptr=&b;//valid
    // printf("%d \n",*ptr);

    //? constant pointer to varaible
    // int a=10;
    // int b=30;
    // int *const ptr=&a;
    // *ptr=400;//valid
    // ptr=&b;//invalid
    // printf("%d ",*ptr);

    //? constant pointer to constant
    // int a=80;
    // int b=70;
    // const int *const ptr =&a;
    // *ptr=200;//invalid
    // ptr=&b;//invalid
    // printf("%d\n",*ptr);



return 0;
}