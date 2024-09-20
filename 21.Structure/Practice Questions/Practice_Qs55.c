//! write a program to store the data of 3 students
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
    struct student s2;
    struct student s3;
    s1.roll=6576;
    s1.cgpa=9.2;
    // s1.name="Aashiqui";//we cannot do because you have created a string by using array type.
    strcpy(s1.name,"Aashiqui");
    printf("Student name: %s\n",s1.name);
    printf("Student roll: %d\n",s1.roll);
    printf("Student cgpa: %.1f\n",s1.cgpa);
    printf("\n");

    s2.roll=4567;
    s2.cgpa=7.2;
    // s1.name="Aashiqui";//we cannot do because you have created a string by using array type.
    strcpy(s2.name,"Arun");
    printf("Student name: %s\n",s2.name);
    printf("Student roll: %d\n",s2.roll);
    printf("Student cgpa: %.1f\n",s2.cgpa);
    printf("\n");

    s3.roll=6576;
    s3.cgpa=8.2;
    // s1.name="Aashiqui";//we cannot do because you have created a string by using array type.
    strcpy(s3.name,"Harish");
    printf("Student name: %s\n",s3.name);
    printf("Student roll: %d\n",s3.roll);
    printf("Student cgpa: %.1f\n",s3.cgpa);
return 0;
}