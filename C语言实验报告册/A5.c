//����Բ�İ뾶��������ܳ�
#include<stdio.h>
#define pai 3.14159
int main()
{
    double r = 0.0,area,c;
    printf("����Բ�İ뾶r:");
    scanf("%lf", &r);
    c = 2*pai*r;
    area = pai*r*r;
    printf("Բ���ܳ���%lf�뾶��%lf",c,area);
    return 0;
}