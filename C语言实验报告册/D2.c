//输入一个x值输出y值
#include<stdio.h>
int main()
{
    float x=0.0;
    printf("输入自变量x的值:");
    scanf("%f",&x);
    if(x<1.0)
    {
    printf("函数值是%f",x);
    }
    else if(x>=1.0&&x<10.0)
    {
    printf("函数值是%f",2*x-1);
    }
    else
    {
    printf("函数值是%f",3*x-11);
    }
    return 0;
}


