#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define MAX_SIZE 34
int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[MAX_SIZE][MAX_SIZE];//暴力存储

    for (int i = 0; i < n; i++)//初始化
    {
        arr[i][0] = 1;//首尾固定为1
        arr[i][i] = 1;
        for (int j = 1; j < i; j++)
        {
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];//左上右上相加
        }
    }


    for (int is = 0; is < n; is++)//打印
    {

        for (int ps = 0; ps < n - is - 1;ps++) 
        {
            printf(" ");//居中用
        }


        for (int js = 0; js <= is; js++)
        {
            printf("%d ", arr[is][js]);
        }
        printf("\n");
    }


    return 0;
}