//求三角形的s和area
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define S(a,b,c) (a+b+c)/2.0
#define AREA(S,a,b,c) sqrt(S*(S-a)*(S-b)*(S-c))
int main()
{
    double a,b,c;
    a=b=c=0.0;
    scanf("%lf%lf%lf",&a,&b,&c);
    printf("s是%lf\n",S(a,b,c));
    printf("areas是%lf", AREA(S(a,b,c) ,a,b,c));
    system("pause");
    return 0;
}
