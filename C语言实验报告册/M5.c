#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand((unsigned)time(0));
    int list[100]; //数组空间100

    int i;
    for (i = 0; i < 100; ++i) // 100随机数
    {
        list[i] = rand() % 500 + 1; //生产1-500随机数
    }

    //保存数据
    FILE *pf = fopen("data.db", "wb");

    for (i = 0; i < 100; ++i)
    {
        fputc(list[i], pf);
    }
    fclose(pf);

    //读出数据
    int list_1[100];

    pf = fopen("data.db", "rb");
    for (i = 0; i < 100; ++i)
    {
        list_1[i] = fgetc(pf);
    }

    //显示 测试
    for (i = 0; i < 100; ++i)
    {
        printf("%d\n", list[i]);
    }
}