#include <stdio.h>
#include <string.h>
struct student
{
    int roll;
    float cgpa;
    char name[100];
};
int main()
{
    struct student ece[1];
    int size=sizeof(ece)/sizeof(ece[0]);
    printf("enter the values \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d %f %s",&ece[i].roll,&ece[i].cgpa,&ece[i].name);
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d %f %s",ece[i].roll,ece[i].cgpa,ece[i].name);
    }

    return 0;
}