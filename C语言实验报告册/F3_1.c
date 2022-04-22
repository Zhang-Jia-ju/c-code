/*打印金字塔
   1
  121
 12321
1234321
*/
#include<stdio.h>
#define N 4//定义金字塔是四层
int main()
{
    int line;//声明行数
    for(line=1;line<=N;line++)//外层循环控制行数
    {
        for(int i=N-line;i>0;i--)//内层一循环控制空格
        {
            printf(" ");
        }
        for(int j = 1;j<=line;j++)
        {
            printf("%d",j);
        }
        for(int k =line-1;k>=1;k--)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}

