//已知华氏温度求摄氏温度
#include<stdio.h>
int main()
{
    double f,c;
    f=c =0.0;//f代表℉，c代表℃
    printf("输入当前的华氏温度值并按回车确认:");
    scanf("%lf",&f);
    c = 5*(f - 32)/9;
    printf("当前气温是%.2lf℃",c);//保留两位小数
    return 0;
}
