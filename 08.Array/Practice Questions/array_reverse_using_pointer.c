#include <stdio.h>
#include <stdlib.h>
void printArray(int *arr,int num);
void reverseArray(int *arr,int num);

int main()
{
    int num, *arr;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(int i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    reverseArray(arr,num);

    /* Write the logic to reverse the array. */
      
    return 0;
}

void printArray(int *arr,int num)
{
    for(int i = 0; i < num; i++)
    {
        printf("%d ", *(arr + i));
    }

}
void reverseArray(int *arr,int num)
{
    int *start = arr; // Pointer to the beginning of the array
    int *end = arr + num - 1; 
  while (start < end) {

        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
       printArray(arr,num);
  
    
}