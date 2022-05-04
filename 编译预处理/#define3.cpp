#include<iostream>
#include<stdlib.h>
#define TEST(x,y) x##y
//##可以把位于它两边的符号合成一个符号。它允许宏定义从分离的文本片段创建标识符
using namespace std;
int main()
{
	int zhangsan = 1;
	cout<<"zhangsan has "<<TEST(zhang,san);
	system("pause");
	return 0;
}