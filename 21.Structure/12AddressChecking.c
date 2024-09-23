#include <stdio.h>
#include <stddef.h>  // For offsetof macro

struct student {
    char b;         // 1 byte
    int a;          // 4 bytes (typically)
    float c;        // 4 bytes (typically)
    double d;       // 8 bytes (typically)
    char e[20];     // 20 bytes
};
//check the multiples of 8 because we moved to 8 bit boundary

int main() {
    struct student s1;

    printf("Address of a %u\n",&s1.a);
    printf("Address of b %u\n",&s1.b);
    printf("Address of c %u\n",&s1.c);
    printf("Address of d %u\n",&s1.d);
    printf("Address of e %u\n",&s1.e);

    // Print the size of each fundamental data type
    printf("Size of char: %zu\n", sizeof(char));
    printf("Size of int: %zu\n", sizeof(int));
    printf("Size of float: %zu\n", sizeof(float));
    printf("Size of double: %zu\n", sizeof(double));
    printf("Size of char array: %zu\n", sizeof(s1.e));

    // Print the total size of the struct
    printf("Size of struct student: %zu\n", sizeof(s1));

    // Print the offset of each member in the struct
    printf("Offset of int a: %zu\n", offsetof(struct student, a));
    printf("Offset of char b: %zu\n", offsetof(struct student, b));
    printf("Offset of float c: %zu\n", offsetof(struct student, c));
    printf("Offset of double d: %zu\n", offsetof(struct student, d));
    printf("Offset of char array e: %zu\n", offsetof(struct student, e));

    return 0;
}
