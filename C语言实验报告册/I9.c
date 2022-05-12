//编写函数用牛顿迭代法求根
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float result()
{
    double x0, x1 = 0.0;
    double f, f1;
    do
    {
        x0 = x1;
        f = x0 * x0 * x0 * x0 * x0 + 2 * x0 * x0 * x0 - x0 * x0 + x0 + 1;
        f1 = 5 * x0 * x0 * x0 * x0 + 6 * x0 * x0 - 2 * x0 + 1;
        x1 = x0 - f / f1;
    } while (fabs(x0 - x1) >= 1e-5);
    return x1;
}
int main()
{

    printf("方程的根是%f\n", result());
    system("pause");
    return 0;
}
