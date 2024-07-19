#include <stdio.h>
int arraysum(int[],int);
int main()
{
    int a[5];
    int len=sizeof(a) / sizeof(a[0]);
    printf("enter the Element \n");
    for (int i = 0; i <len ; i++)
    {
        scanf("%d", &a[i]);
    }
    int sum = arraysum(a,len);
    printf("The sum is %d", sum);
    return 0;
}
int arraysum(int a[],int len){
    int sum=0;
    for(int i=0;i<len;i++){
        sum+=a[i];
    }
    return sum;
}