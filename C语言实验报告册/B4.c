//求圆周长、圆面积
#include<stdio.h>
#include<math.h>
#define PI 3.14159
int main()
{
    double r,c,area;
    r = 2.456;
    c = 2*PI*r;
    area = PI*pow(r,2);
    printf("圆的周长和面积分别是%lf和%lf",c,area);
    return 0;
}