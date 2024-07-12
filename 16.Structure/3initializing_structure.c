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
    printf("Student name: %s\n",s1.name);
    printf("Student roll: %d\n",s1.roll);
    printf("Student cgpa: %.1f\n",s1.cgpa);
    return 0;
}