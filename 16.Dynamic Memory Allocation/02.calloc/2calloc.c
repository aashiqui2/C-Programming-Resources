#include <stdio.h>
#include <stdlib.h>
int main()
{
    float *ptr;
    ptr=(float *) calloc(5,sizeof(float));
    // ptr=(float *) malloc(5*sizeof(float));//it is not guarented that alwyas returnD 0.0
    for(int i=0;i<5;i++)
    {
        printf("%f\n",ptr[i]);
    }

    return 0;
}