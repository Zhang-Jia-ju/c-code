//使用数组求出数列的前20项，不难看出
//不难看出，数组的规则是，前三项的和等于第四项
#include<stdio.h>
int main()
{
    int arr[25]={0,1,1,0,0};//数组稍大一点确保安全性
    for(int i=0;i+3<20;i++)
    {
        arr[i+3]=arr[i+1]+arr[i+2]+arr[i];

    }
    for(int i=0;i<20;i++)
    {
        printf("%d  ",arr[i]);
    }
    return 0;
}