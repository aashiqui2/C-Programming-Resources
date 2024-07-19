#include <stdio.h>

int main() {
    int jagged[][4] = {
        {1, 2, 3, 0}, 
        {4, 5, 0, 0},  
        {6, 7, 8, 9}  
    };
    printf("Elements in jagged array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < sizeof(jagged[i]) / sizeof(jagged[i][0]); j++) {
            printf("%d ", jagged[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
