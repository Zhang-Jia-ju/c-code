//编写一个程序，求出一个m*n矩阵中的最大值
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100][100], i, j, m, n, max = 0, col = 0, row = 0;
    //请先输入数组的行和列数
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (max < a[i][j])
            {
                max = a[i][j];
                row = i;
                col = j;
            }
        }
    }
    printf("最大值为%d，它在第 %d行第 %d列", max, row, col);
    system("pause");
    return 0;
}