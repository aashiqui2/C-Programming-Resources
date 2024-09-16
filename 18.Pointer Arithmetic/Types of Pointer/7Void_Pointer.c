#include <stdio.h>

int main()
{
    void *ptr = NULL;
    int *p = NULL;
    char *cp = NULL;
    float *fp = NULL;

    printf("Size of void pointer = %zu\n", sizeof(ptr));
    printf("Size of integer pointer = %zu\n", sizeof(p));
    printf("Size of character pointer = %zu\n", sizeof(cp));
    printf("Size of float pointer = %zu\n", sizeof(fp));

    printf("------Pointer holding address----------\n");
    // printf("%p\n", (void *)ptr);
    // printf("%p\n", (void *)p);
    // printf("%p\n", (void *)cp);
    // printf("%p\n", (void *)fp);

    printf("%d\n", ptr);
    printf("%d\n", p);
    printf("%d\n", cp);
    printf("%d\n", fp);
    
    // printf("-------Value of pointers---------\n");
    // Dereferencing NULL pointers will cause a segmentation fault
    // Uncommenting the following lines will result in a crash
    // printf("%d\n", *(char *)ptr);
    // printf("%d\n", *p);
    // printf("%d\n", *cp);
    // printf("%d\n", *fp);

    printf("-------Access value of another pointer using void pointer---------\n");

    int x = 100;
    void *vp = &x;
    printf("%d\n", *(int *)vp);

    return 0;
}

/*
Notes:
- A void pointer can point to any data type.
- Type casting should be done before dereferencing or performing pointer arithmetic.
- The size of a void pointer in C is the same as the size of a pointer to any other data type.
*/

/* void pointer can point any datatype
 type casting should be done beforce(explicitly)
 dereferencing or pointer arithmetic

int i=5;
int *ptr=&i;
void *ptr1=&ptr;
to get value *ip;
but we need to type cast
*(int*)ptr1;

The size of the void pointer in C is the same as the size of the pointer of character type.

*/