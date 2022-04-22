#include<stdio.h>
#define N 4
int main()
{
    char ch = 'A';
    int line;
    for(line=1;line<=N;line++)
    {
        
        for(int i=N-line;i>0;i--)//内层一循环控制空格
        {
            printf(" ");
        }
        for(int i=1;i<=2*line-1;i++)
        {
            printf("%c",ch);
        }
        printf("\n");
        ch++;
    }
    return 0;
}
