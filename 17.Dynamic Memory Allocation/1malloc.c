#include <stdio.h>
#include <stdlib.h>
int main()
{
    float *ptr;
    ptr=(float*)malloc(5 *sizeof(float));//return a void so we type caste iusing (int *)
    // memory is allocated on runtime
    ptr[0]=1.02;
    ptr[1]=3.34;
    // ptr[2]=5;
    // ptr[3]=7;
    // ptr[4]=9;
    // ptr[5]=11;
    // for(int i=0;i<=5;i++)
    // {
        printf("%f\n",ptr[0]);
    // }
    return 0;
}