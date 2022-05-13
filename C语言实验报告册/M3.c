//合并两个文件到一个文件中
//需要第三个文件
#include <stdio.h>
#include <stdlib.h>
int merge(char *in1,char *in2,char *out)
{
    FILE *f_in,*f_out;
    int n;
    char buf[4096];
 
    //打开输出文件
    f_out=fopen(out,"wb");
    if(!f_out) return 0;
 
    //打开并读第一个文件写到输出文件
    f_in=fopen(in1,"rb");
    if(!f_in) return 0;
    while(n=fread(buf,1,sizeof(buf),f_in))
    {
         fwrite(buf,1,n,f_out);
    }
    fclose(f_in);
 
    //打开并读第二个文件写到输出文件
    f_in=fopen(in2,"rb");
    if(!f_in) return 0;
    while(n=fread(buf,1,sizeof(buf),f_in))
    {
        fwrite(buf,1,n,f_out);
    }
    fclose(f_in);
    fclose(f_out);
    return 1;
}
 
int main()
{
    if (!merge ("file1.txt", "file2.txt", "file3.txt"))
        printf("合并失败");
    else
        printf("合并成功");
    return 0;
}