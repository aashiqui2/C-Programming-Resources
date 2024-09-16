#include<stdio.h>
#include<string.h>
int main()
{
char oldStr[]="Hello ";
char newStr[100];
strcpy(newStr,oldStr);
puts(newStr);
return 0;
}