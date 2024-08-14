#include <stdio.h>
// struct
// {
//     char *name;
//     int age;
//     int salary;
// } emp1, emp2;
struct employee
{
    char *name;
    int age;
    int salary;
};

int manager()
{
    // struct
    // {
    //     char *name;
    //     int age;
    //     int salary;
    // }manager;
    struct employee manager;
    manager.age=27;
    if(manager.age>30)
    {
        manager.salary=65000;
    }
    else{
        manager.salary=55000;
    }
    return manager.salary;
}

int main()
{
     struct employee emp1,emp2;
    printf("Enter the salary of emloyee1: ");
    scanf("%d",&emp1.salary);
    printf("Enter the salary of emloyee2: ");
    scanf("%d",&emp2.salary);
    printf("salary of emloyee1 is: %d\n",emp1.salary);
    printf("salary of emloyee2 is: %d\n",emp2.salary);
    printf("salary of manager is: %d\n",manager());

    return 0;
}