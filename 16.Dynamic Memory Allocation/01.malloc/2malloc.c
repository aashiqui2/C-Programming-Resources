#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n;
    scanf("%d",&n);
    int *ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory is not availabe");
        exit(1);
    }
    for ( i = 0; i < n; i++)
    {
       scanf("%d",ptr+i);
    }
    for ( i = 0; i < n; i++)
    {
      printf("%d ",*(ptr+i));
    }
    
    
return 0;
}