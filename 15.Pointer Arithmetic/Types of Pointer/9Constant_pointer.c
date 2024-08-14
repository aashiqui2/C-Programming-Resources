#include <stdio.h>
int main()
{
    int x = 5;
    int *const ptr = &x; // Constant pointer
    *ptr = 10;           // Allowed
    // ptr = &x; // Not allowed (Commented out)
    printf("Constant Pointer: %d\n", *ptr);
    return 0;
}
//! constant pointer *const we can change it value but we canot change its address