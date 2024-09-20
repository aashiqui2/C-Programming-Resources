//! write a program that takes input form user's name and print its length.
#include<stdio.h>
int countLength(char arr[]);
int main()
{
char name[100];
fgets(name,100,stdin);
printf("The length is %d",countLength(name));
return 0;
}
int countLength(char arr[])
{
    int count=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        count++;
    }
    return count-1;
}
