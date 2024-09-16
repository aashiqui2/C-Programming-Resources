// make a structure to store the Bank Account information  of a customer of ABC Bank Also,make ana alias for it.
#include <stdio.h>
typedef struct BankAccount
{
    int accno;
    char name[100];

} acc;
int main()
{
    acc acc1={123,"aashiqui"};
    acc acc2={456,"arun"};
    printf("Account no=%d\n",acc1.accno);
    printf("Account name=%s\n",acc1.name);
    return 0;
}