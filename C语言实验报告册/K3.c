//利用指针实现两个变量值的互换
#include <stdio.h>
#include <stdlib.h>
void swap(int *x, int *y) //创建一个swap函数
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
int main()
{
    int x, y;
    x = y = 0;
    scanf("%d%d", &x, &y);
    printf("x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("交换后\n");
    printf("x = %d, y = %d", x, y);
    system("pause");
    return 0;
}