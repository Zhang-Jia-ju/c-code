//设计一个函数利用指针使得两个变量的值互换
#include<iostream>
#include<stdlib.h>
using namespace std;
void swap(int *x,int *y)//实参是地址，那么地址变量对应什么呢——指针
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
//注意实参和形参之间是单项传递，这里确保两个值的互换，实质上是影响了a,b
int main()
{
	int a,b;
	a=3;
	b=4;
	swap(&a,&b);
	cout<<a<<' '<<b<<endl;
    system("pause");
	return 0;
}