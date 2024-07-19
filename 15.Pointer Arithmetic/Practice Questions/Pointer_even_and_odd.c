// Pointer Comparision in Array
#include <stdio.h>
 
int main()
{
    int n = 10; // length of an array
 
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int* ptr; // Declaration of pointer variable
 
    ptr = arr; // Pointer points the first (0th index)
               // element in an array
    int count_even = 0;
    int count_odd = 0;
 
    for (int i = 0; i < n; i++) {
 
        if (*ptr % 2 == 0) {
            count_even++;
        }
        if (*ptr % 2 != 0) {
            count_odd++;
        }
        ptr++; // Pointing to the next element in an array
    }
 printf("No of even elements in an array is : %d",
           count_even);
    printf("\nNo of odd elements in an array is : %d",
           count_odd);
}