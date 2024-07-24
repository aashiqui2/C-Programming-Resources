#include <stdio.h>

int main() {
    int arr[10];  // Memory for 10 integers is allocated at compile time

    for (int i = 0; i < 10; ++i) {
        arr[i] = i + 1;
    }

    for (int i = 0; i < 10; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int *arr;
//     int n;

//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     // Allocate memory for n integers at runtime
//     arr = (int*)malloc(n * sizeof(int));

//     if (arr == NULL) {
//         printf("Memory allocation failed\n");
//         return 1;
//     }

//     for (int i = 0; i < n; ++i) {
//         arr[i] = i + 1;
//     }

//     for (int i = 0; i < n; ++i) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     // Free the allocated memory
//     free(arr);

//     return 0;
// }
