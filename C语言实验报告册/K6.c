//编写一个程序，在键盘上输入一串符号，，将其以字符串的形式存入，然后如初字符串
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char buf[100];
    int length;
    scanf("%s", buf);
    //输入一段符号存入到这个数组中
    length = strlen(buf);
    char *p = buf;
    for (int i = 0; i < length; i++)
    {   
        printf("%c", *p);
        p++;//指针变量自增自减进行偏移运算
    }
    system("pause");
    return 0;
}