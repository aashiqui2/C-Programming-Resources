#include <stdio.h>
void storeTables(int arr[][10], int n, int m, int number);
int main()
{
    int tables[2][10];
    storeTables(tables, 0, 10, 2);
    storeTables(tables, 1, 10, 3);
    for (int i = 0; i <10; i++)
    {
        printf("%d\t", tables[0][i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", tables[1][i]);
    }

    return 0;
}
void storeTables(int arr[][10], int n, int m, int number)
                 //arr[]->it is treated like pointer
                 //arr[][]->actual array so we need give size inside it
{
    for (int i = 0; i < m; i++) // 0 to 10
    {
        arr[n][i] = number * (i + 1); // 2*(0+1)=2,4,8,10,....
        // arr[0][0] arr[0][1]
    }
}