//这个代码写的有点超纲了
#include <stdio.h>
#include <stdlib.h>
#define N 10//假设有十个学生
struct student
{
    char *s;
    int score;
} boy[N] = {
    {"202101", 45},
    {"202102", 65},
    {"202103", 54},
    {"202104", 76},
    {"202105", 67},
    {"202106", 89},
    {"202107", 61},
    {"202108", 75},
    {"202109", 77},
    {"202110", 79}};
void swap(char **a, char **b) //运用2级指针变量交换1级指针
{
    char *i;
    i = *a;
    *a = *b;
    *b = i;
}//定义一个函数来排序
int main()
{
    int i, j, k;
    int t;
    int m;
    for (i = 0; i < N - 1; i++)
    {
        k = i;
        for (j = i + 1; j <= N - 1; j++)
        {
            if (boy[k].score < boy[j].score)
                k = j;
        }
        if (k != i)
        {
            t = boy[i].score;
            boy[i].score = boy[k].score; //交换分数
            boy[k].score = t;
            swap(&boy[i].s, &boy[k].s); //交换学号
        }
    }
    printf("请输入录取人数m(1<=m<=10):");
    scanf("%d", &m);
    printf("\n 录取名单为前%d名:\n", m);
    for (i = 0; i < m; i++)
    {
        printf("%s %d\n", boy[i].s, boy[i].score);
    }
    system("pause");
    return 0;
}
