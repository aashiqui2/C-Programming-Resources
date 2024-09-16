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

    //     int j = 0;
    //     printf("Enter a positive number: ");
    //     scanf("%d", &j);

    //     if (j < 0)
    //     {
    //         goto error;
    //     }

    //     printf("You entered a positive number: %d\n", j);
    //     return 0;

    // error:
    //     printf("Error: You entered a negative number!\n");
    return 1;
}

/*
The goto statement in programming languages like C is a control flow statement that allows transferring control to another part of the program. It causes the program execution to jump to a specified label within the same function or code block.
*/