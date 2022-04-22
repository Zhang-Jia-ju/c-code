//冒泡排序,从大到小
#include<stdio.h>
int main()
{
    int i,j,k;
    int arr[10];
    printf("输入10名学生成绩:");
    for(i=0; i<10; i++)
    {
        scanf("%d",&arr[i]);
    }
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
		printf("%d ",arr[i]);
	}
}