#include<stdio.h>
int main()
{
    int x,y,a[6],i=0,j;
    //数组用来存放这个正整数的每一位
    printf("输入一个不多于5位的正整数");
    scanf("%d",&x);
    if(x/10000!=0)
        y=5;
    else if(x/1000!=0)
        y=4;
    else if(x/100!=0)
        y=3;
    else if(x/10!=0)
        y=2;
    else y=1;
    printf("%d\n",y);
    while(y--)
    {
        a[i]=x%10;           //将最末位依次存到数组里面
        x=x/10;              //去掉最末位
        i++;
    }
    for(j=i-1;j>=0;j--)         //正序输出
        printf("%d ",a[j]);
    printf("\n");
    for(j=0;j<i;j++)           //逆序输出
        printf("%d ",a[j]);
    printf("\n");
    return 0;
}
