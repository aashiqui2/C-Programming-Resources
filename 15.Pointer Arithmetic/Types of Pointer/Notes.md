1) Integer Pointers
2) Array Pointer
3) Structure Pointer
4) Function Pointers
5) Double Pointers
6) NULL Pointer
7) Void Pointer
8) Wild Pointers
9) Constant Pointers
10) Pointer to Constant

# Code
Sure! Here’s a concise example for each of the pointer types you mentioned in C:

### 1) Integer Pointers
```c
#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;
    printf("Integer Pointer: %d\n", *ptr);
    return 0;
}
```

### 2) Array Pointer
```c
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr; // Pointer to the first element of the array
    printf("Array Pointer: %d\n", *ptr);
    return 0;
}
```

### 3) Structure Pointer
```c
#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point p = {10, 20};
    struct Point *ptr = &p;
    printf("Structure Pointer: (%d, %d)\n", ptr->x, ptr->y);
    return 0;
}
```

### 4) Function Pointers
```c
#include <stdio.h>

void greet() {
    printf("Hello, World!\n");
}

int main() {
    void (*funcPtr)() = greet;
    funcPtr(); // Call the function through pointer
    return 0;
}
```

### 5) Double Pointers
```c
#include <stdio.h>

int main() {
    int x = 5;
    int *ptr = &x;
    int **dptr = &ptr; // Pointer to pointer
    printf("Double Pointer: %d\n", **dptr);
    return 0;
}
```

### 6) NULL Pointer
```c
#include <stdio.h>

int main() {
    int *ptr = NULL; // NULL pointer
    if (ptr == NULL) {
        printf("NULL Pointer\n");
    }
    return 0;
}
```

### 7) Void Pointer
```c
#include <stdio.h>

int main() {
    int x = 100;
    void *ptr = &x; // Void pointer
    printf("Void Pointer: %d\n", *(int*)ptr); // Cast to int*
    return 0;
}
```

### 8) Wild Pointers
```c
#include <stdio.h>

int main() {
    int *ptr; // Wild pointer (uninitialized)
    // printf("%d\n", *ptr); // Dangerous! (Commented out)
    return 0;
}
```

### 9) Constant Pointers
```c
#include <stdio.h>

int main() {
    int x = 5;
    int *const ptr = &x; // Constant pointer
    *ptr = 10; // Allowed
    // ptr = &x; // Not allowed (Commented out)
    printf("Constant Pointer: %d\n", *ptr);
    return 0;
}
```

### 10) Pointer to Constant
```c
#include <stdio.h>

int main() {
    int x = 5;
    const int *ptr = &x; // Pointer to constant
    // *ptr = 10; // Not allowed (Commented out)
    printf("Pointer to Constant: %d\n", *ptr);
    return 0;
}
```

Feel free to compile and run these examples in your C environment!
