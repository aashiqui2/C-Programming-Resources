#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    float cgpa;
    char name[100];
};
int main()
{
    struct student s1;
    s1.roll=6576;
    s1.cgpa=9.2;
    // s1.name="Aashiqui";//we cannot do because you have created a string by using array type.
    strcpy(s1.name,"Aashiqui");
    printf("Student name: %s\n",s1.name);
    printf("Student roll: %d\n",s1.roll);
    printf("Student cgpa: %.1f\n",s1.cgpa);
return 0;
}