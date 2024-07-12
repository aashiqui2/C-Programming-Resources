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
    struct student ece[100];
    ece[0].roll = 1614;
    ece[1].cgpa = 7.9;
    strcpy(ece[2].name, "Ashiq");
    strcpy(ece[3].name,"kumar");
    printf("Student roll: %d\n", ece[0].roll);
    printf("Student cgpa: %.1f\n", ece[1].cgpa);
    printf("Student name: %s\n", ece[2].name);
    printf("Student name: %s\n", ece[3].name);

    return 0;
}   