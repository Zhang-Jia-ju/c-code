#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int count_string(char buf[])
{
    int length, count = 0;
    length = strlen(buf);//测量字符串的长度
    printf("字符串是%s\n", buf);
    //下面是输出字符串的长度
    for (int i = 0; i < length; i++)
    {
        if (buf[i] >= '0' && buf[i] <= '9')
        {
            count++;
        }
    }
    return count;
}
int main()
{
    char buf[100];
    scanf("%s", buf);
    printf("字符串中数字字符的个数%d", count_string(buf));
    system("pause");
    return 0;
}