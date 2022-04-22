#include<stdio.h>
int main()
{
    int arr[10]={0};
    double average;//这是平均数
    int sum =0;
    int count1,count2;
    int i,j,k;
    count1 =count2=0;
    printf("输入10名学生成绩:");
    for(i=0; i<10; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<10; i++)
    {
        sum =sum + arr[i];
    }
    average =sum/10.0;
    for(i=0; i<10; i++)
    {
        if(arr[i] >= average)
        count1++;
        else
        count2++;
    }
    //下面是一个排序
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(arr[i]<arr[j])
			{
				k=arr[i];
				arr[i]=arr[j];
				arr[j]=k;
			}
		}
		//printf("%d ",arr[i]);
	}
	putchar('\n');   
    printf("有%d名学生的成绩高于或等于平均数%.2lf分,且有%d名学生的成绩低于平均数\n",count1,average,count2);
    printf("成绩最高分是%d,成绩最低分是%d",arr[0],arr[9]);
    return 0;
}
