#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    double result,sum,a[3];
    sum = result = 0.0;
    printf("请输入三个数:");
    for(i=0;i<3;i++)
    {
    scanf("%lf",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        result =sqrt(a[i]);
        sum = sum + result;
    }
    printf("3个数平方根的和是%lf",sum);
    return 0;
}
  