#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void jishu(int arr[], int i)
{
    int you = 0;
    while (you < i)
    {
        int is = 0;//遍历用
        int j = 0;//计数
        for (is = 0; is < you; is++)
        {
            if (arr[is] < arr[you])
            {
                j++;
            }
        }
        printf("%d ", j);
        you++;
    }
}

int main()
{
    int n = 0;
    int arr[100] = { 0 };
    scanf("%d", &n);
    int i = 0;
    int sb = 0;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    jishu(arr, i);
    return 0;
}