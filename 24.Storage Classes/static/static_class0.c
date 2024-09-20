#include <stdio.h>
static int b=20;
int func();
int main()
{
    printf("%d", func());
    printf("\n%d", func());
    printf("\n%d", func());
    printf("\n%d ",b);// we can have static varibale in global declaration part

    //static variables only alive in block scope
    // printf("%d",count);
    return 0;
}
int func()
{
    static int count = 0; // variable initialization
    count++;       // incrementing counter variable
    return count;
}

