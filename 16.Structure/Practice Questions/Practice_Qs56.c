#include <stdio.h>
struct address
{
    int house_no;
    int block;
    char city[100];
    char state[100];
};
void printAdd(struct address adds);

int main()
{
    struct address adds[100];
    printf("Enter info of person 1\n");
    printf("Enter the House No :");
    scanf("%d", &adds[0].house_no);
    printf("Enter the Block  :");
    scanf("%d", &adds[0].block);
    printf("Enter the city :");
    scanf("%s", &adds[0].city);
    printf("Enter the state :");
    scanf("%s", &adds[0].state);

    printf("Enter info of person 2 \n");
    printf("Enter the House No :");
    scanf("%d", &adds[1].house_no);
    printf("Enter the Block  :");
    scanf("%d", &adds[1].block);
    printf("Enter the city :");
    scanf("%s", &adds[1].city);
    printf("Enter the state :");
    scanf("%s", &adds[1].state);

    printf("Enter info of person 3 \n");
    printf("Enter the House No :");
    scanf("%d", &adds[2].house_no);
    printf("Enter the Block  :");
    scanf("%d", &adds[2].block);
    printf("Enter the city :");
    scanf("%s", &adds[2].city);
    printf("Enter the state :");
    scanf("%s", &adds[2].state);

    printf("Enter info of person 4 \n");
    printf("Enter the House No :");
    scanf("%d", &adds[3].house_no);
    printf("Enter the Block  :");
    scanf("%d", &adds[3].block);
    printf("Enter the city :");
    scanf("%s", &adds[3].city);
    printf("Enter the state :");
    scanf("%s", &adds[3].state);

    printf("Enter info of person 5 \n");
    printf("Enter the House No :");
    scanf("%d", &adds[4].house_no);
    printf("Enter the Block  :");
    scanf("%d", &adds[4].block);
    printf("Enter the city :");
    scanf("%s", &adds[4].city);
    printf("Enter the state :");
    scanf("%s", &adds[4].state);
    printAdd(adds[0]);
    printAdd(adds[1]);
    printAdd(adds[2]);
    printAdd(adds[3]);
    printAdd(adds[4]);
    return 0;
}
void printAdd(struct address adds)
{
    printf("address is : %d, %d, %s, %s\n",adds.house_no,adds.block,adds.city,adds.state);
}