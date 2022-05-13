//将fp1所指向的文件的内容复制到fp2所指向的文件里面
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp1,*fp2 ;
    char c;
    if ((fp1=fopen("I:\\cstudy\\project1\\1.txt", "r"))==NULL)//字符串中两个\\相当于一个\
    {
        printf("connot open\n");
        exit(0);//当文件打开失败时，立即退出。原因：后面的代码对文件进行操作会出现错误。
    }
    if ((fp2=fopen("I:\\cstudy\\project1\\2.txt", "w"))==NULL)
    {
        printf("connot open\n");
        exit(0);
    }

    while ((c = fgetc(fp1)) != EOF)//当读取的字符不是文件的结束符
    {
        fputc(c,fp2);
    }
    fclose(fp1);
    fclose(fp2);
    system("pause");
    return 0;
}
