#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    struct things{
        int a;
        int b;
    };//创建一个结构体类型
    things stu = {1,3};//声明该结构体类型的一个变量
    things *p1 = &stu;//创建一个该结构体类型下的指针变量且指向stu变量
    cout<<p1->a<<" "<<p1->b<<endl;//通过结构体指针变量和箭头成员运算符
    cout<<stu.a<<" "<<stu.b<<endl;//通过结构体变量和点运算符访问
    system("pause");
    return 0;
}