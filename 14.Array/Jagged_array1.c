#include <stdio.h>

int main() {
    int row1[] = {1, 2, 3};            
    int row2[] = {4, 5, 6, 7, 8};     
    int row3[] = {9, 10};            

    int* jaggedArray[] = {row1, row2, row3};

    // Sizes of each row
    int sizes[] = {3, 5, 2};

    // Print the jagged array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < sizes[i]; j++) {
            printf("%d ", jaggedArray[i][j]);
        }
        printf("\n");
    }

    return 0;
}
