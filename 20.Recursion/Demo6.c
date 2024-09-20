#include <stdio.h>

int isSorted(int a[],int i,int len)
{
    if(i==len-1)
    {
        return 1;
    }
    if(a[i]>=a[i+1])
    {
        return 0;
    }
    return isSorted(a,i+1,len);
}
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int len=sizeof(a)/sizeof(a[0]);
    if (isSorted(a,0,len))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}