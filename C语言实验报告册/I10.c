//编写函数程序 计算正整数n1-n2的所有素数和
#include <stdio.h>
#include <stdlib.h>
int Prime_number(int n1, int n2)
{
    int t;
    int sum = 0;
    for (; n2 >= n1; n2--)
    {
        for (int i = 2; i < n2; i++) //这里的遍历顺序可以从n1到n2也可以反过来，这里是反过来
        {
            if (n2 % i != 0) //判断其为素数
                t = 1;
            else
            {
                t = 2;
                break;
            }
        }
        if (t == 1)
        {
            sum += n2; //所有素数相加
        }
    }
    return sum;
}
int main()
{
    int n1, n2;
    n1 = n2 = 0;
    printf("请输入一个大于2的整数:");
    scanf("%d", &n1);
    scanf("%d", &n2);
    //以上分别输入n1和n2的值
    printf("%d-%d之间的所有素数和为:%d\n", n1, n2, Prime_number(n1, n2));
    system("pause");
    return 0;
}
