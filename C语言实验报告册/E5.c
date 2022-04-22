//斐波那契数列
#include<stdio.h>
int main()
{
	long long f1=1,f2=1,f3;//定义数据类型，这
	int row; //row变量控制需要输出的项数
	printf("输入需要输出的项数：");//提示语句 
	scanf("%d",&row);
	printf("%lld\n%lld\n",f1,f2);//先输出第一行和第二行 
	for(int i=1;i<row-1;i++)//循环控制row-2行 
	{
		f3=f1+f2;//第三行的值是前面两行的和 
		printf("%lld\n",f3);
		f1=f2;//变量赋值 
		f2=f3;
	 } 
	return 0;
 } 
