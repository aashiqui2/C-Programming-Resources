#include <stdio.h>
int main()
{
    int num, i = 1;
    printf("Enter the number whose table you want to print?");
    scanf("%d", &num);
table:
    printf("%d x %d = %d\n", num, i, num * i);
    i++;
    if (i <= 10)
    {
        goto table;
    }
}

/* 
The goto statement in programming languages like C is a control flow statement that allows transferring control to another part of the program. It causes the program execution to jump to a specified label within the same function or code block.
*/