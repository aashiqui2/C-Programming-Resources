#include <stdio.h>
// auto int x=30;//global scope or program scope
int main()
{
    // int x;
    // printf("%d\n",x);//garbage value
    auto int x = 10;
    {
        auto int x;
        printf("%d\n", x);//garbage value
    }
    printf("%d\n",x);
    return 0;
}


/*
for auto default value will be garbage value
scope can be block,function are allowed, program scope is not allowded.
it will be stored in stack
*/