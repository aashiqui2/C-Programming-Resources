// create a structure to store complex numbers(use arrow operator)
#include <stdio.h>
struct complex
{
    int real;
    int img;
};
int main()
{
    struct complex n1 = {5, 18};
    struct complex *ptr = &n1;
    printf("real part = %d\n",ptr->real);
    printf("img part = %d",ptr->img);
    return 0;
}