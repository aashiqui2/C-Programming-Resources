/**
 * C program to copy an array to another array using pointers
 */

#include <stdio.h>
#define MAX_SIZE 100 
void printArray(int arr[], int size);
int main()
{
    int source_arr[MAX_SIZE], dest_arr[MAX_SIZE];
    int size, i;

    int *source_ptr = source_arr;   
    int *dest_ptr   = dest_arr;     
    int *end_ptr;

    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", (source_ptr + i));
    }
    end_ptr = &source_arr[size - 1];

    printf("\nSource array before copying: ");
    printArray(source_arr, size);
    printf("\nDestination array before copying: ");
    printArray(dest_arr, size);
    
    while(source_ptr <= end_ptr)
    {
        *dest_ptr = *source_ptr;
        source_ptr++;
        dest_ptr++;
    }
    printf("\n\nSource array after copying: ");
    printArray(source_arr, size);
    printf("\nDestination array after copying: ");
    printArray(dest_arr, size);

    return 0;
}

void printArray(int *arr, int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("%d, ", *(arr + i));
    }
}