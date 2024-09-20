#include <stdio.h>
#include <string.h>
int first=-1,last=-1;
void findOccurence(char *s, char k, int i)
{
    if(i==strlen(s))
    {
        printf("%d %d ",first,last);
        return;
    }
    if (s[i] == k)
    {
        if (first == -1)
        {
            first = i;
        }
        else
        {
            last = i;
        }
    }
    findOccurence(s,k,i+1);
}
int main()
{
    char *s = "abaacdaefaah";
    // int len=strlen(s);
    // char k='a';
    // int first=-1,last=-1;
    // for(int i=0;i<len;i++)
    // {
    //     if(s[i]==k)
    //     {
    //          if(first==-1)
    //          {
    //             first=i;
    //          }
    //          else {
    //             last=i;
    //          }
    //     }
    // }
    // printf("%d %d",first,last);
    findOccurence(s, 'a', 0);
    return 0;
}