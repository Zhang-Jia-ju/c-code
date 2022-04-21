//从键盘中输入三个数，输出最大的数
#include<stdio.h>
int main()
{
    int a,b,c;
    a=b=c=0;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(c>a){
            printf("最大的数%d",c);
        }
        else{

            printf("最大的数%d",a);
        }

    }
    else
    {
        if(c>b)
        {
            printf("最大的数%d",c);
        }
        else{
        printf("最大的数%d",b);
        }
    }
}