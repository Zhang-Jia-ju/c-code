//#define定义宏
#include<iostream>
#include<stdlib.h>
#define space(x) x*x
using namespace std;
int main()
{
    int a =1;
    cout<<space(a+3)<<endl;
    system("pause");
    return 0;
}
//最终的运行结果是7，1+3*1+3，直接替换，不会进行换算