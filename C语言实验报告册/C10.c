#include<stdio.h>
int main()
{
    
    char a, b, c;  //定义字符变量a,b,c
    printf("请输入对应的字符:\n");
	a = getchar();//从键盘输入一个字符，并将这个字符赋值给变量a
	b = getchar();//同上
	c = getchar();//同上
    putchar(a+32);//ascii码中小写字母比大写字母大32
    putchar(b+32);
    putchar(c+32);
    return 0;

}
