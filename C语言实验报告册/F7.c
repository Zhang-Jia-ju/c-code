#include<stdio.h>
int main()
{
    double money=1.0;
    int i;
    for(i=1; ;i++)
    {
        money = money*1.1;
        if(money>=4.0)//达到或者超过目标
        break;
    }
    printf("%d",i);
    return 0;
}