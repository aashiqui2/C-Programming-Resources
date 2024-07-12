// write a function to count the occurence of Vowels in a string?

#include<stdio.h>
int countVowels(char str[]);
int main()
{
char str[]="HelloWorld";
int count=countVowels(str);
printf("%d",count);
return 0;
}
int countVowels(char str[])
{
    int count=0,i=0;
    while(str[i]!='\0')
    {
        if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u')
        {
            count++;
        }
        i++;
    }
    return count;

}