#include <stdio.h>
struct student
{
    char name[100];
    int roll;
    float cgpa;
};
void printInfo(struct student*);
int main()
{
    struct student s1 = {"aashiqui", 1664, 7.9};
    struct student *ptr=&s1;
    printInfo(ptr);
    printf("Student roll %d\n", ptr->roll);


    return 0;
}
//call by reference,roll value will be updated at the address 
void printInfo(struct student *ptr)
{
    printf("Student Information :\n");
    printf("Student roll %d\n", ptr->roll);
    printf("Student roll %.1f\n", ptr->cgpa);
    printf("Student roll %s\n", ptr->name);
    ptr->roll=1660;
    printf("Student roll %d\n", ptr->roll);
}