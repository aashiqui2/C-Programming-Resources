#include <stdio.h>
#include <string.h>
union student
{
    char name[20];
    int rollno;
    float cgpa;
};
int main()
{
    // union student s1={"barani",21,99};
    // we cannot do like this

    union student s1;

    // we cannot assign all the union member at a time
    // strcpy(s1.name, "arun");
    // s1.rollno = 38;
    // s1.cgpa = 2.3;

    // we cannot access all the member at a time in union
    // printf("the name is %s\n",s1.name);
    // printf("the rollno is %s\n",s1.rollno);
    // printf("the cgpa is %s\n",s1.cgpa);

    // we acn access only one union member at a time
    s1.rollno = 38;
    printf("the rollno is %d\n", s1.rollno);
    strcpy(s1.name,"hello");
    printf("the name is %s\n", s1.name);
    s1.cgpa = 1.2;
    printf("the cgoa is %f\n", s1.cgpa);

    return 0;
}

// In union , members will share smae memory location. if we make any chnages in one memebr then it will be refelected to other memebr as well