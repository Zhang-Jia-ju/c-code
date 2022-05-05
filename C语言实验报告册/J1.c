#include<stdio.h>
#include<stdlib.h>
#define IS_ODD_1(p)  if ((p)%2 != 0){ printf("%d是奇数\n",p);break;}
int main()
{
	int a,i;
	for(i=1;;i++)
	{
		scanf("%d",&a);
		IS_ODD_1(a) 
	}
	system("pause");
}