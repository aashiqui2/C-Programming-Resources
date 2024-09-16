#include <stdio.h>
int main()
{
    enum Point
    {
        x = 0,
        y = 0,
        z = 0
    };
    printf("%d %d %d\n", x, y, z);

    return 0;
}