#include<stdio.h>
#include<string.h>
typedef struct StudentDetails
{
    int roll;
    int age;
    char name[10];
}std;

int main(){
    // struct StudentDetails st1;
    // std st1;

    std st1={1,2,"rahul"};
    // st1.name="rahul";
    // strcpy(st1.name,"rahul");
    // st1.age=17;
    // st1.roll=21;

    std *ptr=&st1;
    printf("the roll no is%d\n",ptr->roll);
    printf("the name  is%s\n",ptr->name);
    printf("the age is%d\n",ptr->age);


    // printf("the roll no is%d\n",st1.roll);
    // printf("the name  is%s\n",st1.name);
    // printf("the age is%d\n",st1.age);
    
return 0;
}
