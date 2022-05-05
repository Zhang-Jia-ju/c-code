//设置一个宏用来判断是否是闰年
//是4的倍数且不是100倍数，是100倍数且不是4的倍数
#include<stdio.h>
#include<stdlib.h>
#define YEAR(year) if((year%4==0&&year%100!=0)||(year%400==0)) printf("%d年是闰年",year);else printf("%d年是平年",year);
int main()
{
    int year = 0;
    scanf("%d",&year);//输入年份
    YEAR(year);
    system("pause");
    return 0;
}