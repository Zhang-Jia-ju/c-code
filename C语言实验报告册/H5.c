#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[3][3] = {};
    int i, j; // i和j分别代表行数和列数
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
            {
                arr[i][j] = 1;
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
