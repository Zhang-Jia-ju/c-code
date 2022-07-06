//利用递归的思想,函数内再调用自身
#include <iostream>
using namespace std;
int add(int x)
{
    if (x > 0) //递归的中止条件
        return x + add(x - 1);
    else
        return 0;
}
int main()
{
    cout << add(100) << endl;
    system("pause");
    return 0;
}