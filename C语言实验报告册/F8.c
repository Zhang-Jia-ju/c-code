//求100到999之间最大的三个素数
//先补充一个概念——素数（质数）是指在大于1的自然数中，除了1和它本身以外不再有其他因数的自然数。
#include <stdio.h>
int main()
{
    int count = 0,i,j;//count做一个计数器
    for (i=999;i>=100;i--)
    {
        for(j=2;j<i;j++)
        {
            if(i%j == 0)
            break;
        }
        if(i==j)
        {
        printf("%d\n",i);
        count++;
        }
        if(count==3)//当满足三个的时候跳出循环
        break;
    }
    return 0;
}

