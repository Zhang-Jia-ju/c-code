//求s=1+(1+2)+(1+2+3)+.......并输出结果
#include<stdio.h>
#define N 3//控制输出几项
int main()
{
    int result,sum;
    sum=result=0;
    for (int i=1; i<=N; i++) {
        result+=i;
        sum+=result; 
    }
    printf("结果是:%d\n",sum);
    return 0;
}