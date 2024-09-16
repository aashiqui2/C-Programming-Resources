#include <stdio.h>
struct Employee
{
    char name[20];
    int empId;
    int salary;
} emp;
int main()
{
    struct emp;
    printf("enter the values \n");
    scanf("%s %d %d", &emp.name, &emp.empId, &emp.salary);
    printf(" the name %s\n",emp.name);
    printf(" the empid %d\n",emp.empId);
    printf(" the salary %d\n",emp.salary);

    return 0;
}