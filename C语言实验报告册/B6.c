#include<stdio.h>
int main()
{
    int a = 2;
    a+=a;
    printf("a的值是:%d\n",a);
    a-=2;
    printf("a的值是:%d\n",a);
    a*=2+3;
    printf("a的值是:%d\n",a);
    a/=a+a;
    printf("a的值是:%d\n",a);
    return 0;
}
