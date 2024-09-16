#include <stdio.h>
#include <stddef.h>  // For offsetof macro

union student {
    int a;          // 4 bytes (typically)
    char b;         // 1 byte
    float c;        // 4 bytes (typically)
    double d;       // 8 bytes (typically)
};

int main() {
    union student s1;

    // Print the size of each fundamental data type
    printf("Size of char: %zu\n", sizeof(char));
    printf("Size of int: %zu\n", sizeof(int));
    printf("Size of float: %zu\n", sizeof(float));
    printf("Size of double: %zu\n", sizeof(double));
   

    printf("Address of a %u\n",&s1.a);
    printf("Address of b %u\n",&s1.b);
    printf("Address of c %u\n",&s1.c);
    printf("Address of d %u\n",&s1.d);


    // Print the total size of the struct
    printf("Size of struct student: %zu\n", sizeof(s1));

    

    return 0;
}
