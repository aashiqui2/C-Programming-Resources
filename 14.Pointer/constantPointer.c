#include<stdio.h>
#include<string.h>
int main(){
    // int i=3;//100
    // int *j;//101
    // int **k;//102
    // j=&i;//100
    // k=&j;//101
    // k++;//
    // printf("%d",**k); 

    int i=3;
    int *j=&i;
    double **k;
    k++;
    k++;
    k++;
    printf("%d",k);//return the size of the double datatype
    int i=3;
    int *j;
    j=&i;
    j++;
    printf("%d",*j);

    // char *ptr="hello";
    // char a[22];
    // strcpy(a,"world");
    // printf("\n%s %s",ptr, a);

    // char *ptr="hello";
    // char a[22];
    // *ptr="world";//we can only assign only char not
    // printf("%c\n",*ptr);//h
    // printf("%s\n",ptr);//hello
    // printf("\n%s %s",ptr, a);
  
return 0;
}