#include<stdio.h>
int* getArray();
#define SIZE 5
int main(){
    int* ptr=getArray();
    for(int i=0;i<SIZE;i++)
    {
    printf("the value of a[%d] is %d\n",i,*(ptr+i));
    }
return 0;
}
int* getArray()
{
    static int a[SIZE];
    //once the function is over the memory will be removed from ram so we are making the array as static to store inside the ram untill the end of the program

    printf("enter the Element \n");
    for (int i = 0; i <SIZE; i++)
    {
        scanf("%d", &a[i]);
    }
    return a;
}