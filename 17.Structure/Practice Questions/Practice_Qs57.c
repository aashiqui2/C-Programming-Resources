// create a structure to store vectors.  then make a fuction to return sum of 2 vectors.
#include <stdio.h>
struct vector
{
    int x;
    int y;
};
void calSum(struct vector v1,struct vector v2,struct vector sum);
int main()
{
    struct vector v1 = {5, 10};
    struct vector v2 = {3, 7};
    struct vector sum = {0};
    calSum(v1,v2,sum);
    return 0;
}
void calSum(struct vector v1,struct vector v2,struct vector sum)
{
    sum.x=v1.x+v2.x;
    sum.y=v1.y+v2.y;
    printf("the sum of x is %d\n",sum.x);
    printf("the sum of y is %d",sum.y);
}