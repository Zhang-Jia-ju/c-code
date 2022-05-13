//利用循环计算从1到100的加法运算
#include<stdio.h>
int main()
{
    int i,sum;
    sum = 0;
    for(i=1;i<=100;i++)
    {
        sum = sum+i;
    }
    printf("最终的累加和的结果是:%d\n",sum);
    return 0;
}