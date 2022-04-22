//输出9*9乘法表
#include<stdio.h>
int main()
{
  int line;
  int i;
  for(line=1;line<=9;line++)//外循环控制行
  {
      for(i=1;i<=line;i++)//内循环在同一行中确保元素
      {
          printf("%d*%d=%d ",line,i,line*i);

      }
      printf("\n");
  }
}