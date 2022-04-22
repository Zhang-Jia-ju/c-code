//求1到10的阶乘
#include<stdio.h>
int main()
{
    int i,result=1;
    for(i=1;i<=10;i++){
        result = result*i;
    }
    printf("阶乘的结果是%d",result);
    return 0;
    
}

