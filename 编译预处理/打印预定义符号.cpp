#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    printf("%s\n", __FILE__);//打印文件所在的位置
    printf("%d\n", __LINE__);//打印出这行代码在所处的程序中的行数
    printf("%s\n", __DATE__);//打印出当前的日期
    printf("%s\n", __TIME__);//打印出运行的事件
    printf("%s\n", __FUNCTION__);//打印出该行代码所处函数的函数名
    system("pause");
    return 0;
}
