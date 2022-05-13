//使用随机数生成从-10到10的无序数存放在数组中
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 100
int main()
{
    int element, n = 10;
    int arr[MAX_SIZE] = {0}; //定义一个数组用来存放数字
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 21 - 10; //利用随机数生成-10到10之间的数
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
            if (arr[i] == arr[j])
            {

                for (element = j; element < n; element++)
                    arr[element] = arr[element + 1]; //从a[j]开始之后的元素向前挪动一个位置
                j--;
                n--; //数组长度减一次
            }
    }
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n当前数组的元素个数是%d\n", n);
    system("pause");
    return 0;
}