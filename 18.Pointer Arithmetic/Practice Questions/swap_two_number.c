#include<stdio.h>
void swap(int*,int*);
int main(){
    int a=5;
    int b=4;
    printf("Before swapping a=%d b=%d\n",a,b);
    swap(&a,&b);
    printf("After Swapping a=%d b=%d",a,b);
return 0;
}
void swap(int *p1,int *p2)
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;

}