#include<iostream>
using namespace std;
struct influence
{
	int a;
	double b;
}bought = { 2,2.0 };//以上是定义了一个结构体influence并且定义了一个结构体变量bought
struct influence* stu = &bought;
//这里是定义了一个结构体指针和c++中长跪指针的定义方式类似不过是加了一个struct
int main()
{
	
	cout << (*stu).a<<endl;
	cout << bought.a << endl;
	cout << stu->a << endl;
	//以上这三种输出的结构相同，因此三者是等价的，不难理解
}
/*
 多说两句，结构体和结构体变量是两个不同的概念，结构体是一种数据类型，是一种创建变量的模板
 编译器不会为其分配内存空间，其实就相当于int、double这些声明，而结构体变量才是包含实实在在的数据，
 需要内存空间。*/