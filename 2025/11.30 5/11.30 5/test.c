#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

#define MAX 1000000

void wuxian_zifuchuan(char* p, int max)
{
    int pow = 0;//记录写入位置
    int num = 1;//从一开始递增
    char zifu[20] = "";//临时存储字符串

    while (pow < max - 22)//留点空间
    {

        sprintf(zifu, "%d", num);//将整形数据变为字符串
        int len = strlen(zifu);//计算要加字符串长度
        if (pow + len >= max - 1)//超过范围就跳出
        {
            break;
        }
        strcpy(p + pow, zifu);
        pow += strlen(zifu);//更新写入位置
        num++;//递增 

    }

    p[pow] = '\0';//最后添个\0保证是字符串
}

int main()
{
    char p[MAX] = { 0 };

    wuxian_zifuchuan(p, MAX);
    int n = 0;
    scanf("%d", &n);
    printf("%c", p[n - 1]);


    return 0;
}