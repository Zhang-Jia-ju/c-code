#include<stdio.h>
#include<stdlib.h>
int main(void)
{	char a[100]={0};		
	int i=0,n=0;
	char x;
	printf("Input data:");
	gets(a);//用户输入字符数组
	getchar();//吃掉回车键
	printf("search x:");
	scanf("%c",&x);
	printf("字符%c出现的位置\n",x);
	for(i=0;i<100;i++)//这个循环用来查找所搜索的字符及记录次数
	{	if(a[i]==x)
		{	n=n+1;
			printf("%d",i);
			printf(" ");
		}

	}
	if(n==0)//用于判断是否存在该字符
		printf("未找到该字符\n");
	else
	{	printf("\n");
		printf("字符%c共出现%d次\n",x,n);
	}
    system("pause");
	return 0;
}