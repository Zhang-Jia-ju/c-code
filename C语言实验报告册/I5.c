#include<stdio.h>
#include<math.h>
float f(float x)
{
    return  sin(2*x)+x;
}
int  main()
{
    float a,b,len,F=0;//
    int n,i;
    printf("请输入a,b: ");
    scanf("%f%f",&a,&b);
    printf("请输入n的值: ");
    scanf("%d",&n);
    len=(a+b)/n;
    for(i=0;i<n;i++)
    {
        F+=len*f(a);
        a+=len;
    }
    printf("%.3f\n",F);
    return 0;
}