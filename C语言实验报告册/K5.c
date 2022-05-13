#include<stdio.h>
#define N 10
int main()
{
    int a[N];
    int i,j,k;
    scanf("输入十个整数：");
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    for(i=0;i<N;i++)
        for(j=i;j<N;j++)
            if(a[i]<a[j])
            {
                k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
    for(i=0;i<N;i++)
        printf("%5d",a[i]);
    return 0;
}
