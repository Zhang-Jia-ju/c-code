#include<stdio.h>
int main()
{
    int a,b,c;
    double x,y,z;
    a=b=c=0;
    x=y=z=0.0;
    printf("请输入abc以及xyz的值:");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%lf",&x);
    scanf("%lf",&y);
    scanf("%lf",&z);
    printf("a=%-7.db=%-7.dc=%-7.d\n",a,b,c);
    printf("x=%-7.3lfy=%-7.3lfz=%-7.3lf",x,y,z);
    return 0;
}
/*
a =3;b=4;c=5;
x = 1.414;y=1.732;z=2.712;
*/