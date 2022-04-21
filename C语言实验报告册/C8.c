//若x=1.414,y=1.732,z=2.712,要求输出的时候，每个数据的域宽6位，小数位2位
#include<stdio.h>
int main()
{
    double x= 1.414,y=1.732,z=2.712;
    printf("x:%6.2f\ny:%6.2f\nz:%6.2f",x,y,z);//这里采取右对齐
    return 0;
}