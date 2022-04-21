//输入五个数，求五个数平方后的和
#include<stdio.h>
#include <math.h>
#define N 2
int main()
{
    int i,a[5];
    double result,sum;
    sum = result = 0.0;
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);//输入五个数字存储在数组中
    }
    for(i=0;i<=5;i++)
    {
        result = pow(a[i],N);
        sum = sum + result;
    }
    printf("平方和的结果是：%lf",sum);
    return 0;
}
   


