#include <stdio.h>
int a = 50; // program scope(entire program you can access)
void fun();
int main()
{
    // int a = 10;
    fun();
    {
        int a = 20;
        printf("Inside Block %d\n", a);
        printf("Inside Block %d\n", b);
    }
    {
        printf("%d\n", a++);
    }
    printf("%d\n", a);
    return 0;
}
void fun()
{
    int a = 30,b=89;
    printf("%d\n", a);
}
