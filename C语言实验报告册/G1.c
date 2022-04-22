#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int array[100]={0};//定义初始化一个数组
    srand(time(NULL));
    for(int i=0;i<15;i++)
    {
        array[i]=rand()%100+1;//1-100
    }
    for(int i=0;i<15;i++)
    {
        printf("%-5.d",array[i]);
        if((i+1)%5==0)
        printf("\n");
    }
    return 0;
}