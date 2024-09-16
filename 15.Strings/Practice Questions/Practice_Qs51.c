// find the salted form of a password entered by the user if the salt is  "123" & added at the end.
#include <stdio.h>
#include<string.h>
void salting(char password[]);
int main()
{
    char password[100];
    scanf("%s", password);
    salting(password);
    return 0;
}
void salting(char password[])
{
    char salt[] = "123";
    char newPass[200];
    strcpy(newPass, password);
    strcat(newPass,salt);
    puts(newPass);
}