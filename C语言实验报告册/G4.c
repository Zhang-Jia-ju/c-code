//将一个数组反序放置
#include<stdio.h>
int main()
{ 
    int arr1[5] = {67,89,76,98,66};
    int arr2[5]={0};
    for(int i=0; i<5; i++)
    {
        arr2[i]=arr1[4-i];
        printf("%d ",arr2[i]);
    }
    return 0;
}

