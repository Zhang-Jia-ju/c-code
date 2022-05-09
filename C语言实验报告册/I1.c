#include <stdio.h>
#include <stdlib.h>
int A(int i)
{
    int result = 1;
    for (int j = 1; j <= i; j++)
    {
        result = result * j;
    }
    return result;
}
int main()
{
    int m, n;
    m = n = 0;
    // printf("请输入m和n的值并用回车确定");
    scanf("%d%d", &m, &n);
    printf("最终的输出结果是%d", A(n) / (A(m) * A(n - m)));
    system("pause");
    return 0;
}
