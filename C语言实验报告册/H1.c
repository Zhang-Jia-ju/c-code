//将一个一维数组的9个数放入到二维数组中
#include<stdio.h>
int main()
{ 
    int arr1[9]={1,2,3,4,5,6,7,8,9};
    int arr2[3][3]={0};
 
    for(int j=0,i=0;j<3;j++)
    {
       for(int k=0;k<3;k++)
    {
      arr2[j][k]=arr1[i++];
      }
    }
    
    for(int j=0; j<3; j++)
    {
        for(int k=0; k<3;k++)
        {
            printf("%d ",arr2[j][k]);
        }
    }
    return 0;
}





































































































