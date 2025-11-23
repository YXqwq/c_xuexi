#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>  // 包含malloc和free函数

int main()
{
    int m = 0;
    int n = 0;
    scanf("%d %d", &n, &m);

    // 动态分配数组
    int* arr = (int*)malloc(m * n * sizeof(int));

    // 检查分配是否成功
    if (arr == NULL) {
        printf("内存分配失败\n");
        return 1;  // 异常退出
    }

    // 使用数组...

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[m * i + j]);
        }

    }
    long long p = 0;
    for (int is = 0; is < m * n; is++)
    {
        p += arr[is];
    }
    printf("%lld", p);




    // 使用完毕后释放内存
    free(arr);
    arr = NULL;  // 避免野指针

    return 0;
}