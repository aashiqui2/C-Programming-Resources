// take a string input from the user using %c?

#include<stdio.h>
int main()
{
char str[100];
char ch;
int i=0;

while(ch!='\n')//take input till you press enter
{
    scanf("%c",&ch);//%s can automatically add null character at last
    //%c cannot automatically add null character at last
    str[i]=ch;
    i++;
}
str[i]='\0';//add it manuallly
puts(str);
return 0;
}