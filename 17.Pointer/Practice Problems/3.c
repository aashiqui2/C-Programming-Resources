/**
 * C program to reverse an array using pointers
 */

#include <stdio.h>

#define MAX_SIZE 100

/* Function declaration */
void printArr(int *arr, int size);


int main()
{
    int arr[MAX_SIZE];
    int size;
    int *left = arr;  // Pointer to arr[0]
    int *right;


    // Input size of array
    printf("Enter size of array: ");
    scanf("%d", &size);

    right = &arr[size - 1];  // Pointer to arr[size - 1]

    /*
     * Input elements in array
     */
    printf("Enter elements in array: ");
    while(left <= right)
    {
        scanf("%d", left++);
    }


    printf("\nArray before reverse: ");
    printArr(arr, size);


    // Make sure that left points to arr[0]
    left = arr;


    // Loop to reverse array
    while(left < right) 
    {
        /*
         * Swap element from left of array to right of array.
         */
        *left    ^= *right;
        *right   ^= *left;
        *left    ^= *right;

       
        left++;
        right--;
    }


    printf("\nArray after reverse: ");
    printArr(arr, size);


    return 0;
}



/**
 * Function to print array using pointer.
 *
 * @arr     Pointer to array.
 * @size    Size of the array.
 */
void printArr(int * arr, int size)
{
    // Pointer to arr[size - 1]
    int * arrEnd = (arr + size - 1);

    /* Loop till last array element */
    while(arr <= arrEnd)
    {
        printf("%d, ", *arr);

        // Move pointer to next array element.
        arr++;
    }
}