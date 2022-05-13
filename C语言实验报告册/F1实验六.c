//双循环结构计算10的阶乘
#include<stdio.h>
#define N 10//宏定义N为10
int main()
{
    //内循环计算阶乘，外循环计算加法
    int i,result=1,sum=0;//sum是最终的结果值，而result是每一次的阶乘的值
    for(i=1;i<=N;i++)
    {
        

    for(int j=1;j<=i;j++)
    {
        result = result*j;
    }
     sum = sum+result;
    }
    printf("最后的结果是:%d",sum);
    return 0;
}
