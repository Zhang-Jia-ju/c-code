//���õݹ��˼��,�������ٵ�������
#include <iostream>
using namespace std;
int add(int x)
{
    if (x > 0) //�ݹ����ֹ����
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