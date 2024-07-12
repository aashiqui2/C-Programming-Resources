#include <stdio.h>
int main()
{
    char name[5];
    scanf("%s", name); // when we press enter '\0' will be automatically added
    // printf("%s",name);

    printf("%c", name[7]);
    int len=sizeof(name);
    printf("%d",len);

    // char Fullname[5];
    // scanf("%s", Fullname);
    // printf("%s", Fullname);

    // scanf() cannot input multi-word strings with whitespaces
    return 0;
}