#include<stdio.h>
int main()
{
int marks[3];
printf("enter the Physics marks: ");
scanf("%d",&marks[0]);
printf("enter the Maths marks: ");
scanf("%d",&marks[1]);
printf("enter the Chemistry marks: ");
scanf("%d",&marks[2]);
printf("phy=%d  Math=%d Chem=%d", marks[0],marks[1],marks[2]);
return 0;
}