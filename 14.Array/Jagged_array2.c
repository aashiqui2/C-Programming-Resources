#include <stdio.h>

int main() {
    int jaggedArray[3][5] = {
        {1, 2, 3},         
        {4, 5, 6, 7, 8},   
        {9, 10}           
    };


    int sizes[] = {3, 5, 2};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < sizes[i]; j++) {
            printf("%d ", jaggedArray[i][j]);
        }
        printf("\n");
    }

    return 0;
}
