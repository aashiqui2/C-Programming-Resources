#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int rollno;
    int mark;
};
struct student *createStruct(char[],int,int);
int main(){
    struct student *s1;
    s1=createStruct("john",21,89);
    printf("name is %s\n",s1->name);
    printf("rollno is %d\n",s1->rollno);
    printf("mark is %d\n",s1->mark);
    
return 0;
}
struct student *createStruct(char name[],int rollno,int mark)
{
    static struct student s;//we need to declare it as static reason when the method is over the space will be deallocated
    strcpy(s.name,name);
    s.rollno=rollno;
    s.mark=mark;
    struct student *ptr=&s;
    return ptr;
}