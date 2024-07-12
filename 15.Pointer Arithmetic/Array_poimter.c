#include <stdio.h>
int main()
{
    // int *ptr=&arr[0]
    // int *ptr=arr
    // Traverse and array
    int aadhar[5];
    // input
    //  int *ptr=&aadhar[0];
    int *ptr = aadhar;
    for (int i = 0; i < 5; i++)
    {
        printf("%d index : ", i);
        scanf("%d", (ptr + i));
        // scanf("%d",&aadhar[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d index = %d\n", i, *(ptr + i));
        //   printf("%d index = %d\n", i, aadhar[i]);
    }

    //  printf("%d index : ", i);
    return 0;
}