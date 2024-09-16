#include <stdio.h>
int main()
{
    int m[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", m[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = i+1; j < 3; j++)
        {
            int temp = m[i][j];
            m[i][j] = m[j][i];
            m[j][i] = temp;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", m[i][j]);
        }
    }

    return 0;
}