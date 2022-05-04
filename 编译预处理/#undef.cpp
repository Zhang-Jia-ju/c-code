//用于取消已经定义的#define定义
#include<iostream>
#include<stdlib.h>
#define TEST(x,y) x##y
#undef TEST(x,y)
//用于移除一个宏定义，如果在移除之后并没有从新定义该宏，那么就会报错
using namespace std;
int main()
{
	int zhangsan = 1;
	cout<<"zhangsan has "<<TEST(zhang,san);
	system("pause");
	return 0;
}