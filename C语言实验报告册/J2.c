#include<stdio.h>
#include<stdlib.h>
#define MAX(x,y) x>y?x:y
int main()
{
	int a,b;
	a=b=0;
	scanf("%d%d",&a,&b);//�������a��b��ֵ���бȽ�
	printf("���ֵ��%d\n",MAX(a,b));
	system("pause");
	return 0;
}
//�������������е����ֵ
#include<stdio.h>
#include<stdlib.h>
#define MAX(a,b,c) (a>b?(a>c?a:c):(b>c?b:c))
int main()
{
	int a,b,c;
	a=b=c=0;
	scanf("%d%d%d",&a, &b, &c);//����abc���ߵ�ֵ
	printf("�����е����ֵ��%d\n",MAX(a,b,c) );
	system("pause");
	return 0;	
}