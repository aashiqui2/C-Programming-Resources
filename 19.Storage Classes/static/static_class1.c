#include<stdio.h>
int main(){
    static char ch;// default value -'\0'
    static char str[20];//default value -'\0'
    static float x;//default value -0.000000
    static float y;//default value -0.000000
    if(ch=='\0')
    {
        printf("hi ");
    }
    if(str[0]=='\0')
    {
        printf("hi ");
    }
    if(x==0)
    {
        printf("hi ");
    }
    if(y==0.0)
    {
        printf("hi ");
    }
return 0;
}
/*
it is stored in ram
scope is within the block scope
lifetime is till the end of the program
*/