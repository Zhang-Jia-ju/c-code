#include<stdio.h>
int main()
{
    int a = 2;
    a+=a;
    printf("a��ֵ��:%d\n",a);
    a-=2;
    printf("a��ֵ��:%d\n",a);
    a*=2+3;
    printf("a��ֵ��:%d\n",a);
    a/=a+a;
    printf("a��ֵ��:%d\n",a);
    return 0;
}
