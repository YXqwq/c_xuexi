#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int n = 0;
    int k = 0;
    int m = 0;//跳几次变没人
    int arr[100] = { 0 };
    scanf("%d %d %d", &n, &k, &m);
    int rs = n;//人数
    int zr = k;//起始位置
    int sp = 0;//计数器
    for (int i = 0; i < n; i++)
    {
        arr[i] = 1;//全部初始化为1（表示有人）
    }

    while (rs > 1)
    {
        if (arr[zr] == 1)
        {
            sp++;//计数器计算到m需要的次数
            if (sp == m)
            {
                arr[zr] = 0;//变没人
                sp = 0;//计数器归零
                rs--;//剩余人数-1
            }
        }

        zr = (zr + 1) % n;//跳到下一个人，并且如果到最后（n的位置）再移动时，回到0（起始）处


    }
    for (int j = 0; j < n; j++)//遍历整个数组找有人的地方
    {
        if (arr[j] == 1)
        {
            printf("%d",j);//输出有人的地方的编号
            break;//跳出，减少不必要的遍历
        }
    }

        return 0;
}