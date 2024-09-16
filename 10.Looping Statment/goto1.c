#include <stdio.h>

int main() {
    int i, j;
    
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            printf("i = %d, j = %d\n", i, j);
            if (i == 3 && j == 3) {
                goto EndLoop;  
            }
        }
    }

EndLoop:
    printf("Exited the nested loops at i = %d, j = %d\n", i, j);
    
    return 0;
}
