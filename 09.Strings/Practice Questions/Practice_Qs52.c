//  write a function named slice ,which takes a string  & return a sliced string from index n to m.
#include <stdio.h>
void slice(char str[], int n, int m);
int main()
{
    char str[100];
    int n, m;
    scanf("%s", str);
    scanf("%d", &n);
    scanf("%d", &m);
    slice(str, n, m);
    return 0;
}
void slice(char str[], int n, int m)
{
    // char newStr[200];
    char newStr[m-n-1];//to calculate size
    int j=0;
    for(int i=n;i<=m; i++,j++)
    {
        newStr[j]=str[i];
    }
    newStr[j]='\0';
    puts(newStr);
}