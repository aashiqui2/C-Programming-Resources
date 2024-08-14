#include <stdio.h>
int main()
{
    enum Bool
    {
        False,
        True
    };

    enum Bool var;
    // var = True;
    printf("%d", var);
    return 0;
}
