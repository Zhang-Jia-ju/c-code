//计算1/3的小数值，保留6位小数且带%
#include<stdio.h>
int main()
{
    double a=1.0/3;//1写成1.0确保两边类型相同
    printf("%.6f",a);
    printf("%%");//%号前面加上一个%可以输出%
    return 0;
}
