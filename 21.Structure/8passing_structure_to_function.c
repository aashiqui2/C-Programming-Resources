#include <stdio.h>
#include <string.h>
// void printInfo(struct student s1); //error
struct student
{
    char name[100];
    int roll;
    float cgpa;
};
void printInfo(struct student);
int main()
{
    struct student s1 = {"aashiqui", 1664, 7.9};
    printInfo(s1);
    printf("Student roll %d\n", s1.roll);

    return 0;
}
// when passing structure a copy is passed not the original structure is passed, so two structure created
//call by value,
void printInfo(struct student s1)
{
    printf("Student Information :\n");
    printf("Student roll %d\n", s1.roll);
    printf("Student roll %.1f\n", s1.cgpa);
    printf("Student roll %s\n", s1.name);
    s1.roll=1660;
    printf("Student roll %d\n", s1.roll);
}