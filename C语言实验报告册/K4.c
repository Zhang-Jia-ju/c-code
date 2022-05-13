//编写一个程序 实现具体的月份
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int mon_num = 0;
    scanf("%d", &mon_num);
    if (mon_num > 12 && mon_num < 0)
        printf("month error");
    else
        printf("%s", month[mon_num - 1]);
    system("pause");
    return 0;
}
