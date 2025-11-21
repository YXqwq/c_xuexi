#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() 
{
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int sb = 0;
    for (i = 1; i <= n; i++)
    {
        sb = sb + pow(-1, i - 1) * i;//这里为数列的表达式可以更改
    }
    printf("%d", sb);
    return 0;
}

