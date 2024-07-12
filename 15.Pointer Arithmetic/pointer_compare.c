#include<stdio.h>
int main()
{
int age=22;
int _age=23;
int *ptr=&age;
int *_ptr=&_age;

printf("Address of age is : %u\n",&age);
printf("Address of _age is : %u\n",&_age);
printf("Address of ptr is : %u\n",ptr);
printf("Address of _ptr is : %u\n",_ptr);
printf("Difference is : %u\n",ptr - _ptr);
_ptr=&age;
printf("comparision = %u\n",ptr==_ptr);


// int age=22;
// char _age='a';
// int *ptr=&age;
// char *_ptr=&_age;
// printf("Difference is : %u\n",ptr-_ptr);//differente cannot compare
return 0;
}