#include <stdio.h>
#include <stdlib.h>
int fib(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return f(n - 1) + fib(n - 2); //要求第n项,就是求n-1项和n-2项的和
    }
}
int main()
{
    int i, n;
    printf("请输入要打印的Fibonacci数列的项数\n");
    scanf("%d", &n); // n为打印的项数
    printf("Fibonacci是:");
    for (i = 1; i <= n; i++)
    {
        printf("%d ", fib(i));
    }
    return 0;
}