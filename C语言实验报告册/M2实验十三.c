#include <stdio.h>
#include <stdlib.h>

typedef struct student {
    int ID; // 学号
    int math; // 数学成绩
    int English; // 英语成绩
    int C; // 计算机成绩
    double avargrade; // 平均分
    char name[20]; // 姓名
} Stu;//建立一个结构体

int main()
{
    FILE*fp;
    Stu stu[5];
    double avargrade = 0;
    printf("请输入5个同学的信息:学生号,姓名,3门成绩:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d %s %d %d %d", &(stu[i].ID), stu[i].name, &(stu[i].math), &(stu[i].English), &(stu[i].C));
        stu[i].avargrade = (stu[i].math +stu[i].English + stu[i].C) / 3.0;
    }
    if ((fp=fopen("stud", "w")) == NULL) {
        printf("文件打开失败\n");
        exit(0);
    }
    for(int i=0;i<5;i++) {
        fprintf(fp, "%d %s %d %d %d %lf\n", stu[i].ID, stu[i].name, stu[i].math, stu[i].English,
                stu[i].C, stu[i].avargrade);
    }
    fclose(fp);
    system("pause");
    return 0;
}
