#include <stdio.h>
#include <string.h>
struct student
{
    char name[100];
    int roll;
    float cgpa;
};
int main()
{
    struct student s1 = {"aashiqui", 1664, 7.9};
    struct student *ptr = &s1;
    printf("Student roll %d\n", (*ptr).roll);
    // use this instead of this
    printf("Student roll %d\n", ptr->roll);
    printf("Student name %s\n", ptr->name);
    printf("Student cgpa %.1f\n", ptr->cgpa);
    return 0;
}