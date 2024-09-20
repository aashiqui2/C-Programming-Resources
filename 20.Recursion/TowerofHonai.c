#include <stdio.h>
void towerOfHonai(int n, char *src, char *helper, char *dest)
{
    if (n == 1)
    {
        printf("transfer disk %d from %s to %s\n", n, src, dest);
        return;
    }
    towerOfHonai(n-1,src,dest,helper);
    printf("transfer disk %d from %s to %s\n", n, src, dest);
    towerOfHonai(n-1,helper,src,dest);
}
int main()
{
    //! Tower of Hanoi
    //! Rules
    /* 1.Only one disk transfered in 1 step
      2. smaller disk are kept at on top of large disks */
    int n = 2;
    towerOfHonai(n, "S", "H", "D");

    return 0;
}

//? Time Complexity
// O(2^n)