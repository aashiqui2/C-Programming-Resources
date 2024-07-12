#include <stdio.h>
int main()
{
    int a = 2 + 3 * 4 / 2 * 12; // 2//74
    int b = 10 - 3 + 5 * 2 / 4; // 9
    int c = 8 / 2 + 4 * 2 - 7;  // 5
    int d = (15 / (3 - 2)) * 4 + 10;
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    return 0;
}
// +- =1
// */=2
// ^=3
// ()=4