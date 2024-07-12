#include <stdio.h>
// void printNumber(int arr[],int n);
void printNumber(int *arr, int n);
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    // int *ptr=arr;
    printNumber(arr, 5);
    return 0;
}
void printNumber(int *arr, int n)
// void printNumber(int arr[],int n);
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", *(arr + i));
        // printf("%d \t",arr[i]);
    }
}
