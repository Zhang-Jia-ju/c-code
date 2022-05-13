// 使用指针实现 输入三个整数，按 从小到大 的顺序输出  
#include<stdio.h>
void swap(int *p1, int *p2)
{
	int p;
	p =*p1; 
	*p1 =*p2;
	*p2 =p;
}

int main()
{	
	int a,b,c;
	int *p1, *p2, *p3;	
	printf("请依次输入三个整数a,b,c:");
	scanf("%d,%d,%d",&a,&b,&c);
	p1 = &a;
	p2 = &b;
	p3 = &c;	
	void swap(int *p1, int *p2);
	if(a>b) swap(p1,p2);
	if(a>c) swap(p1,p3);
	if(b>c) swap(p2,p3);

	printf("从小到大排序有：%d,%d,%d\n",a,b,c);
	return 0;
}




