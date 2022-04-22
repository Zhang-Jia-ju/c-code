#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    double sum=1.0;
    for(i=2;;i++)
    {
        sum = sum+pow(-1,i-1)/(double)(i*i+1);
        if(i*i+1>pow(10,5))
        {
            break;
        }
        
    }
    printf("最终的结果是%lf",sum);
    return 0;
}