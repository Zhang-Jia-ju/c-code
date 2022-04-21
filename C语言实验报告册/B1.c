//多项式ax^3+b^2+c(a =2,b=3,c=4,x=1.414)
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    double x = 1.414,result;
    a =2;
    b=3;
    c=4;
    result = a*pow(x,3) + b*pow(x,2)+c;
    printf("输出的结果是%lf",result);
    return 0;
}