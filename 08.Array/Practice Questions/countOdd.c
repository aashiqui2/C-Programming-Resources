#include<stdio.h>
int countOdd(int arr[],int n);
int main()
{
int arr[]={1,2,3,4,5};
int count=countOdd(arr,5);
printf("%d\n",count);
printf("%d\n",*(arr+2));
printf("%d\n",*(arr+5));
return 0;
}
int countOdd(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            count++;
        }
    }
    return count;

}