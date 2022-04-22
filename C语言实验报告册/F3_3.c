#include<stdio.h>
#define N 4
int main()
{
    int line;//声明行数
    for(line=1;line<=N;line++)//外层循环控制行数
    {
        for(int i=N-line;i>0;i--)//内层一循环控制空格
        {
            printf(" ");
        }
        for(int i=1;i<=2*line-1;i++)
        {
            if(i%2==1)//控制奇数输出*，偶数输出+
            {
                printf("*");
            }
            else
            {
                printf("+");
            }
        }
        printf("\n");
    }
    return 0;

}