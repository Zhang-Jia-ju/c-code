//��Բ�ܳ���Բ���
#include<stdio.h>
#include<math.h>
#define PI 3.14159
int main()
{
    double r,c,area;
    r = 2.456;
    c = 2*PI*r;
    area = PI*pow(r,2);
    printf("Բ���ܳ�������ֱ���%lf��%lf",c,area);
    return 0;
}