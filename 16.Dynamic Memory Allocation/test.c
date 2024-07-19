// // #include <stdio.h>
// // #include <stdlib.h>
// // int main()
// // {

// //     int i, n;
// //     printf("enter the number ");
// //     scanf("%d",&n);
// //     // int *ptr=malloc(n*sizeof(int));
// //     int *ptr=(int*)calloc(n,sizeof(int));
// //     if(ptr=NULL)
// //     {
// //         printf("Memory not available");
// //         exit(1);
// //     }
// //     for(int i=0;i<n;i++)
// //     {
// //         scanf("%d",ptr+i);
// //     }
// //     for(int i=0;i<n;i++)
// //     {
// //         printf("%d",*(ptr+i));
// //     }

// //         return 0;
// // }

// // // malloc is a built in function declared in the header file <stdlib.h>

// // // malloc is a short name for "memory allocation" and is used to dynamically allocated a single large block of contigous memory according to the size specified.

// // // malloc function simply allocates a memory block according to the size specified in the heap and on success it returns a pointer pointing to the first byte of the allocated memory else return NULL.


// // //why  void pointer?
// // // malloc doesn't have an idea of what it is pointing to.
// // // it merely allocates memory requested by the user without knowing the data to be stored inside the memeory.

// // // syntax:
// // // (void*)malloc(size_t size)
// // #include <stdio.h>
// // #include <stdlib.h>

// // int main() {
// //     int n = 5;
// //     int* arr = (int*)malloc(n * sizeof(int));  // Allocates memory for 5 integers

// //     if (arr == NULL) {
// //         printf("Memory allocation failed\n");
// //         return 1;
// //     }

// //     for (int i = 0; i < n; i++) {
// //         arr[i] = i + 1;  // Manually initializing array
// //     }

// //     for (int i = 0; i < n; i++) {
// //         printf("%d ", arr[i]);
// //     }

// //     free(arr);  // Freeing the allocated memory
// //     return 0;
// // }


























// // calloc() function is used to dynmaically allocate multiple block of memory


// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int n;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     // Allocate memory for n integers using calloc
//     int* arr = (int*)calloc(n, sizeof(int));

//     // Check if memory allocation was successful
//     if (arr == NULL) {
//         printf("Memory allocation failed\n");
//         return 1;
//     }

//     // Get input from the user
//     printf("Enter %d integers:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Print the array
//     printf("The entered integers are:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     // Free the allocated memory
//     free(arr);

//     return 0;
// }

// #include<stdio.h>
//    int main()
//    {
//        int *ptr;
//        ptr = (int *)calloc(1,sizeof(int));
//        *ptr = 10;
//        printf("%d\n",*ptr);
//        return 0;
//    }

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int *p = (int *)malloc(sizeof(int));
//     //  p = NULL;
//      free(p);
//     printf("%u",p);
// }


