#include <stdio.h>
struct Point
{
    int x, y, z;
};

int main()
{
    struct Point p1 = {.y = 0, .z = 1, .x = 2};
    printf("%d %d %d",p1.x,p1.y,p1.z);
    return 0;
}