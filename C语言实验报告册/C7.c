//将20 64 127转换成八进制十六进制输出
#include<stdio.h>
int main()
{
    int a,b,c;
    a = 20;b=64;c=127;
    printf("八进制输出%o,%o,%o\n",a,b,c);
    printf("十六进制输出%x,%x,%x\n",a,b,c);
    return 0;
}