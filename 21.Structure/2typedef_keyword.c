// used to create alias(nickname) for datatype
#include<stdio.h>
#include<string.h>
typedef struct ComputerEngineeringnStudent 
{
    int roll;
    float cgpa;
    char name[100];
}coe;
int main()
{
    // use instead of 
    // struct ComputerEngineeringnStudent s1;
    coe s1; 
    s1.roll=1654;
    s1.cgpa=6.7;
    strcpy(s1.name,"Aashiqui");

    printf("student name is %s",s1.name);

return 0;
}