#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5};
   for(int i=0;i<5;i++)
   {
    printf("%d\n",&a[i]);
   }
   printf("%d",*(&a+1)-a);

   //*(&Arr + 1) - Arr;
return 0;
}

/*
a[0]=1000
a[1]=1004
a[2]=1008
a[3]=1012
a[4]=1016

1000 + 1=!= 1004
instead
*(1020)-(1000)
20/4=5
*/
