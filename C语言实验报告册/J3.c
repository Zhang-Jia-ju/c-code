//输入两个整数求他们相除的余数
#include<stdio.h>
#include<stdlib.h>
#define QIUYU(x,y) x%y
int main()
{
	int a,b;a=b=0;
	scanf("%d%d",&a,&b);
	printf("余数是%d\n",QIUYU(a,b));
	system("pause");
	return 0;
}