//������������������ƽ����ĺ�
#include<stdio.h>
#include <math.h>
#define N 2
int main()
{
    int i,a[5];
    double result,sum;
    sum = result = 0.0;
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);//����������ִ洢��������
    }
    for(i=0;i<=5;i++)
    {
        result = pow(a[i],N);
        sum = sum + result;
    }
    printf("ƽ���͵Ľ���ǣ�%lf",sum);
    return 0;
}
   


