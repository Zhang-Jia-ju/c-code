#include<stdio.h>
int main()
{
    char c1,c2,c3,c4;
    c1=c2=c3=c4=0;
    scanf("%c%c%c%c",&c1,&c2,&c3,&c4);
    printf("字符的ASCII码显示如下\n");
    printf("'A'=%d\n'B'=%d\n'C'=%d\n'D'=%d",c1,c2,c3,c4);
    return 0;
}
//提一个注意事项吧，字符在用scanf输入的时候中间打的空格或者回车也会被计算在内