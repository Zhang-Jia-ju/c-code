//输入a,b两个数求他们的积商和余数
#include<stdio.h>
int main()
{
    int a,b;
    a = b =0;
    printf("输入两个数，求他们的积、商和余数");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d\n",a*b);//积
    printf("%d\n",a/b);//商
    printf("%d",a%b);//余数
    return 0;

}