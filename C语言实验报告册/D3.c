//给一个百分制的成绩要求判断所在的等级ABCDE并且输出
//这里的成绩默认只有整数
#include<stdio.h>
int main()
{
    int Score;
    printf("输入成绩值:");
    scanf("%d", &Score);
    if(Score>=90)
    {
    printf("成绩为A");
    }
    else if(Score>=80&&Score<90)
    {
    printf("成绩为B");
    }
    else if(Score>=70&&Score<79)
    {
    printf("成绩为C");
    }
    else if(Score>=60&&Score<69)
    {
    printf("成绩为D");
    }
    else{
    printf("成绩为E");
    }
    return 0;
}
