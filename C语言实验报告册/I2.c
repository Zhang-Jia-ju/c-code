#include<stdio.h>
#include<stdlib.h>
# define N 10
//首先编写一个阶乘的函数
int A(int  i)//i即计算到从1到i的阶乘
{
    int result = 1;
    for(int j = 1;j<=i;j++)
    {
        result = result*j;

    }
    return result;

}
int main()
{
    int sum= 0;
    for(int i=1;i<=N;i++)
    {
        sum +=A(i);
    }
    printf("result is %d\n",sum);
    system("pause");
    return 0;
}