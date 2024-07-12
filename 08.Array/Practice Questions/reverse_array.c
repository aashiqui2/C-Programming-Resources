#include <stdio.h>
int reverse(int arr[], int n);
void printArr(int arr[],int n);
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverse(arr,n);
    printArr(arr,n);
    return 0;
}

//call by reference
int reverse(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int firstElement = arr[i];
        int secondElement = arr[n - i - 1];
        arr[i] = secondElement;
        arr[n - i - 1] = firstElement;
    }
    
}
void printArr(int arr[], int n)
{
  for(int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
}