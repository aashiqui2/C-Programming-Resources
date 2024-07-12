#include <stdio.h>

int main()
{
 
    int a=70;
    int *ptr=&a;
    int **ptr1=&ptr;
    int *ptr2=NULL;

    printf("The value of a is %d\n",a);
    printf("The value of a is %d\n",&a);
    printf("The value of a is %d\n",ptr);
    printf("The value of a is %d\n",&ptr);
    printf("The value of a is %d\n",&ptr+1);
    printf("The value of a is %d\n",ptr+1);
    printf("The value of a is %d\n",*ptr+1);
    printf("The value of a is %d\n",*ptr);
    printf("The value of a is %d\n",a);
    printf("The value of a is %d\n",&**ptr1);
    printf("The value of a is %d\n",**ptr1);
    printf("The value of a is %d\n",ptr1);
    
    return 0;
}

