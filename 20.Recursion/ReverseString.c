#include <stdio.h>
#include <string.h>
void printReverse(char *s,int index)
{
    if(index==0)
    {
        printf("%c",s[index]);
        return;
    }
    printf("%c ",s[index]);
    printReverse(s,index-1);
}
int main()
{
    // char *s="ABCD";//!read-only
    // puts(s);

    char s[] = "ABCD";
    int len=strlen(s);
    // strrev(s);
    // puts(s);

    // for(int i=0;i<len/2;i++)
    // {
    //     char temp=s[i];
    //     s[i]=s[len-i-1];
    //     s[len-i-1]=temp;
    // }
    // puts(s);
    printReverse(s,len-1);
    

    return 0;
}