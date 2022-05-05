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
//以下是求三者中的最大值
#include<stdio.h>
#include<stdlib.h>
#define MAX(a,b,c) (a>b?(a>c?a:c):(b>c?b:c))
int main()
{
	int a,b,c;
	a=b=c=0;
	scanf("%d%d%d",&a, &b, &c);//输入abc三者的值
	printf("三者中的最大值是%d\n",MAX(a,b,c) );
	system("pause");
	return 0;	
}