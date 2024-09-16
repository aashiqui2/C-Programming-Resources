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