#include<stdio.h>
// register int a=10;//error
int main(){
    // register int i,sum=0;
    // for(i=0;i<10;i++){
    //     sum=sum+i;
    // }
    // printf("%d\n",sum);
  
  //? these is not posible we cannot access the address of the cpu register variables
    /* int *ptr=&i;
    printf("%u",*ptr);
    printf("%u",ptr);*/

    int a=2;
    register int *ptr=&a;
    printf("%d\n",a);
    printf("%d\n",*ptr);
    printf("%d\n",&a);
    printf("%d\n",&*ptr);
    printf("%d\n",ptr);
    // printf("%d\n",&ptr);//?we cannot access the address of register variable using pointer

return 0;
}
/*
* for register default value will be garbage value
* it has only block and function scope and not function scope
* it will be stored in CPU register
* it cannot be in program scope(global scope)
* faster than auto and reduces execution time
* register size is too small(in KB) so we cannot store all the variable in CPU register.
* stote only frequently accesing variable in side register like counter variable.
* if the register is not free it will be as auto so it depends upon the compiler and the availablity of the cpu registers.
* we cannot do pointer
*/