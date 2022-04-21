//求解一元二次方程
#include<stdio.h>
#include <math.h>
int main()
{
    //写个简单吧，abc都是整数
    int a,b,c;
    double x1,x2;
    a=b=c=0;
    printf("输入系数abc的值:");
    scanf("%d%d%d",&a,&b,&c);
    if(a==0)
    {
    printf("不是一个二次方程\n");
    x1 = -(double)(b)/c;
    printf("方程的根是%lf",x1);
    }
    else if(b*b-4*a*c==0)
    {
    printf("方程有两个相等的实根\n");
    x1 = x2=-(double)(b)/(2*a);
    printf("方程的根是x1=x2=%lf",x1);
    }
    else if(b*b-4*a*c>0)
    {
    printf("方程有两个不等的实根\n");
    x1 =-(double)(b+sqrt((double)(b*b-4*a*c)))/(2*a);
    x2 =-(double)(b-sqrt((double)(b*b-4*a*c)))/(2*a);
    printf("方程的根是x1=%lf和x2=%lf",x1,x2);
    }
    else
    {
    printf("方程有两个共轭复根\n");
    printf("方程的根是x1=%.2lf+%.2lfi",-(double)(b)/(2*a),sqrt((double)(4*a*c-b*b))/(2*a));
    printf("和x2=%.2lf-%.2lfi",-(double)(b)/(2*a),sqrt((double)(4*a*c-b*b))/(2*a));
    }

}
