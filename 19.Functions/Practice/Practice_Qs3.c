#include <stdio.h>
int sum(int[], int, int);
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int result = sum(a, 0, 5);
    printf("%d",result);
    return 0;
}
int sum(int arr[], int start, int len) 
{
    if(start >= len)
        return 0;
        
    return (arr[start] + sum(arr, start + 1, len));
}