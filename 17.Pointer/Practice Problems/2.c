
/**
 * C program to input and print array elements using pointers
 */

#include <stdio.h>

#define MAX_SIZE 100 

int main()
{
    int arr[MAX_SIZE];
    int N, i;
    int * ptr = arr;    

    printf("Enter size of array: ");
    scanf("%d", &N);

    printf("Enter elements in array:\n");
    for (i = 0; i < N; i++)
    {
        scanf("%d", ptr);

        
        ptr++;   
    }

    
    ptr = arr;

    printf("Array elements: ");
    for (i = 0; i < N; i++)
    {
        // Print value pointed by the pointer
        printf("%d, ", *(ptr+i));

        // // Move pointer to next array element
        // ptr++;
    }

    return 0;
}