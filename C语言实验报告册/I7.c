//编写一个函数求两个数的最大公约数和最小公倍数
#include <stdio.h>
#include <stdlib.h>
int max_yue(int a, int b)
{
    int t;
    int n1 = a; // 赋值
    int n2 = b; // 赋制
    //使用辗转相除法来计算
    while (n2)
    {
        t = n1 % n2;
        n1 = n2;
        n2 = t;
    }
    return n1;
}
int min_bei(int a, int b)
{ 

    int t;
    int n1 = a; // 赋值
    int n2 = b; // 赋制
    //使用辗转相除法来计算
    while (n2)
    {
        t = n1 % n2;
        n1 = n2;
        n2 = t;
    }
    return a * b / n1;
}
int main()
{
    int a, b;
    printf("请输入两位数：\n");
    scanf("%d %d", &a, &b); // 用户输入a b
    printf("最大公约数 %d\n", max_yue(a, b));
    printf("最小公倍数是 %d\n",min_bei(a, b));
    system("pause");
    return 0;
}
