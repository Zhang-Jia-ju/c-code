//输入n个单精度数组，用指针变量实现逆向输出
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[20] = {0}; //声明一个数组
    int n;
    printf("先输入数组中的元素的个数:");
    scanf("%d", &n); //定义数组中的有效长度
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

    }                     //输入数组中的每个值
    int *p = arr + n - 1; //定义一个指针变量
    printf("逆向输出这个数组的元素\n");
    for (int i=0; i < n; i++)
    {
        printf("%d ", *p);
        p = p - 1;
    }
    system("pause");
    return 0;
}
