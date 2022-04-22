#include<stdio.h>
int main()
{
    int x,y,z;
    for(x=0;x<=9;x++)
    {
        for(y=0;y<=9;y++)
        {
            for(z=0;z<=9;z++)
            {
                if((x*100+x*10+z+y*100+z*10+z)==532)
                {
                    printf("符合条件的值x=%d,y=%d,z=%d\n",x,y,z);
                }
            }
        }
    }
    return 0;
}
