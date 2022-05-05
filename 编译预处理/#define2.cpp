#include<stdio.h>
#include<stdlib.h>
#define MAX(x,y) x>y?x:y
int main()
{
	int a,b;
	a=b=0;
	scanf("%d%d",&a,&b);//这里输出a和b的值进行比较
	printf("最大值是%d\n",MAX(a,b));
	system("pause");
	return 0;
}