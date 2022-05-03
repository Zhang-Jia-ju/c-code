#include <iostream>
#include <stdlib.h>
using namespace std;
void swap(int &x, int &y)//创建m和n分别是a、b的引用类型
//引用操作并未产生实参副本而是直接通过引用变量对实参进行直接操作，节省了内存空间
{
    int t;
    t = x;
    x = y;
    y = t;
}
int main()
{
    int a, b;
    a = 1, b = 2;
    swap(a, b);
    cout<<a<<" "<<b<<endl;
    system("pause");
    return 0;
}