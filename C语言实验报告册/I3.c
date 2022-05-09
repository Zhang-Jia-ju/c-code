#include<stdio.h>
#include<stdlib.h>
int f(int x)
{
    int a,b = 0;  //定义两个变量，并给b赋值为0；
    a = x;        //将x的值赋值给a;
    while (x != 0)
    {
        b = b * 10 + x % 10;  //求x的个位数，并在上一次循环的个位乘10加上本次x的个位数；
        x = x / 10;    
    }
    if (b == a)
        return 1;
    else
        return 0;
}
int main()
{
    int x; //定义一个变量x；
    printf("请输入x的值判断是否为回文数：\n");
    scanf_s("%d", &x);  //输入变量x的值；
    if (f(x))
        printf("%d是回文数。\n",x);
    else
        printf("%d不是回文数。\n",x);
    system("pause");
    return 0;
}
