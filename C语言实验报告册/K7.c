#include <stdio.h>
#include <stdlib.h>
int main()
{
    char buf[100];
    int count = 0;
    char *p = buf;
    printf("请随意输入一个字符串\n");
    scanf("%s", buf); //输入字符串的值
    for (int i = 0; i < 100; i++)
    {
        if (*p == '\0')
        {
            break;
        }
        else
        {

            count++;
        }
        p++;
    }
    printf("字符串的长度%d\n", count);
    system("pause");
    return 0;
}