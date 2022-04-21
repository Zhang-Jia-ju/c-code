//输入圆的半径求面积和周长
#include<stdio.h>
#define pai 3.14159
int main()
{
    double r = 0.0,area,c;
    printf("输入圆的半径r:");
    scanf("%lf", &r);
    c = 2*pai*r;
    area = pai*r*r;
    printf("圆的周长是%lf半径是%lf",c,area);
    return 0;
}