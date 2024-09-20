#include <stdio.h>
union student
{
    int a;
    char b;
};
int main()
{
    union student s1;
    s1.a=65;
    printf("the value of a is %d\n",s1.a);
    printf("the value of b is %c\n",s1.b);
    
    return 0;
}

// In union , members will share smae memory location. if we make any chnages in one memebr then it will be refelected to other memebr as well

// size of the union: size of the union is taken according to the size of the largest members of the union 