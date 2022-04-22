#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int arr[4][4]={0};
    srand(time(NULL));
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            arr[i][j]=rand()%100+1;
        }
    }
    int sum;
    for(int i=0;i<4;i++)
    {
        sum=0;
        for(int j=0;j<3;j++)
        {
            sum = sum+arr[i][j];
        }
        arr[i][3]=sum;
    }
    for(int i=0;i<4;i++)
    {
       for(int j=0;j<4;j++)
       {
           printf("%-4.d",arr[i][j]);
       }
       printf("\n");
    }
    return 0;
}